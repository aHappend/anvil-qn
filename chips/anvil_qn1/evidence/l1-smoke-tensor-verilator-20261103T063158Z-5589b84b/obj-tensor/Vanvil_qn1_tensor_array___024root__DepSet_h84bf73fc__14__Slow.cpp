// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__14(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__14\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3801__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3801__part 
                            = vlSelf->__Vfunc_leading_zero32__3801__value;
                        vlSelf->__Vfunc_leading_zero32__3801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3813__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3813__part 
                            = vlSelf->__Vfunc_leading_zero32__3813__value;
                        vlSelf->__Vfunc_leading_zero32__3813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3813__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3825__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3825__part 
                            = vlSelf->__Vfunc_leading_zero32__3825__value;
                        vlSelf->__Vfunc_leading_zero32__3825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3837__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3837__part 
                            = vlSelf->__Vfunc_leading_zero32__3837__value;
                        vlSelf->__Vfunc_leading_zero32__3837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3849__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3849__part 
                            = vlSelf->__Vfunc_leading_zero32__3849__value;
                        vlSelf->__Vfunc_leading_zero32__3849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3849__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3861__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3861__part 
                            = vlSelf->__Vfunc_leading_zero32__3861__value;
                        vlSelf->__Vfunc_leading_zero32__3861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3873__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3873__part 
                            = vlSelf->__Vfunc_leading_zero32__3873__value;
                        vlSelf->__Vfunc_leading_zero32__3873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3885__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3885__part 
                            = vlSelf->__Vfunc_leading_zero32__3885__value;
                        vlSelf->__Vfunc_leading_zero32__3885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3885__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3897__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3897__part 
                            = vlSelf->__Vfunc_leading_zero32__3897__value;
                        vlSelf->__Vfunc_leading_zero32__3897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3909__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3909__part 
                            = vlSelf->__Vfunc_leading_zero32__3909__value;
                        vlSelf->__Vfunc_leading_zero32__3909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3921__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3921__part 
                            = vlSelf->__Vfunc_leading_zero32__3921__value;
                        vlSelf->__Vfunc_leading_zero32__3921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3933__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3933__part 
                            = vlSelf->__Vfunc_leading_zero32__3933__value;
                        vlSelf->__Vfunc_leading_zero32__3933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3945__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3945__part 
                            = vlSelf->__Vfunc_leading_zero32__3945__value;
                        vlSelf->__Vfunc_leading_zero32__3945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3957__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3957__part 
                            = vlSelf->__Vfunc_leading_zero32__3957__value;
                        vlSelf->__Vfunc_leading_zero32__3957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3969__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3969__part 
                            = vlSelf->__Vfunc_leading_zero32__3969__value;
                        vlSelf->__Vfunc_leading_zero32__3969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3981__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3981__part 
                            = vlSelf->__Vfunc_leading_zero32__3981__value;
                        vlSelf->__Vfunc_leading_zero32__3981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3993__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3993__part 
                            = vlSelf->__Vfunc_leading_zero32__3993__value;
                        vlSelf->__Vfunc_leading_zero32__3993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3993__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4005__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4005__part 
                            = vlSelf->__Vfunc_leading_zero32__4005__value;
                        vlSelf->__Vfunc_leading_zero32__4005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4017__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4017__part 
                            = vlSelf->__Vfunc_leading_zero32__4017__value;
                        vlSelf->__Vfunc_leading_zero32__4017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4029__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4029__part 
                            = vlSelf->__Vfunc_leading_zero32__4029__value;
                        vlSelf->__Vfunc_leading_zero32__4029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4029__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4041__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4041__part 
                            = vlSelf->__Vfunc_leading_zero32__4041__value;
                        vlSelf->__Vfunc_leading_zero32__4041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4053__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4053__part 
                            = vlSelf->__Vfunc_leading_zero32__4053__value;
                        vlSelf->__Vfunc_leading_zero32__4053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4065__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4065__part 
                            = vlSelf->__Vfunc_leading_zero32__4065__value;
                        vlSelf->__Vfunc_leading_zero32__4065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4065__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4077__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4077__part 
                            = vlSelf->__Vfunc_leading_zero32__4077__value;
                        vlSelf->__Vfunc_leading_zero32__4077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4089__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4089__part 
                            = vlSelf->__Vfunc_leading_zero32__4089__value;
                        vlSelf->__Vfunc_leading_zero32__4089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4101__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4101__part 
                            = vlSelf->__Vfunc_leading_zero32__4101__value;
                        vlSelf->__Vfunc_leading_zero32__4101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4113__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4113__part 
                            = vlSelf->__Vfunc_leading_zero32__4113__value;
                        vlSelf->__Vfunc_leading_zero32__4113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4125__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4125__part 
                            = vlSelf->__Vfunc_leading_zero32__4125__value;
                        vlSelf->__Vfunc_leading_zero32__4125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4137__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4137__part 
                            = vlSelf->__Vfunc_leading_zero32__4137__value;
                        vlSelf->__Vfunc_leading_zero32__4137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4149__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4149__part 
                            = vlSelf->__Vfunc_leading_zero32__4149__value;
                        vlSelf->__Vfunc_leading_zero32__4149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4161__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4161__part 
                            = vlSelf->__Vfunc_leading_zero32__4161__value;
                        vlSelf->__Vfunc_leading_zero32__4161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4173__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4173__part 
                            = vlSelf->__Vfunc_leading_zero32__4173__value;
                        vlSelf->__Vfunc_leading_zero32__4173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4185__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4185__part 
                            = vlSelf->__Vfunc_leading_zero32__4185__value;
                        vlSelf->__Vfunc_leading_zero32__4185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4197__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4197__part 
                            = vlSelf->__Vfunc_leading_zero32__4197__value;
                        vlSelf->__Vfunc_leading_zero32__4197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4209__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4209__part 
                            = vlSelf->__Vfunc_leading_zero32__4209__value;
                        vlSelf->__Vfunc_leading_zero32__4209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4221__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4221__part 
                            = vlSelf->__Vfunc_leading_zero32__4221__value;
                        vlSelf->__Vfunc_leading_zero32__4221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4233__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4233__part 
                            = vlSelf->__Vfunc_leading_zero32__4233__value;
                        vlSelf->__Vfunc_leading_zero32__4233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4245__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4245__part 
                            = vlSelf->__Vfunc_leading_zero32__4245__value;
                        vlSelf->__Vfunc_leading_zero32__4245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4257__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4257__part 
                            = vlSelf->__Vfunc_leading_zero32__4257__value;
                        vlSelf->__Vfunc_leading_zero32__4257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4269__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4269__part 
                            = vlSelf->__Vfunc_leading_zero32__4269__value;
                        vlSelf->__Vfunc_leading_zero32__4269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4281__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4281__part 
                            = vlSelf->__Vfunc_leading_zero32__4281__value;
                        vlSelf->__Vfunc_leading_zero32__4281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4293__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4293__part 
                            = vlSelf->__Vfunc_leading_zero32__4293__value;
                        vlSelf->__Vfunc_leading_zero32__4293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4305__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4305__part 
                            = vlSelf->__Vfunc_leading_zero32__4305__value;
                        vlSelf->__Vfunc_leading_zero32__4305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4317__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4317__part 
                            = vlSelf->__Vfunc_leading_zero32__4317__value;
                        vlSelf->__Vfunc_leading_zero32__4317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4329__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4329__part 
                            = vlSelf->__Vfunc_leading_zero32__4329__value;
                        vlSelf->__Vfunc_leading_zero32__4329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4341__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4341__part 
                            = vlSelf->__Vfunc_leading_zero32__4341__value;
                        vlSelf->__Vfunc_leading_zero32__4341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1287__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1287__part 
                            = vlSelf->__Vfunc_leading_zero32__1287__value;
                        vlSelf->__Vfunc_leading_zero32__1287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1287__count)));
                            vlSelf->__Vfunc_leading_zero32__1287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1287__count)));
                            vlSelf->__Vfunc_leading_zero32__1287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1287__count)));
                            vlSelf->__Vfunc_leading_zero32__1287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1287__count)));
                            vlSelf->__Vfunc_leading_zero32__1287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1299__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1299__part 
                            = vlSelf->__Vfunc_leading_zero32__1299__value;
                        vlSelf->__Vfunc_leading_zero32__1299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1299__count)));
                            vlSelf->__Vfunc_leading_zero32__1299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1299__count)));
                            vlSelf->__Vfunc_leading_zero32__1299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1299__count)));
                            vlSelf->__Vfunc_leading_zero32__1299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1299__count)));
                            vlSelf->__Vfunc_leading_zero32__1299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1311__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1311__part 
                            = vlSelf->__Vfunc_leading_zero32__1311__value;
                        vlSelf->__Vfunc_leading_zero32__1311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1311__count)));
                            vlSelf->__Vfunc_leading_zero32__1311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1311__count)));
                            vlSelf->__Vfunc_leading_zero32__1311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1311__count)));
                            vlSelf->__Vfunc_leading_zero32__1311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1311__count)));
                            vlSelf->__Vfunc_leading_zero32__1311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1323__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1323__part 
                            = vlSelf->__Vfunc_leading_zero32__1323__value;
                        vlSelf->__Vfunc_leading_zero32__1323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1323__count)));
                            vlSelf->__Vfunc_leading_zero32__1323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1323__count)));
                            vlSelf->__Vfunc_leading_zero32__1323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1323__count)));
                            vlSelf->__Vfunc_leading_zero32__1323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1323__count)));
                            vlSelf->__Vfunc_leading_zero32__1323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1335__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1335__part 
                            = vlSelf->__Vfunc_leading_zero32__1335__value;
                        vlSelf->__Vfunc_leading_zero32__1335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1335__count)));
                            vlSelf->__Vfunc_leading_zero32__1335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1335__count)));
                            vlSelf->__Vfunc_leading_zero32__1335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1335__count)));
                            vlSelf->__Vfunc_leading_zero32__1335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1335__count)));
                            vlSelf->__Vfunc_leading_zero32__1335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1347__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1347__part 
                            = vlSelf->__Vfunc_leading_zero32__1347__value;
                        vlSelf->__Vfunc_leading_zero32__1347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1347__count)));
                            vlSelf->__Vfunc_leading_zero32__1347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1347__count)));
                            vlSelf->__Vfunc_leading_zero32__1347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1347__count)));
                            vlSelf->__Vfunc_leading_zero32__1347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1347__count)));
                            vlSelf->__Vfunc_leading_zero32__1347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1359__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1359__part 
                            = vlSelf->__Vfunc_leading_zero32__1359__value;
                        vlSelf->__Vfunc_leading_zero32__1359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1359__count)));
                            vlSelf->__Vfunc_leading_zero32__1359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1359__count)));
                            vlSelf->__Vfunc_leading_zero32__1359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1359__count)));
                            vlSelf->__Vfunc_leading_zero32__1359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1359__count)));
                            vlSelf->__Vfunc_leading_zero32__1359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1371__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1371__part 
                            = vlSelf->__Vfunc_leading_zero32__1371__value;
                        vlSelf->__Vfunc_leading_zero32__1371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1371__count)));
                            vlSelf->__Vfunc_leading_zero32__1371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1371__count)));
                            vlSelf->__Vfunc_leading_zero32__1371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1371__count)));
                            vlSelf->__Vfunc_leading_zero32__1371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1371__count)));
                            vlSelf->__Vfunc_leading_zero32__1371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1383__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1383__part 
                            = vlSelf->__Vfunc_leading_zero32__1383__value;
                        vlSelf->__Vfunc_leading_zero32__1383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1383__count)));
                            vlSelf->__Vfunc_leading_zero32__1383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1383__count)));
                            vlSelf->__Vfunc_leading_zero32__1383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1383__count)));
                            vlSelf->__Vfunc_leading_zero32__1383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1383__count)));
                            vlSelf->__Vfunc_leading_zero32__1383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1395__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1395__part 
                            = vlSelf->__Vfunc_leading_zero32__1395__value;
                        vlSelf->__Vfunc_leading_zero32__1395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1395__count)));
                            vlSelf->__Vfunc_leading_zero32__1395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1395__count)));
                            vlSelf->__Vfunc_leading_zero32__1395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1395__count)));
                            vlSelf->__Vfunc_leading_zero32__1395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1395__count)));
                            vlSelf->__Vfunc_leading_zero32__1395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1407__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1407__part 
                            = vlSelf->__Vfunc_leading_zero32__1407__value;
                        vlSelf->__Vfunc_leading_zero32__1407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1407__count)));
                            vlSelf->__Vfunc_leading_zero32__1407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1407__count)));
                            vlSelf->__Vfunc_leading_zero32__1407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1407__count)));
                            vlSelf->__Vfunc_leading_zero32__1407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1407__count)));
                            vlSelf->__Vfunc_leading_zero32__1407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1419__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1419__part 
                            = vlSelf->__Vfunc_leading_zero32__1419__value;
                        vlSelf->__Vfunc_leading_zero32__1419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1419__count)));
                            vlSelf->__Vfunc_leading_zero32__1419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1419__count)));
                            vlSelf->__Vfunc_leading_zero32__1419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1419__count)));
                            vlSelf->__Vfunc_leading_zero32__1419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1419__count)));
                            vlSelf->__Vfunc_leading_zero32__1419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1431__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1431__part 
                            = vlSelf->__Vfunc_leading_zero32__1431__value;
                        vlSelf->__Vfunc_leading_zero32__1431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1431__count)));
                            vlSelf->__Vfunc_leading_zero32__1431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1431__count)));
                            vlSelf->__Vfunc_leading_zero32__1431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1431__count)));
                            vlSelf->__Vfunc_leading_zero32__1431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1431__count)));
                            vlSelf->__Vfunc_leading_zero32__1431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1443__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1443__part 
                            = vlSelf->__Vfunc_leading_zero32__1443__value;
                        vlSelf->__Vfunc_leading_zero32__1443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1443__count)));
                            vlSelf->__Vfunc_leading_zero32__1443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1443__count)));
                            vlSelf->__Vfunc_leading_zero32__1443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1443__count)));
                            vlSelf->__Vfunc_leading_zero32__1443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1443__count)));
                            vlSelf->__Vfunc_leading_zero32__1443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1455__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1455__part 
                            = vlSelf->__Vfunc_leading_zero32__1455__value;
                        vlSelf->__Vfunc_leading_zero32__1455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1455__count)));
                            vlSelf->__Vfunc_leading_zero32__1455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1455__count)));
                            vlSelf->__Vfunc_leading_zero32__1455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1455__count)));
                            vlSelf->__Vfunc_leading_zero32__1455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1455__count)));
                            vlSelf->__Vfunc_leading_zero32__1455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1467__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1467__part 
                            = vlSelf->__Vfunc_leading_zero32__1467__value;
                        vlSelf->__Vfunc_leading_zero32__1467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1467__count)));
                            vlSelf->__Vfunc_leading_zero32__1467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1467__count)));
                            vlSelf->__Vfunc_leading_zero32__1467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1467__count)));
                            vlSelf->__Vfunc_leading_zero32__1467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1467__count)));
                            vlSelf->__Vfunc_leading_zero32__1467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1479__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1479__part 
                            = vlSelf->__Vfunc_leading_zero32__1479__value;
                        vlSelf->__Vfunc_leading_zero32__1479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1479__count)));
                            vlSelf->__Vfunc_leading_zero32__1479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1479__count)));
                            vlSelf->__Vfunc_leading_zero32__1479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1479__count)));
                            vlSelf->__Vfunc_leading_zero32__1479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1479__count)));
                            vlSelf->__Vfunc_leading_zero32__1479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1491__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1491__part 
                            = vlSelf->__Vfunc_leading_zero32__1491__value;
                        vlSelf->__Vfunc_leading_zero32__1491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1491__count)));
                            vlSelf->__Vfunc_leading_zero32__1491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1491__count)));
                            vlSelf->__Vfunc_leading_zero32__1491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1491__count)));
                            vlSelf->__Vfunc_leading_zero32__1491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1491__count)));
                            vlSelf->__Vfunc_leading_zero32__1491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1503__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1503__part 
                            = vlSelf->__Vfunc_leading_zero32__1503__value;
                        vlSelf->__Vfunc_leading_zero32__1503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1503__count)));
                            vlSelf->__Vfunc_leading_zero32__1503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1503__count)));
                            vlSelf->__Vfunc_leading_zero32__1503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1503__count)));
                            vlSelf->__Vfunc_leading_zero32__1503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1503__count)));
                            vlSelf->__Vfunc_leading_zero32__1503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1515__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1515__part 
                            = vlSelf->__Vfunc_leading_zero32__1515__value;
                        vlSelf->__Vfunc_leading_zero32__1515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1515__count)));
                            vlSelf->__Vfunc_leading_zero32__1515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1515__count)));
                            vlSelf->__Vfunc_leading_zero32__1515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1515__count)));
                            vlSelf->__Vfunc_leading_zero32__1515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1515__count)));
                            vlSelf->__Vfunc_leading_zero32__1515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1527__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1527__part 
                            = vlSelf->__Vfunc_leading_zero32__1527__value;
                        vlSelf->__Vfunc_leading_zero32__1527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1527__count)));
                            vlSelf->__Vfunc_leading_zero32__1527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1527__count)));
                            vlSelf->__Vfunc_leading_zero32__1527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1527__count)));
                            vlSelf->__Vfunc_leading_zero32__1527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1527__count)));
                            vlSelf->__Vfunc_leading_zero32__1527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1539__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1539__part 
                            = vlSelf->__Vfunc_leading_zero32__1539__value;
                        vlSelf->__Vfunc_leading_zero32__1539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1539__count)));
                            vlSelf->__Vfunc_leading_zero32__1539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1539__count)));
                            vlSelf->__Vfunc_leading_zero32__1539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1539__count)));
                            vlSelf->__Vfunc_leading_zero32__1539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1539__count)));
                            vlSelf->__Vfunc_leading_zero32__1539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1551__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1551__part 
                            = vlSelf->__Vfunc_leading_zero32__1551__value;
                        vlSelf->__Vfunc_leading_zero32__1551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1551__count)));
                            vlSelf->__Vfunc_leading_zero32__1551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1551__count)));
                            vlSelf->__Vfunc_leading_zero32__1551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1551__count)));
                            vlSelf->__Vfunc_leading_zero32__1551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1551__count)));
                            vlSelf->__Vfunc_leading_zero32__1551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1563__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1563__part 
                            = vlSelf->__Vfunc_leading_zero32__1563__value;
                        vlSelf->__Vfunc_leading_zero32__1563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1563__count)));
                            vlSelf->__Vfunc_leading_zero32__1563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1563__count)));
                            vlSelf->__Vfunc_leading_zero32__1563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1563__count)));
                            vlSelf->__Vfunc_leading_zero32__1563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1563__count)));
                            vlSelf->__Vfunc_leading_zero32__1563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1575__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1575__part 
                            = vlSelf->__Vfunc_leading_zero32__1575__value;
                        vlSelf->__Vfunc_leading_zero32__1575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1575__count)));
                            vlSelf->__Vfunc_leading_zero32__1575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1575__count)));
                            vlSelf->__Vfunc_leading_zero32__1575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1575__count)));
                            vlSelf->__Vfunc_leading_zero32__1575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1575__count)));
                            vlSelf->__Vfunc_leading_zero32__1575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1587__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1587__part 
                            = vlSelf->__Vfunc_leading_zero32__1587__value;
                        vlSelf->__Vfunc_leading_zero32__1587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1587__count)));
                            vlSelf->__Vfunc_leading_zero32__1587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1587__count)));
                            vlSelf->__Vfunc_leading_zero32__1587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1587__count)));
                            vlSelf->__Vfunc_leading_zero32__1587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1587__count)));
                            vlSelf->__Vfunc_leading_zero32__1587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1599__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1599__part 
                            = vlSelf->__Vfunc_leading_zero32__1599__value;
                        vlSelf->__Vfunc_leading_zero32__1599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1599__count)));
                            vlSelf->__Vfunc_leading_zero32__1599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1599__count)));
                            vlSelf->__Vfunc_leading_zero32__1599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1599__count)));
                            vlSelf->__Vfunc_leading_zero32__1599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1599__count)));
                            vlSelf->__Vfunc_leading_zero32__1599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1611__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1611__part 
                            = vlSelf->__Vfunc_leading_zero32__1611__value;
                        vlSelf->__Vfunc_leading_zero32__1611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1611__count)));
                            vlSelf->__Vfunc_leading_zero32__1611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1611__count)));
                            vlSelf->__Vfunc_leading_zero32__1611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1611__count)));
                            vlSelf->__Vfunc_leading_zero32__1611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1611__count)));
                            vlSelf->__Vfunc_leading_zero32__1611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1623__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1623__part 
                            = vlSelf->__Vfunc_leading_zero32__1623__value;
                        vlSelf->__Vfunc_leading_zero32__1623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1623__count)));
                            vlSelf->__Vfunc_leading_zero32__1623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1623__count)));
                            vlSelf->__Vfunc_leading_zero32__1623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1623__count)));
                            vlSelf->__Vfunc_leading_zero32__1623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1623__count)));
                            vlSelf->__Vfunc_leading_zero32__1623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1635__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1635__part 
                            = vlSelf->__Vfunc_leading_zero32__1635__value;
                        vlSelf->__Vfunc_leading_zero32__1635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1635__count)));
                            vlSelf->__Vfunc_leading_zero32__1635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1635__count)));
                            vlSelf->__Vfunc_leading_zero32__1635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1635__count)));
                            vlSelf->__Vfunc_leading_zero32__1635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1635__count)));
                            vlSelf->__Vfunc_leading_zero32__1635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1647__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1647__part 
                            = vlSelf->__Vfunc_leading_zero32__1647__value;
                        vlSelf->__Vfunc_leading_zero32__1647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1647__count)));
                            vlSelf->__Vfunc_leading_zero32__1647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1647__count)));
                            vlSelf->__Vfunc_leading_zero32__1647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1647__count)));
                            vlSelf->__Vfunc_leading_zero32__1647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1647__count)));
                            vlSelf->__Vfunc_leading_zero32__1647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1659__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1659__part 
                            = vlSelf->__Vfunc_leading_zero32__1659__value;
                        vlSelf->__Vfunc_leading_zero32__1659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1659__count)));
                            vlSelf->__Vfunc_leading_zero32__1659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1659__count)));
                            vlSelf->__Vfunc_leading_zero32__1659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1659__count)));
                            vlSelf->__Vfunc_leading_zero32__1659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1659__count)));
                            vlSelf->__Vfunc_leading_zero32__1659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1671__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1671__part 
                            = vlSelf->__Vfunc_leading_zero32__1671__value;
                        vlSelf->__Vfunc_leading_zero32__1671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1671__count)));
                            vlSelf->__Vfunc_leading_zero32__1671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1671__count)));
                            vlSelf->__Vfunc_leading_zero32__1671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1671__count)));
                            vlSelf->__Vfunc_leading_zero32__1671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1671__count)));
                            vlSelf->__Vfunc_leading_zero32__1671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1683__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1683__part 
                            = vlSelf->__Vfunc_leading_zero32__1683__value;
                        vlSelf->__Vfunc_leading_zero32__1683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1683__count)));
                            vlSelf->__Vfunc_leading_zero32__1683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1683__count)));
                            vlSelf->__Vfunc_leading_zero32__1683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1683__count)));
                            vlSelf->__Vfunc_leading_zero32__1683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1683__count)));
                            vlSelf->__Vfunc_leading_zero32__1683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1695__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1695__part 
                            = vlSelf->__Vfunc_leading_zero32__1695__value;
                        vlSelf->__Vfunc_leading_zero32__1695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1695__count)));
                            vlSelf->__Vfunc_leading_zero32__1695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1695__count)));
                            vlSelf->__Vfunc_leading_zero32__1695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1695__count)));
                            vlSelf->__Vfunc_leading_zero32__1695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1695__count)));
                            vlSelf->__Vfunc_leading_zero32__1695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1707__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1707__part 
                            = vlSelf->__Vfunc_leading_zero32__1707__value;
                        vlSelf->__Vfunc_leading_zero32__1707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1707__count)));
                            vlSelf->__Vfunc_leading_zero32__1707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1707__count)));
                            vlSelf->__Vfunc_leading_zero32__1707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1707__count)));
                            vlSelf->__Vfunc_leading_zero32__1707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1707__count)));
                            vlSelf->__Vfunc_leading_zero32__1707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1719__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1719__part 
                            = vlSelf->__Vfunc_leading_zero32__1719__value;
                        vlSelf->__Vfunc_leading_zero32__1719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1719__count)));
                            vlSelf->__Vfunc_leading_zero32__1719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1719__count)));
                            vlSelf->__Vfunc_leading_zero32__1719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1719__count)));
                            vlSelf->__Vfunc_leading_zero32__1719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1719__count)));
                            vlSelf->__Vfunc_leading_zero32__1719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1719__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1731__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1731__part 
                            = vlSelf->__Vfunc_leading_zero32__1731__value;
                        vlSelf->__Vfunc_leading_zero32__1731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1743__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1743__part 
                            = vlSelf->__Vfunc_leading_zero32__1743__value;
                        vlSelf->__Vfunc_leading_zero32__1743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1755__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1755__part 
                            = vlSelf->__Vfunc_leading_zero32__1755__value;
                        vlSelf->__Vfunc_leading_zero32__1755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1767__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1767__part 
                            = vlSelf->__Vfunc_leading_zero32__1767__value;
                        vlSelf->__Vfunc_leading_zero32__1767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1779__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1779__part 
                            = vlSelf->__Vfunc_leading_zero32__1779__value;
                        vlSelf->__Vfunc_leading_zero32__1779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1791__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1791__part 
                            = vlSelf->__Vfunc_leading_zero32__1791__value;
                        vlSelf->__Vfunc_leading_zero32__1791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1803__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1803__part 
                            = vlSelf->__Vfunc_leading_zero32__1803__value;
                        vlSelf->__Vfunc_leading_zero32__1803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1815__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1815__part 
                            = vlSelf->__Vfunc_leading_zero32__1815__value;
                        vlSelf->__Vfunc_leading_zero32__1815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1815__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1827__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1827__part 
                            = vlSelf->__Vfunc_leading_zero32__1827__value;
                        vlSelf->__Vfunc_leading_zero32__1827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1839__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1839__part 
                            = vlSelf->__Vfunc_leading_zero32__1839__value;
                        vlSelf->__Vfunc_leading_zero32__1839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1851__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1851__part 
                            = vlSelf->__Vfunc_leading_zero32__1851__value;
                        vlSelf->__Vfunc_leading_zero32__1851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1851__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1863__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1863__part 
                            = vlSelf->__Vfunc_leading_zero32__1863__value;
                        vlSelf->__Vfunc_leading_zero32__1863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1863__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1875__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1875__part 
                            = vlSelf->__Vfunc_leading_zero32__1875__value;
                        vlSelf->__Vfunc_leading_zero32__1875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1887__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1887__part 
                            = vlSelf->__Vfunc_leading_zero32__1887__value;
                        vlSelf->__Vfunc_leading_zero32__1887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1899__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1899__part 
                            = vlSelf->__Vfunc_leading_zero32__1899__value;
                        vlSelf->__Vfunc_leading_zero32__1899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1911__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1911__part 
                            = vlSelf->__Vfunc_leading_zero32__1911__value;
                        vlSelf->__Vfunc_leading_zero32__1911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1923__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1923__part 
                            = vlSelf->__Vfunc_leading_zero32__1923__value;
                        vlSelf->__Vfunc_leading_zero32__1923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1935__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1935__part 
                            = vlSelf->__Vfunc_leading_zero32__1935__value;
                        vlSelf->__Vfunc_leading_zero32__1935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1947__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1947__part 
                            = vlSelf->__Vfunc_leading_zero32__1947__value;
                        vlSelf->__Vfunc_leading_zero32__1947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1959__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1959__part 
                            = vlSelf->__Vfunc_leading_zero32__1959__value;
                        vlSelf->__Vfunc_leading_zero32__1959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1971__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1971__part 
                            = vlSelf->__Vfunc_leading_zero32__1971__value;
                        vlSelf->__Vfunc_leading_zero32__1971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1983__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1983__part 
                            = vlSelf->__Vfunc_leading_zero32__1983__value;
                        vlSelf->__Vfunc_leading_zero32__1983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1995__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1995__part 
                            = vlSelf->__Vfunc_leading_zero32__1995__value;
                        vlSelf->__Vfunc_leading_zero32__1995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2007__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2007__part 
                            = vlSelf->__Vfunc_leading_zero32__2007__value;
                        vlSelf->__Vfunc_leading_zero32__2007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2019__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2019__part 
                            = vlSelf->__Vfunc_leading_zero32__2019__value;
                        vlSelf->__Vfunc_leading_zero32__2019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2031__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2031__part 
                            = vlSelf->__Vfunc_leading_zero32__2031__value;
                        vlSelf->__Vfunc_leading_zero32__2031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2031__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2043__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2043__part 
                            = vlSelf->__Vfunc_leading_zero32__2043__value;
                        vlSelf->__Vfunc_leading_zero32__2043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2055__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2055__part 
                            = vlSelf->__Vfunc_leading_zero32__2055__value;
                        vlSelf->__Vfunc_leading_zero32__2055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2067__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2067__part 
                            = vlSelf->__Vfunc_leading_zero32__2067__value;
                        vlSelf->__Vfunc_leading_zero32__2067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2067__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2079__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2079__part 
                            = vlSelf->__Vfunc_leading_zero32__2079__value;
                        vlSelf->__Vfunc_leading_zero32__2079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2091__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2091__part 
                            = vlSelf->__Vfunc_leading_zero32__2091__value;
                        vlSelf->__Vfunc_leading_zero32__2091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2103__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2103__part 
                            = vlSelf->__Vfunc_leading_zero32__2103__value;
                        vlSelf->__Vfunc_leading_zero32__2103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2103__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2115__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2115__part 
                            = vlSelf->__Vfunc_leading_zero32__2115__value;
                        vlSelf->__Vfunc_leading_zero32__2115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2127__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2127__part 
                            = vlSelf->__Vfunc_leading_zero32__2127__value;
                        vlSelf->__Vfunc_leading_zero32__2127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2139__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2139__part 
                            = vlSelf->__Vfunc_leading_zero32__2139__value;
                        vlSelf->__Vfunc_leading_zero32__2139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2151__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2151__part 
                            = vlSelf->__Vfunc_leading_zero32__2151__value;
                        vlSelf->__Vfunc_leading_zero32__2151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2163__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2163__part 
                            = vlSelf->__Vfunc_leading_zero32__2163__value;
                        vlSelf->__Vfunc_leading_zero32__2163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2175__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2175__part 
                            = vlSelf->__Vfunc_leading_zero32__2175__value;
                        vlSelf->__Vfunc_leading_zero32__2175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2187__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2187__part 
                            = vlSelf->__Vfunc_leading_zero32__2187__value;
                        vlSelf->__Vfunc_leading_zero32__2187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2199__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2199__part 
                            = vlSelf->__Vfunc_leading_zero32__2199__value;
                        vlSelf->__Vfunc_leading_zero32__2199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2211__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2211__part 
                            = vlSelf->__Vfunc_leading_zero32__2211__value;
                        vlSelf->__Vfunc_leading_zero32__2211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2223__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2223__part 
                            = vlSelf->__Vfunc_leading_zero32__2223__value;
                        vlSelf->__Vfunc_leading_zero32__2223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2235__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2235__part 
                            = vlSelf->__Vfunc_leading_zero32__2235__value;
                        vlSelf->__Vfunc_leading_zero32__2235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2247__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2247__part 
                            = vlSelf->__Vfunc_leading_zero32__2247__value;
                        vlSelf->__Vfunc_leading_zero32__2247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2259__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2259__part 
                            = vlSelf->__Vfunc_leading_zero32__2259__value;
                        vlSelf->__Vfunc_leading_zero32__2259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2271__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2271__part 
                            = vlSelf->__Vfunc_leading_zero32__2271__value;
                        vlSelf->__Vfunc_leading_zero32__2271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2283__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2283__part 
                            = vlSelf->__Vfunc_leading_zero32__2283__value;
                        vlSelf->__Vfunc_leading_zero32__2283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2295__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2295__part 
                            = vlSelf->__Vfunc_leading_zero32__2295__value;
                        vlSelf->__Vfunc_leading_zero32__2295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2307__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2307__part 
                            = vlSelf->__Vfunc_leading_zero32__2307__value;
                        vlSelf->__Vfunc_leading_zero32__2307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2319__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2319__part 
                            = vlSelf->__Vfunc_leading_zero32__2319__value;
                        vlSelf->__Vfunc_leading_zero32__2319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2331__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2331__part 
                            = vlSelf->__Vfunc_leading_zero32__2331__value;
                        vlSelf->__Vfunc_leading_zero32__2331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2343__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2343__part 
                            = vlSelf->__Vfunc_leading_zero32__2343__value;
                        vlSelf->__Vfunc_leading_zero32__2343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2355__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2355__part 
                            = vlSelf->__Vfunc_leading_zero32__2355__value;
                        vlSelf->__Vfunc_leading_zero32__2355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2367__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2367__part 
                            = vlSelf->__Vfunc_leading_zero32__2367__value;
                        vlSelf->__Vfunc_leading_zero32__2367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2379__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2379__part 
                            = vlSelf->__Vfunc_leading_zero32__2379__value;
                        vlSelf->__Vfunc_leading_zero32__2379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2391__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2391__part 
                            = vlSelf->__Vfunc_leading_zero32__2391__value;
                        vlSelf->__Vfunc_leading_zero32__2391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2403__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2403__part 
                            = vlSelf->__Vfunc_leading_zero32__2403__value;
                        vlSelf->__Vfunc_leading_zero32__2403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2415__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2415__part 
                            = vlSelf->__Vfunc_leading_zero32__2415__value;
                        vlSelf->__Vfunc_leading_zero32__2415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2427__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2427__part 
                            = vlSelf->__Vfunc_leading_zero32__2427__value;
                        vlSelf->__Vfunc_leading_zero32__2427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2439__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2439__part 
                            = vlSelf->__Vfunc_leading_zero32__2439__value;
                        vlSelf->__Vfunc_leading_zero32__2439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2451__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2451__part 
                            = vlSelf->__Vfunc_leading_zero32__2451__value;
                        vlSelf->__Vfunc_leading_zero32__2451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2463__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2463__part 
                            = vlSelf->__Vfunc_leading_zero32__2463__value;
                        vlSelf->__Vfunc_leading_zero32__2463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2475__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2475__part 
                            = vlSelf->__Vfunc_leading_zero32__2475__value;
                        vlSelf->__Vfunc_leading_zero32__2475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2487__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2487__part 
                            = vlSelf->__Vfunc_leading_zero32__2487__value;
                        vlSelf->__Vfunc_leading_zero32__2487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2499__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2499__part 
                            = vlSelf->__Vfunc_leading_zero32__2499__value;
                        vlSelf->__Vfunc_leading_zero32__2499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2511__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2511__part 
                            = vlSelf->__Vfunc_leading_zero32__2511__value;
                        vlSelf->__Vfunc_leading_zero32__2511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2523__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2523__part 
                            = vlSelf->__Vfunc_leading_zero32__2523__value;
                        vlSelf->__Vfunc_leading_zero32__2523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2535__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2535__part 
                            = vlSelf->__Vfunc_leading_zero32__2535__value;
                        vlSelf->__Vfunc_leading_zero32__2535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2547__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2547__part 
                            = vlSelf->__Vfunc_leading_zero32__2547__value;
                        vlSelf->__Vfunc_leading_zero32__2547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2559__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2559__part 
                            = vlSelf->__Vfunc_leading_zero32__2559__value;
                        vlSelf->__Vfunc_leading_zero32__2559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2571__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2571__part 
                            = vlSelf->__Vfunc_leading_zero32__2571__value;
                        vlSelf->__Vfunc_leading_zero32__2571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2583__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2583__part 
                            = vlSelf->__Vfunc_leading_zero32__2583__value;
                        vlSelf->__Vfunc_leading_zero32__2583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2595__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2595__part 
                            = vlSelf->__Vfunc_leading_zero32__2595__value;
                        vlSelf->__Vfunc_leading_zero32__2595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2607__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2607__part 
                            = vlSelf->__Vfunc_leading_zero32__2607__value;
                        vlSelf->__Vfunc_leading_zero32__2607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2619__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2619__part 
                            = vlSelf->__Vfunc_leading_zero32__2619__value;
                        vlSelf->__Vfunc_leading_zero32__2619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2631__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2631__part 
                            = vlSelf->__Vfunc_leading_zero32__2631__value;
                        vlSelf->__Vfunc_leading_zero32__2631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2643__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2643__part 
                            = vlSelf->__Vfunc_leading_zero32__2643__value;
                        vlSelf->__Vfunc_leading_zero32__2643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2655__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2655__part 
                            = vlSelf->__Vfunc_leading_zero32__2655__value;
                        vlSelf->__Vfunc_leading_zero32__2655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2667__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2667__part 
                            = vlSelf->__Vfunc_leading_zero32__2667__value;
                        vlSelf->__Vfunc_leading_zero32__2667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2679__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2679__part 
                            = vlSelf->__Vfunc_leading_zero32__2679__value;
                        vlSelf->__Vfunc_leading_zero32__2679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2691__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2691__part 
                            = vlSelf->__Vfunc_leading_zero32__2691__value;
                        vlSelf->__Vfunc_leading_zero32__2691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2703__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2703__part 
                            = vlSelf->__Vfunc_leading_zero32__2703__value;
                        vlSelf->__Vfunc_leading_zero32__2703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2715__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2715__part 
                            = vlSelf->__Vfunc_leading_zero32__2715__value;
                        vlSelf->__Vfunc_leading_zero32__2715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2727__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2727__part 
                            = vlSelf->__Vfunc_leading_zero32__2727__value;
                        vlSelf->__Vfunc_leading_zero32__2727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2739__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2739__part 
                            = vlSelf->__Vfunc_leading_zero32__2739__value;
                        vlSelf->__Vfunc_leading_zero32__2739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2751__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2751__part 
                            = vlSelf->__Vfunc_leading_zero32__2751__value;
                        vlSelf->__Vfunc_leading_zero32__2751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2763__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2763__part 
                            = vlSelf->__Vfunc_leading_zero32__2763__value;
                        vlSelf->__Vfunc_leading_zero32__2763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2775__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2775__part 
                            = vlSelf->__Vfunc_leading_zero32__2775__value;
                        vlSelf->__Vfunc_leading_zero32__2775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2787__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2787__part 
                            = vlSelf->__Vfunc_leading_zero32__2787__value;
                        vlSelf->__Vfunc_leading_zero32__2787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2799__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2799__part 
                            = vlSelf->__Vfunc_leading_zero32__2799__value;
                        vlSelf->__Vfunc_leading_zero32__2799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2811__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2811__part 
                            = vlSelf->__Vfunc_leading_zero32__2811__value;
                        vlSelf->__Vfunc_leading_zero32__2811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2823__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2823__part 
                            = vlSelf->__Vfunc_leading_zero32__2823__value;
                        vlSelf->__Vfunc_leading_zero32__2823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2835__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2835__part 
                            = vlSelf->__Vfunc_leading_zero32__2835__value;
                        vlSelf->__Vfunc_leading_zero32__2835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2847__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2847__part 
                            = vlSelf->__Vfunc_leading_zero32__2847__value;
                        vlSelf->__Vfunc_leading_zero32__2847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2859__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2859__part 
                            = vlSelf->__Vfunc_leading_zero32__2859__value;
                        vlSelf->__Vfunc_leading_zero32__2859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2871__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2871__part 
                            = vlSelf->__Vfunc_leading_zero32__2871__value;
                        vlSelf->__Vfunc_leading_zero32__2871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2883__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2883__part 
                            = vlSelf->__Vfunc_leading_zero32__2883__value;
                        vlSelf->__Vfunc_leading_zero32__2883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2895__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2895__part 
                            = vlSelf->__Vfunc_leading_zero32__2895__value;
                        vlSelf->__Vfunc_leading_zero32__2895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2907__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2907__part 
                            = vlSelf->__Vfunc_leading_zero32__2907__value;
                        vlSelf->__Vfunc_leading_zero32__2907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2919__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2919__part 
                            = vlSelf->__Vfunc_leading_zero32__2919__value;
                        vlSelf->__Vfunc_leading_zero32__2919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2931__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2931__part 
                            = vlSelf->__Vfunc_leading_zero32__2931__value;
                        vlSelf->__Vfunc_leading_zero32__2931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2931__Vfuncout)) 
                             - (IData)(8U))));
}
