// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__17(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__17\n"); );
    // Body
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
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3494__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3494__part 
                            = vlSelf->__Vfunc_leading_zero32__3494__value;
                        vlSelf->__Vfunc_leading_zero32__3494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3506__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3506__part 
                            = vlSelf->__Vfunc_leading_zero32__3506__value;
                        vlSelf->__Vfunc_leading_zero32__3506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3518__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3518__part 
                            = vlSelf->__Vfunc_leading_zero32__3518__value;
                        vlSelf->__Vfunc_leading_zero32__3518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3530__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3530__part 
                            = vlSelf->__Vfunc_leading_zero32__3530__value;
                        vlSelf->__Vfunc_leading_zero32__3530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3542__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3542__part 
                            = vlSelf->__Vfunc_leading_zero32__3542__value;
                        vlSelf->__Vfunc_leading_zero32__3542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3554__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3554__part 
                            = vlSelf->__Vfunc_leading_zero32__3554__value;
                        vlSelf->__Vfunc_leading_zero32__3554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3566__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3566__part 
                            = vlSelf->__Vfunc_leading_zero32__3566__value;
                        vlSelf->__Vfunc_leading_zero32__3566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3578__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3578__part 
                            = vlSelf->__Vfunc_leading_zero32__3578__value;
                        vlSelf->__Vfunc_leading_zero32__3578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3590__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3590__part 
                            = vlSelf->__Vfunc_leading_zero32__3590__value;
                        vlSelf->__Vfunc_leading_zero32__3590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3602__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3602__part 
                            = vlSelf->__Vfunc_leading_zero32__3602__value;
                        vlSelf->__Vfunc_leading_zero32__3602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3614__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3614__part 
                            = vlSelf->__Vfunc_leading_zero32__3614__value;
                        vlSelf->__Vfunc_leading_zero32__3614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3626__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3626__part 
                            = vlSelf->__Vfunc_leading_zero32__3626__value;
                        vlSelf->__Vfunc_leading_zero32__3626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3638__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3638__part 
                            = vlSelf->__Vfunc_leading_zero32__3638__value;
                        vlSelf->__Vfunc_leading_zero32__3638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3650__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3650__part 
                            = vlSelf->__Vfunc_leading_zero32__3650__value;
                        vlSelf->__Vfunc_leading_zero32__3650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3662__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3662__part 
                            = vlSelf->__Vfunc_leading_zero32__3662__value;
                        vlSelf->__Vfunc_leading_zero32__3662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3674__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3674__part 
                            = vlSelf->__Vfunc_leading_zero32__3674__value;
                        vlSelf->__Vfunc_leading_zero32__3674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3686__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3686__part 
                            = vlSelf->__Vfunc_leading_zero32__3686__value;
                        vlSelf->__Vfunc_leading_zero32__3686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3698__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3698__part 
                            = vlSelf->__Vfunc_leading_zero32__3698__value;
                        vlSelf->__Vfunc_leading_zero32__3698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3710__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3710__part 
                            = vlSelf->__Vfunc_leading_zero32__3710__value;
                        vlSelf->__Vfunc_leading_zero32__3710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3722__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3722__part 
                            = vlSelf->__Vfunc_leading_zero32__3722__value;
                        vlSelf->__Vfunc_leading_zero32__3722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3734__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3734__part 
                            = vlSelf->__Vfunc_leading_zero32__3734__value;
                        vlSelf->__Vfunc_leading_zero32__3734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3746__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3746__part 
                            = vlSelf->__Vfunc_leading_zero32__3746__value;
                        vlSelf->__Vfunc_leading_zero32__3746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3758__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3758__part 
                            = vlSelf->__Vfunc_leading_zero32__3758__value;
                        vlSelf->__Vfunc_leading_zero32__3758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3770__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3770__part 
                            = vlSelf->__Vfunc_leading_zero32__3770__value;
                        vlSelf->__Vfunc_leading_zero32__3770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3782__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3782__part 
                            = vlSelf->__Vfunc_leading_zero32__3782__value;
                        vlSelf->__Vfunc_leading_zero32__3782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3794__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3794__part 
                            = vlSelf->__Vfunc_leading_zero32__3794__value;
                        vlSelf->__Vfunc_leading_zero32__3794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3806__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3806__part 
                            = vlSelf->__Vfunc_leading_zero32__3806__value;
                        vlSelf->__Vfunc_leading_zero32__3806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3818__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3818__part 
                            = vlSelf->__Vfunc_leading_zero32__3818__value;
                        vlSelf->__Vfunc_leading_zero32__3818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3830__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3830__part 
                            = vlSelf->__Vfunc_leading_zero32__3830__value;
                        vlSelf->__Vfunc_leading_zero32__3830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3842__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3842__part 
                            = vlSelf->__Vfunc_leading_zero32__3842__value;
                        vlSelf->__Vfunc_leading_zero32__3842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3854__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3854__part 
                            = vlSelf->__Vfunc_leading_zero32__3854__value;
                        vlSelf->__Vfunc_leading_zero32__3854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3866__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3866__part 
                            = vlSelf->__Vfunc_leading_zero32__3866__value;
                        vlSelf->__Vfunc_leading_zero32__3866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3878__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3878__part 
                            = vlSelf->__Vfunc_leading_zero32__3878__value;
                        vlSelf->__Vfunc_leading_zero32__3878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3890__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3890__part 
                            = vlSelf->__Vfunc_leading_zero32__3890__value;
                        vlSelf->__Vfunc_leading_zero32__3890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3902__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3902__part 
                            = vlSelf->__Vfunc_leading_zero32__3902__value;
                        vlSelf->__Vfunc_leading_zero32__3902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3914__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3914__part 
                            = vlSelf->__Vfunc_leading_zero32__3914__value;
                        vlSelf->__Vfunc_leading_zero32__3914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3926__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3926__part 
                            = vlSelf->__Vfunc_leading_zero32__3926__value;
                        vlSelf->__Vfunc_leading_zero32__3926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3938__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3938__part 
                            = vlSelf->__Vfunc_leading_zero32__3938__value;
                        vlSelf->__Vfunc_leading_zero32__3938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3950__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3950__part 
                            = vlSelf->__Vfunc_leading_zero32__3950__value;
                        vlSelf->__Vfunc_leading_zero32__3950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3962__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3962__part 
                            = vlSelf->__Vfunc_leading_zero32__3962__value;
                        vlSelf->__Vfunc_leading_zero32__3962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3974__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3974__part 
                            = vlSelf->__Vfunc_leading_zero32__3974__value;
                        vlSelf->__Vfunc_leading_zero32__3974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3986__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3986__part 
                            = vlSelf->__Vfunc_leading_zero32__3986__value;
                        vlSelf->__Vfunc_leading_zero32__3986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3998__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3998__part 
                            = vlSelf->__Vfunc_leading_zero32__3998__value;
                        vlSelf->__Vfunc_leading_zero32__3998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4010__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4010__part 
                            = vlSelf->__Vfunc_leading_zero32__4010__value;
                        vlSelf->__Vfunc_leading_zero32__4010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4022__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4022__part 
                            = vlSelf->__Vfunc_leading_zero32__4022__value;
                        vlSelf->__Vfunc_leading_zero32__4022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4034__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4034__part 
                            = vlSelf->__Vfunc_leading_zero32__4034__value;
                        vlSelf->__Vfunc_leading_zero32__4034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4046__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4046__part 
                            = vlSelf->__Vfunc_leading_zero32__4046__value;
                        vlSelf->__Vfunc_leading_zero32__4046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4058__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4058__part 
                            = vlSelf->__Vfunc_leading_zero32__4058__value;
                        vlSelf->__Vfunc_leading_zero32__4058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4058__Vfuncout)) 
                             - (IData)(8U))));
}
