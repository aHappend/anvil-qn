// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__28(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__28\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3875__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3875__part 
                            = vlSelf->__Vfunc_leading_zero32__3875__value;
                        vlSelf->__Vfunc_leading_zero32__3875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                            vlSelf->__Vfunc_leading_zero32__3875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3887__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3887__part 
                            = vlSelf->__Vfunc_leading_zero32__3887__value;
                        vlSelf->__Vfunc_leading_zero32__3887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                            vlSelf->__Vfunc_leading_zero32__3887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3899__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3899__part 
                            = vlSelf->__Vfunc_leading_zero32__3899__value;
                        vlSelf->__Vfunc_leading_zero32__3899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                            vlSelf->__Vfunc_leading_zero32__3899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3911__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3911__part 
                            = vlSelf->__Vfunc_leading_zero32__3911__value;
                        vlSelf->__Vfunc_leading_zero32__3911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                            vlSelf->__Vfunc_leading_zero32__3911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3923__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3923__part 
                            = vlSelf->__Vfunc_leading_zero32__3923__value;
                        vlSelf->__Vfunc_leading_zero32__3923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                            vlSelf->__Vfunc_leading_zero32__3923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3935__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3935__part 
                            = vlSelf->__Vfunc_leading_zero32__3935__value;
                        vlSelf->__Vfunc_leading_zero32__3935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                            vlSelf->__Vfunc_leading_zero32__3935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3947__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3947__part 
                            = vlSelf->__Vfunc_leading_zero32__3947__value;
                        vlSelf->__Vfunc_leading_zero32__3947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                            vlSelf->__Vfunc_leading_zero32__3947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3959__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3959__part 
                            = vlSelf->__Vfunc_leading_zero32__3959__value;
                        vlSelf->__Vfunc_leading_zero32__3959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                            vlSelf->__Vfunc_leading_zero32__3959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3971__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3971__part 
                            = vlSelf->__Vfunc_leading_zero32__3971__value;
                        vlSelf->__Vfunc_leading_zero32__3971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                            vlSelf->__Vfunc_leading_zero32__3971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3983__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3983__part 
                            = vlSelf->__Vfunc_leading_zero32__3983__value;
                        vlSelf->__Vfunc_leading_zero32__3983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                            vlSelf->__Vfunc_leading_zero32__3983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3995__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3995__part 
                            = vlSelf->__Vfunc_leading_zero32__3995__value;
                        vlSelf->__Vfunc_leading_zero32__3995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                            vlSelf->__Vfunc_leading_zero32__3995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4007__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4007__part 
                            = vlSelf->__Vfunc_leading_zero32__4007__value;
                        vlSelf->__Vfunc_leading_zero32__4007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                            vlSelf->__Vfunc_leading_zero32__4007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4019__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4019__part 
                            = vlSelf->__Vfunc_leading_zero32__4019__value;
                        vlSelf->__Vfunc_leading_zero32__4019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                            vlSelf->__Vfunc_leading_zero32__4019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4031__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4031__part 
                            = vlSelf->__Vfunc_leading_zero32__4031__value;
                        vlSelf->__Vfunc_leading_zero32__4031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                            vlSelf->__Vfunc_leading_zero32__4031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4031__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4043__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4043__part 
                            = vlSelf->__Vfunc_leading_zero32__4043__value;
                        vlSelf->__Vfunc_leading_zero32__4043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                            vlSelf->__Vfunc_leading_zero32__4043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4055__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4055__part 
                            = vlSelf->__Vfunc_leading_zero32__4055__value;
                        vlSelf->__Vfunc_leading_zero32__4055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                            vlSelf->__Vfunc_leading_zero32__4055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4067__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4067__part 
                            = vlSelf->__Vfunc_leading_zero32__4067__value;
                        vlSelf->__Vfunc_leading_zero32__4067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                            vlSelf->__Vfunc_leading_zero32__4067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4067__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4079__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4079__part 
                            = vlSelf->__Vfunc_leading_zero32__4079__value;
                        vlSelf->__Vfunc_leading_zero32__4079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                            vlSelf->__Vfunc_leading_zero32__4079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4091__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4091__part 
                            = vlSelf->__Vfunc_leading_zero32__4091__value;
                        vlSelf->__Vfunc_leading_zero32__4091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                            vlSelf->__Vfunc_leading_zero32__4091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4103__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4103__part 
                            = vlSelf->__Vfunc_leading_zero32__4103__value;
                        vlSelf->__Vfunc_leading_zero32__4103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                            vlSelf->__Vfunc_leading_zero32__4103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4103__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4115__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4115__part 
                            = vlSelf->__Vfunc_leading_zero32__4115__value;
                        vlSelf->__Vfunc_leading_zero32__4115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                            vlSelf->__Vfunc_leading_zero32__4115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4127__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4127__part 
                            = vlSelf->__Vfunc_leading_zero32__4127__value;
                        vlSelf->__Vfunc_leading_zero32__4127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                            vlSelf->__Vfunc_leading_zero32__4127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4139__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4139__part 
                            = vlSelf->__Vfunc_leading_zero32__4139__value;
                        vlSelf->__Vfunc_leading_zero32__4139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                            vlSelf->__Vfunc_leading_zero32__4139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4151__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4151__part 
                            = vlSelf->__Vfunc_leading_zero32__4151__value;
                        vlSelf->__Vfunc_leading_zero32__4151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                            vlSelf->__Vfunc_leading_zero32__4151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4163__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4163__part 
                            = vlSelf->__Vfunc_leading_zero32__4163__value;
                        vlSelf->__Vfunc_leading_zero32__4163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                            vlSelf->__Vfunc_leading_zero32__4163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4175__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4175__part 
                            = vlSelf->__Vfunc_leading_zero32__4175__value;
                        vlSelf->__Vfunc_leading_zero32__4175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                            vlSelf->__Vfunc_leading_zero32__4175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4187__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4187__part 
                            = vlSelf->__Vfunc_leading_zero32__4187__value;
                        vlSelf->__Vfunc_leading_zero32__4187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                            vlSelf->__Vfunc_leading_zero32__4187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4199__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4199__part 
                            = vlSelf->__Vfunc_leading_zero32__4199__value;
                        vlSelf->__Vfunc_leading_zero32__4199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                            vlSelf->__Vfunc_leading_zero32__4199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4211__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4211__part 
                            = vlSelf->__Vfunc_leading_zero32__4211__value;
                        vlSelf->__Vfunc_leading_zero32__4211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                            vlSelf->__Vfunc_leading_zero32__4211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4223__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4223__part 
                            = vlSelf->__Vfunc_leading_zero32__4223__value;
                        vlSelf->__Vfunc_leading_zero32__4223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                            vlSelf->__Vfunc_leading_zero32__4223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4235__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4235__part 
                            = vlSelf->__Vfunc_leading_zero32__4235__value;
                        vlSelf->__Vfunc_leading_zero32__4235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                            vlSelf->__Vfunc_leading_zero32__4235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4247__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4247__part 
                            = vlSelf->__Vfunc_leading_zero32__4247__value;
                        vlSelf->__Vfunc_leading_zero32__4247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                            vlSelf->__Vfunc_leading_zero32__4247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4259__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4259__part 
                            = vlSelf->__Vfunc_leading_zero32__4259__value;
                        vlSelf->__Vfunc_leading_zero32__4259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                            vlSelf->__Vfunc_leading_zero32__4259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4271__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4271__part 
                            = vlSelf->__Vfunc_leading_zero32__4271__value;
                        vlSelf->__Vfunc_leading_zero32__4271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4283__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4283__part 
                            = vlSelf->__Vfunc_leading_zero32__4283__value;
                        vlSelf->__Vfunc_leading_zero32__4283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                            vlSelf->__Vfunc_leading_zero32__4283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4295__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4295__part 
                            = vlSelf->__Vfunc_leading_zero32__4295__value;
                        vlSelf->__Vfunc_leading_zero32__4295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                            vlSelf->__Vfunc_leading_zero32__4295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4307__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4307__part 
                            = vlSelf->__Vfunc_leading_zero32__4307__value;
                        vlSelf->__Vfunc_leading_zero32__4307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4319__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4319__part 
                            = vlSelf->__Vfunc_leading_zero32__4319__value;
                        vlSelf->__Vfunc_leading_zero32__4319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                            vlSelf->__Vfunc_leading_zero32__4319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4331__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4331__part 
                            = vlSelf->__Vfunc_leading_zero32__4331__value;
                        vlSelf->__Vfunc_leading_zero32__4331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                            vlSelf->__Vfunc_leading_zero32__4331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4343__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4343__part 
                            = vlSelf->__Vfunc_leading_zero32__4343__value;
                        vlSelf->__Vfunc_leading_zero32__4343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4355__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4355__part 
                            = vlSelf->__Vfunc_leading_zero32__4355__value;
                        vlSelf->__Vfunc_leading_zero32__4355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                            vlSelf->__Vfunc_leading_zero32__4355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4367__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4367__part 
                            = vlSelf->__Vfunc_leading_zero32__4367__value;
                        vlSelf->__Vfunc_leading_zero32__4367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                            vlSelf->__Vfunc_leading_zero32__4367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4379__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4379__part 
                            = vlSelf->__Vfunc_leading_zero32__4379__value;
                        vlSelf->__Vfunc_leading_zero32__4379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4391__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4391__part 
                            = vlSelf->__Vfunc_leading_zero32__4391__value;
                        vlSelf->__Vfunc_leading_zero32__4391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                            vlSelf->__Vfunc_leading_zero32__4391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4403__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4403__part 
                            = vlSelf->__Vfunc_leading_zero32__4403__value;
                        vlSelf->__Vfunc_leading_zero32__4403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                            vlSelf->__Vfunc_leading_zero32__4403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4415__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4415__part 
                            = vlSelf->__Vfunc_leading_zero32__4415__value;
                        vlSelf->__Vfunc_leading_zero32__4415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4427__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4427__part 
                            = vlSelf->__Vfunc_leading_zero32__4427__value;
                        vlSelf->__Vfunc_leading_zero32__4427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                            vlSelf->__Vfunc_leading_zero32__4427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4439__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4439__part 
                            = vlSelf->__Vfunc_leading_zero32__4439__value;
                        vlSelf->__Vfunc_leading_zero32__4439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                            vlSelf->__Vfunc_leading_zero32__4439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4451__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4451__part 
                            = vlSelf->__Vfunc_leading_zero32__4451__value;
                        vlSelf->__Vfunc_leading_zero32__4451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4463__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4463__part 
                            = vlSelf->__Vfunc_leading_zero32__4463__value;
                        vlSelf->__Vfunc_leading_zero32__4463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                            vlSelf->__Vfunc_leading_zero32__4463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4475__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4475__part 
                            = vlSelf->__Vfunc_leading_zero32__4475__value;
                        vlSelf->__Vfunc_leading_zero32__4475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                            vlSelf->__Vfunc_leading_zero32__4475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4487__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4487__part 
                            = vlSelf->__Vfunc_leading_zero32__4487__value;
                        vlSelf->__Vfunc_leading_zero32__4487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4499__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4499__part 
                            = vlSelf->__Vfunc_leading_zero32__4499__value;
                        vlSelf->__Vfunc_leading_zero32__4499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                            vlSelf->__Vfunc_leading_zero32__4499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4511__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4511__part 
                            = vlSelf->__Vfunc_leading_zero32__4511__value;
                        vlSelf->__Vfunc_leading_zero32__4511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                            vlSelf->__Vfunc_leading_zero32__4511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4523__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4523__part 
                            = vlSelf->__Vfunc_leading_zero32__4523__value;
                        vlSelf->__Vfunc_leading_zero32__4523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4535__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4535__part 
                            = vlSelf->__Vfunc_leading_zero32__4535__value;
                        vlSelf->__Vfunc_leading_zero32__4535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                            vlSelf->__Vfunc_leading_zero32__4535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4547__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4547__part 
                            = vlSelf->__Vfunc_leading_zero32__4547__value;
                        vlSelf->__Vfunc_leading_zero32__4547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                            vlSelf->__Vfunc_leading_zero32__4547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4559__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4559__part 
                            = vlSelf->__Vfunc_leading_zero32__4559__value;
                        vlSelf->__Vfunc_leading_zero32__4559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4571__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4571__part 
                            = vlSelf->__Vfunc_leading_zero32__4571__value;
                        vlSelf->__Vfunc_leading_zero32__4571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                            vlSelf->__Vfunc_leading_zero32__4571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4583__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4583__part 
                            = vlSelf->__Vfunc_leading_zero32__4583__value;
                        vlSelf->__Vfunc_leading_zero32__4583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                            vlSelf->__Vfunc_leading_zero32__4583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4595__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4595__part 
                            = vlSelf->__Vfunc_leading_zero32__4595__value;
                        vlSelf->__Vfunc_leading_zero32__4595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4607__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4607__part 
                            = vlSelf->__Vfunc_leading_zero32__4607__value;
                        vlSelf->__Vfunc_leading_zero32__4607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                            vlSelf->__Vfunc_leading_zero32__4607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4619__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4619__part 
                            = vlSelf->__Vfunc_leading_zero32__4619__value;
                        vlSelf->__Vfunc_leading_zero32__4619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                            vlSelf->__Vfunc_leading_zero32__4619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4631__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4631__part 
                            = vlSelf->__Vfunc_leading_zero32__4631__value;
                        vlSelf->__Vfunc_leading_zero32__4631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4643__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4643__part 
                            = vlSelf->__Vfunc_leading_zero32__4643__value;
                        vlSelf->__Vfunc_leading_zero32__4643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                            vlSelf->__Vfunc_leading_zero32__4643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4655__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4655__part 
                            = vlSelf->__Vfunc_leading_zero32__4655__value;
                        vlSelf->__Vfunc_leading_zero32__4655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                            vlSelf->__Vfunc_leading_zero32__4655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4667__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4667__part 
                            = vlSelf->__Vfunc_leading_zero32__4667__value;
                        vlSelf->__Vfunc_leading_zero32__4667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4679__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4679__part 
                            = vlSelf->__Vfunc_leading_zero32__4679__value;
                        vlSelf->__Vfunc_leading_zero32__4679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                            vlSelf->__Vfunc_leading_zero32__4679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4691__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4691__part 
                            = vlSelf->__Vfunc_leading_zero32__4691__value;
                        vlSelf->__Vfunc_leading_zero32__4691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                            vlSelf->__Vfunc_leading_zero32__4691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4703__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4703__part 
                            = vlSelf->__Vfunc_leading_zero32__4703__value;
                        vlSelf->__Vfunc_leading_zero32__4703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4715__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4715__part 
                            = vlSelf->__Vfunc_leading_zero32__4715__value;
                        vlSelf->__Vfunc_leading_zero32__4715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                            vlSelf->__Vfunc_leading_zero32__4715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4727__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4727__part 
                            = vlSelf->__Vfunc_leading_zero32__4727__value;
                        vlSelf->__Vfunc_leading_zero32__4727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                            vlSelf->__Vfunc_leading_zero32__4727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4739__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4739__part 
                            = vlSelf->__Vfunc_leading_zero32__4739__value;
                        vlSelf->__Vfunc_leading_zero32__4739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4751__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4751__part 
                            = vlSelf->__Vfunc_leading_zero32__4751__value;
                        vlSelf->__Vfunc_leading_zero32__4751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                            vlSelf->__Vfunc_leading_zero32__4751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4763__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4763__part 
                            = vlSelf->__Vfunc_leading_zero32__4763__value;
                        vlSelf->__Vfunc_leading_zero32__4763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                            vlSelf->__Vfunc_leading_zero32__4763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4775__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4775__part 
                            = vlSelf->__Vfunc_leading_zero32__4775__value;
                        vlSelf->__Vfunc_leading_zero32__4775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4787__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4787__part 
                            = vlSelf->__Vfunc_leading_zero32__4787__value;
                        vlSelf->__Vfunc_leading_zero32__4787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                            vlSelf->__Vfunc_leading_zero32__4787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4799__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4799__part 
                            = vlSelf->__Vfunc_leading_zero32__4799__value;
                        vlSelf->__Vfunc_leading_zero32__4799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                            vlSelf->__Vfunc_leading_zero32__4799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4811__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4811__part 
                            = vlSelf->__Vfunc_leading_zero32__4811__value;
                        vlSelf->__Vfunc_leading_zero32__4811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4823__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4823__part 
                            = vlSelf->__Vfunc_leading_zero32__4823__value;
                        vlSelf->__Vfunc_leading_zero32__4823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                            vlSelf->__Vfunc_leading_zero32__4823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4835__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4835__part 
                            = vlSelf->__Vfunc_leading_zero32__4835__value;
                        vlSelf->__Vfunc_leading_zero32__4835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                            vlSelf->__Vfunc_leading_zero32__4835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4847__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4847__part 
                            = vlSelf->__Vfunc_leading_zero32__4847__value;
                        vlSelf->__Vfunc_leading_zero32__4847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4859__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4859__part 
                            = vlSelf->__Vfunc_leading_zero32__4859__value;
                        vlSelf->__Vfunc_leading_zero32__4859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                            vlSelf->__Vfunc_leading_zero32__4859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4871__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4871__part 
                            = vlSelf->__Vfunc_leading_zero32__4871__value;
                        vlSelf->__Vfunc_leading_zero32__4871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                            vlSelf->__Vfunc_leading_zero32__4871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4883__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4883__part 
                            = vlSelf->__Vfunc_leading_zero32__4883__value;
                        vlSelf->__Vfunc_leading_zero32__4883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4895__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4895__part 
                            = vlSelf->__Vfunc_leading_zero32__4895__value;
                        vlSelf->__Vfunc_leading_zero32__4895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                            vlSelf->__Vfunc_leading_zero32__4895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4907__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4907__part 
                            = vlSelf->__Vfunc_leading_zero32__4907__value;
                        vlSelf->__Vfunc_leading_zero32__4907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                            vlSelf->__Vfunc_leading_zero32__4907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4919__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4919__part 
                            = vlSelf->__Vfunc_leading_zero32__4919__value;
                        vlSelf->__Vfunc_leading_zero32__4919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4931__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4931__part 
                            = vlSelf->__Vfunc_leading_zero32__4931__value;
                        vlSelf->__Vfunc_leading_zero32__4931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                            vlSelf->__Vfunc_leading_zero32__4931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4943__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4943__part 
                            = vlSelf->__Vfunc_leading_zero32__4943__value;
                        vlSelf->__Vfunc_leading_zero32__4943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                            vlSelf->__Vfunc_leading_zero32__4943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4955__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4955__part 
                            = vlSelf->__Vfunc_leading_zero32__4955__value;
                        vlSelf->__Vfunc_leading_zero32__4955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4967__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4967__part 
                            = vlSelf->__Vfunc_leading_zero32__4967__value;
                        vlSelf->__Vfunc_leading_zero32__4967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                            vlSelf->__Vfunc_leading_zero32__4967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4979__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4979__part 
                            = vlSelf->__Vfunc_leading_zero32__4979__value;
                        vlSelf->__Vfunc_leading_zero32__4979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                            vlSelf->__Vfunc_leading_zero32__4979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4991__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4991__part 
                            = vlSelf->__Vfunc_leading_zero32__4991__value;
                        vlSelf->__Vfunc_leading_zero32__4991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5003__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5003__part 
                            = vlSelf->__Vfunc_leading_zero32__5003__value;
                        vlSelf->__Vfunc_leading_zero32__5003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                            vlSelf->__Vfunc_leading_zero32__5003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5015__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5015__part 
                            = vlSelf->__Vfunc_leading_zero32__5015__value;
                        vlSelf->__Vfunc_leading_zero32__5015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                            vlSelf->__Vfunc_leading_zero32__5015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5027__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5027__part 
                            = vlSelf->__Vfunc_leading_zero32__5027__value;
                        vlSelf->__Vfunc_leading_zero32__5027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5039__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5039__part 
                            = vlSelf->__Vfunc_leading_zero32__5039__value;
                        vlSelf->__Vfunc_leading_zero32__5039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                            vlSelf->__Vfunc_leading_zero32__5039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5051__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5051__part 
                            = vlSelf->__Vfunc_leading_zero32__5051__value;
                        vlSelf->__Vfunc_leading_zero32__5051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                            vlSelf->__Vfunc_leading_zero32__5051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5063__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5063__part 
                            = vlSelf->__Vfunc_leading_zero32__5063__value;
                        vlSelf->__Vfunc_leading_zero32__5063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5075__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5075__part 
                            = vlSelf->__Vfunc_leading_zero32__5075__value;
                        vlSelf->__Vfunc_leading_zero32__5075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                            vlSelf->__Vfunc_leading_zero32__5075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5087__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5087__part 
                            = vlSelf->__Vfunc_leading_zero32__5087__value;
                        vlSelf->__Vfunc_leading_zero32__5087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                            vlSelf->__Vfunc_leading_zero32__5087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5099__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5099__part 
                            = vlSelf->__Vfunc_leading_zero32__5099__value;
                        vlSelf->__Vfunc_leading_zero32__5099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5111__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5111__part 
                            = vlSelf->__Vfunc_leading_zero32__5111__value;
                        vlSelf->__Vfunc_leading_zero32__5111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                            vlSelf->__Vfunc_leading_zero32__5111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5123__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5123__part 
                            = vlSelf->__Vfunc_leading_zero32__5123__value;
                        vlSelf->__Vfunc_leading_zero32__5123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                            vlSelf->__Vfunc_leading_zero32__5123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5135__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5135__part 
                            = vlSelf->__Vfunc_leading_zero32__5135__value;
                        vlSelf->__Vfunc_leading_zero32__5135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5147__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5147__part 
                            = vlSelf->__Vfunc_leading_zero32__5147__value;
                        vlSelf->__Vfunc_leading_zero32__5147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5159__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5159__part 
                            = vlSelf->__Vfunc_leading_zero32__5159__value;
                        vlSelf->__Vfunc_leading_zero32__5159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5171__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5171__part 
                            = vlSelf->__Vfunc_leading_zero32__5171__value;
                        vlSelf->__Vfunc_leading_zero32__5171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5183__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5183__part 
                            = vlSelf->__Vfunc_leading_zero32__5183__value;
                        vlSelf->__Vfunc_leading_zero32__5183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5195__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5195__part 
                            = vlSelf->__Vfunc_leading_zero32__5195__value;
                        vlSelf->__Vfunc_leading_zero32__5195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5207__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5207__part 
                            = vlSelf->__Vfunc_leading_zero32__5207__value;
                        vlSelf->__Vfunc_leading_zero32__5207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5219__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5219__part 
                            = vlSelf->__Vfunc_leading_zero32__5219__value;
                        vlSelf->__Vfunc_leading_zero32__5219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5231__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5231__part 
                            = vlSelf->__Vfunc_leading_zero32__5231__value;
                        vlSelf->__Vfunc_leading_zero32__5231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5243__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5243__part 
                            = vlSelf->__Vfunc_leading_zero32__5243__value;
                        vlSelf->__Vfunc_leading_zero32__5243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5255__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5255__part 
                            = vlSelf->__Vfunc_leading_zero32__5255__value;
                        vlSelf->__Vfunc_leading_zero32__5255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5267__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5267__part 
                            = vlSelf->__Vfunc_leading_zero32__5267__value;
                        vlSelf->__Vfunc_leading_zero32__5267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5279__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5279__part 
                            = vlSelf->__Vfunc_leading_zero32__5279__value;
                        vlSelf->__Vfunc_leading_zero32__5279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5291__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5291__part 
                            = vlSelf->__Vfunc_leading_zero32__5291__value;
                        vlSelf->__Vfunc_leading_zero32__5291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5303__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5303__part 
                            = vlSelf->__Vfunc_leading_zero32__5303__value;
                        vlSelf->__Vfunc_leading_zero32__5303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5315__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5315__part 
                            = vlSelf->__Vfunc_leading_zero32__5315__value;
                        vlSelf->__Vfunc_leading_zero32__5315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5327__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5327__part 
                            = vlSelf->__Vfunc_leading_zero32__5327__value;
                        vlSelf->__Vfunc_leading_zero32__5327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5339__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5339__part 
                            = vlSelf->__Vfunc_leading_zero32__5339__value;
                        vlSelf->__Vfunc_leading_zero32__5339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5351__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5351__part 
                            = vlSelf->__Vfunc_leading_zero32__5351__value;
                        vlSelf->__Vfunc_leading_zero32__5351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5363__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5363__part 
                            = vlSelf->__Vfunc_leading_zero32__5363__value;
                        vlSelf->__Vfunc_leading_zero32__5363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5375__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5375__part 
                            = vlSelf->__Vfunc_leading_zero32__5375__value;
                        vlSelf->__Vfunc_leading_zero32__5375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5387__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5387__part 
                            = vlSelf->__Vfunc_leading_zero32__5387__value;
                        vlSelf->__Vfunc_leading_zero32__5387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5399__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5399__part 
                            = vlSelf->__Vfunc_leading_zero32__5399__value;
                        vlSelf->__Vfunc_leading_zero32__5399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5411__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5411__part 
                            = vlSelf->__Vfunc_leading_zero32__5411__value;
                        vlSelf->__Vfunc_leading_zero32__5411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5423__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5423__part 
                            = vlSelf->__Vfunc_leading_zero32__5423__value;
                        vlSelf->__Vfunc_leading_zero32__5423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5435__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5435__part 
                            = vlSelf->__Vfunc_leading_zero32__5435__value;
                        vlSelf->__Vfunc_leading_zero32__5435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5447__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5447__part 
                            = vlSelf->__Vfunc_leading_zero32__5447__value;
                        vlSelf->__Vfunc_leading_zero32__5447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5459__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5459__part 
                            = vlSelf->__Vfunc_leading_zero32__5459__value;
                        vlSelf->__Vfunc_leading_zero32__5459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5471__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5471__part 
                            = vlSelf->__Vfunc_leading_zero32__5471__value;
                        vlSelf->__Vfunc_leading_zero32__5471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5483__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5483__part 
                            = vlSelf->__Vfunc_leading_zero32__5483__value;
                        vlSelf->__Vfunc_leading_zero32__5483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5495__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5495__part 
                            = vlSelf->__Vfunc_leading_zero32__5495__value;
                        vlSelf->__Vfunc_leading_zero32__5495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5507__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5507__part 
                            = vlSelf->__Vfunc_leading_zero32__5507__value;
                        vlSelf->__Vfunc_leading_zero32__5507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5519__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5519__part 
                            = vlSelf->__Vfunc_leading_zero32__5519__value;
                        vlSelf->__Vfunc_leading_zero32__5519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5531__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5531__part 
                            = vlSelf->__Vfunc_leading_zero32__5531__value;
                        vlSelf->__Vfunc_leading_zero32__5531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5543__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5543__part 
                            = vlSelf->__Vfunc_leading_zero32__5543__value;
                        vlSelf->__Vfunc_leading_zero32__5543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5555__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5555__part 
                            = vlSelf->__Vfunc_leading_zero32__5555__value;
                        vlSelf->__Vfunc_leading_zero32__5555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5567__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5567__part 
                            = vlSelf->__Vfunc_leading_zero32__5567__value;
                        vlSelf->__Vfunc_leading_zero32__5567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5579__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5579__part 
                            = vlSelf->__Vfunc_leading_zero32__5579__value;
                        vlSelf->__Vfunc_leading_zero32__5579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5591__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5591__part 
                            = vlSelf->__Vfunc_leading_zero32__5591__value;
                        vlSelf->__Vfunc_leading_zero32__5591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5603__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5603__part 
                            = vlSelf->__Vfunc_leading_zero32__5603__value;
                        vlSelf->__Vfunc_leading_zero32__5603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5603__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5615__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5615__part 
                            = vlSelf->__Vfunc_leading_zero32__5615__value;
                        vlSelf->__Vfunc_leading_zero32__5615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5627__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5627__part 
                            = vlSelf->__Vfunc_leading_zero32__5627__value;
                        vlSelf->__Vfunc_leading_zero32__5627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5639__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5639__part 
                            = vlSelf->__Vfunc_leading_zero32__5639__value;
                        vlSelf->__Vfunc_leading_zero32__5639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5651__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5651__part 
                            = vlSelf->__Vfunc_leading_zero32__5651__value;
                        vlSelf->__Vfunc_leading_zero32__5651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5663__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5663__part 
                            = vlSelf->__Vfunc_leading_zero32__5663__value;
                        vlSelf->__Vfunc_leading_zero32__5663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5675__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5675__part 
                            = vlSelf->__Vfunc_leading_zero32__5675__value;
                        vlSelf->__Vfunc_leading_zero32__5675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5687__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5687__part 
                            = vlSelf->__Vfunc_leading_zero32__5687__value;
                        vlSelf->__Vfunc_leading_zero32__5687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5699__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5699__part 
                            = vlSelf->__Vfunc_leading_zero32__5699__value;
                        vlSelf->__Vfunc_leading_zero32__5699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5711__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5711__part 
                            = vlSelf->__Vfunc_leading_zero32__5711__value;
                        vlSelf->__Vfunc_leading_zero32__5711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5723__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5723__part 
                            = vlSelf->__Vfunc_leading_zero32__5723__value;
                        vlSelf->__Vfunc_leading_zero32__5723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5735__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5735__part 
                            = vlSelf->__Vfunc_leading_zero32__5735__value;
                        vlSelf->__Vfunc_leading_zero32__5735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5747__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5747__part 
                            = vlSelf->__Vfunc_leading_zero32__5747__value;
                        vlSelf->__Vfunc_leading_zero32__5747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5759__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5759__part 
                            = vlSelf->__Vfunc_leading_zero32__5759__value;
                        vlSelf->__Vfunc_leading_zero32__5759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5771__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5771__part 
                            = vlSelf->__Vfunc_leading_zero32__5771__value;
                        vlSelf->__Vfunc_leading_zero32__5771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5783__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5783__part 
                            = vlSelf->__Vfunc_leading_zero32__5783__value;
                        vlSelf->__Vfunc_leading_zero32__5783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5795__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5795__part 
                            = vlSelf->__Vfunc_leading_zero32__5795__value;
                        vlSelf->__Vfunc_leading_zero32__5795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5807__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5807__part 
                            = vlSelf->__Vfunc_leading_zero32__5807__value;
                        vlSelf->__Vfunc_leading_zero32__5807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5819__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5819__part 
                            = vlSelf->__Vfunc_leading_zero32__5819__value;
                        vlSelf->__Vfunc_leading_zero32__5819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5831__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5831__part 
                            = vlSelf->__Vfunc_leading_zero32__5831__value;
                        vlSelf->__Vfunc_leading_zero32__5831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5843__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5843__part 
                            = vlSelf->__Vfunc_leading_zero32__5843__value;
                        vlSelf->__Vfunc_leading_zero32__5843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5855__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5855__part 
                            = vlSelf->__Vfunc_leading_zero32__5855__value;
                        vlSelf->__Vfunc_leading_zero32__5855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5867__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5867__part 
                            = vlSelf->__Vfunc_leading_zero32__5867__value;
                        vlSelf->__Vfunc_leading_zero32__5867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5879__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5879__part 
                            = vlSelf->__Vfunc_leading_zero32__5879__value;
                        vlSelf->__Vfunc_leading_zero32__5879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5891__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5891__part 
                            = vlSelf->__Vfunc_leading_zero32__5891__value;
                        vlSelf->__Vfunc_leading_zero32__5891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5903__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5903__part 
                            = vlSelf->__Vfunc_leading_zero32__5903__value;
                        vlSelf->__Vfunc_leading_zero32__5903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5915__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5915__part 
                            = vlSelf->__Vfunc_leading_zero32__5915__value;
                        vlSelf->__Vfunc_leading_zero32__5915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5927__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5927__part 
                            = vlSelf->__Vfunc_leading_zero32__5927__value;
                        vlSelf->__Vfunc_leading_zero32__5927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5939__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5939__part 
                            = vlSelf->__Vfunc_leading_zero32__5939__value;
                        vlSelf->__Vfunc_leading_zero32__5939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5951__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5951__part 
                            = vlSelf->__Vfunc_leading_zero32__5951__value;
                        vlSelf->__Vfunc_leading_zero32__5951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5963__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5963__part 
                            = vlSelf->__Vfunc_leading_zero32__5963__value;
                        vlSelf->__Vfunc_leading_zero32__5963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5975__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5975__part 
                            = vlSelf->__Vfunc_leading_zero32__5975__value;
                        vlSelf->__Vfunc_leading_zero32__5975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5987__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5987__part 
                            = vlSelf->__Vfunc_leading_zero32__5987__value;
                        vlSelf->__Vfunc_leading_zero32__5987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5999__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5999__part 
                            = vlSelf->__Vfunc_leading_zero32__5999__value;
                        vlSelf->__Vfunc_leading_zero32__5999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6011__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6011__part 
                            = vlSelf->__Vfunc_leading_zero32__6011__value;
                        vlSelf->__Vfunc_leading_zero32__6011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6023__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6023__part 
                            = vlSelf->__Vfunc_leading_zero32__6023__value;
                        vlSelf->__Vfunc_leading_zero32__6023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6035__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6035__part 
                            = vlSelf->__Vfunc_leading_zero32__6035__value;
                        vlSelf->__Vfunc_leading_zero32__6035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6047__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6047__part 
                            = vlSelf->__Vfunc_leading_zero32__6047__value;
                        vlSelf->__Vfunc_leading_zero32__6047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6059__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6059__part 
                            = vlSelf->__Vfunc_leading_zero32__6059__value;
                        vlSelf->__Vfunc_leading_zero32__6059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6071__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6071__part 
                            = vlSelf->__Vfunc_leading_zero32__6071__value;
                        vlSelf->__Vfunc_leading_zero32__6071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6071__Vfuncout)) 
                             - (IData)(8U))));
}
