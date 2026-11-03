// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__16(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__16\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2146__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2146__part 
                            = vlSelf->__Vfunc_leading_zero32__2146__value;
                        vlSelf->__Vfunc_leading_zero32__2146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2146__count)));
                            vlSelf->__Vfunc_leading_zero32__2146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2146__count)));
                            vlSelf->__Vfunc_leading_zero32__2146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2146__count)));
                            vlSelf->__Vfunc_leading_zero32__2146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2146__count)));
                            vlSelf->__Vfunc_leading_zero32__2146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2146__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2158__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2158__part 
                            = vlSelf->__Vfunc_leading_zero32__2158__value;
                        vlSelf->__Vfunc_leading_zero32__2158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2158__count)));
                            vlSelf->__Vfunc_leading_zero32__2158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2158__count)));
                            vlSelf->__Vfunc_leading_zero32__2158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2158__count)));
                            vlSelf->__Vfunc_leading_zero32__2158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2158__count)));
                            vlSelf->__Vfunc_leading_zero32__2158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2170__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2170__part 
                            = vlSelf->__Vfunc_leading_zero32__2170__value;
                        vlSelf->__Vfunc_leading_zero32__2170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2170__count)));
                            vlSelf->__Vfunc_leading_zero32__2170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2170__count)));
                            vlSelf->__Vfunc_leading_zero32__2170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2170__count)));
                            vlSelf->__Vfunc_leading_zero32__2170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2170__count)));
                            vlSelf->__Vfunc_leading_zero32__2170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2182__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2182__part 
                            = vlSelf->__Vfunc_leading_zero32__2182__value;
                        vlSelf->__Vfunc_leading_zero32__2182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2182__count)));
                            vlSelf->__Vfunc_leading_zero32__2182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2182__count)));
                            vlSelf->__Vfunc_leading_zero32__2182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2182__count)));
                            vlSelf->__Vfunc_leading_zero32__2182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2182__count)));
                            vlSelf->__Vfunc_leading_zero32__2182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2194__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2194__part 
                            = vlSelf->__Vfunc_leading_zero32__2194__value;
                        vlSelf->__Vfunc_leading_zero32__2194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2194__count)));
                            vlSelf->__Vfunc_leading_zero32__2194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2194__count)));
                            vlSelf->__Vfunc_leading_zero32__2194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2194__count)));
                            vlSelf->__Vfunc_leading_zero32__2194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2194__count)));
                            vlSelf->__Vfunc_leading_zero32__2194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2206__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2206__part 
                            = vlSelf->__Vfunc_leading_zero32__2206__value;
                        vlSelf->__Vfunc_leading_zero32__2206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2206__count)));
                            vlSelf->__Vfunc_leading_zero32__2206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2206__count)));
                            vlSelf->__Vfunc_leading_zero32__2206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2206__count)));
                            vlSelf->__Vfunc_leading_zero32__2206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2206__count)));
                            vlSelf->__Vfunc_leading_zero32__2206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2218__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2218__part 
                            = vlSelf->__Vfunc_leading_zero32__2218__value;
                        vlSelf->__Vfunc_leading_zero32__2218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2218__count)));
                            vlSelf->__Vfunc_leading_zero32__2218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2218__count)));
                            vlSelf->__Vfunc_leading_zero32__2218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2218__count)));
                            vlSelf->__Vfunc_leading_zero32__2218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2218__count)));
                            vlSelf->__Vfunc_leading_zero32__2218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2230__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2230__part 
                            = vlSelf->__Vfunc_leading_zero32__2230__value;
                        vlSelf->__Vfunc_leading_zero32__2230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2230__count)));
                            vlSelf->__Vfunc_leading_zero32__2230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2230__count)));
                            vlSelf->__Vfunc_leading_zero32__2230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2230__count)));
                            vlSelf->__Vfunc_leading_zero32__2230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2230__count)));
                            vlSelf->__Vfunc_leading_zero32__2230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2242__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2242__part 
                            = vlSelf->__Vfunc_leading_zero32__2242__value;
                        vlSelf->__Vfunc_leading_zero32__2242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2242__count)));
                            vlSelf->__Vfunc_leading_zero32__2242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2242__count)));
                            vlSelf->__Vfunc_leading_zero32__2242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2242__count)));
                            vlSelf->__Vfunc_leading_zero32__2242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2242__count)));
                            vlSelf->__Vfunc_leading_zero32__2242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2254__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2254__part 
                            = vlSelf->__Vfunc_leading_zero32__2254__value;
                        vlSelf->__Vfunc_leading_zero32__2254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2254__count)));
                            vlSelf->__Vfunc_leading_zero32__2254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2254__count)));
                            vlSelf->__Vfunc_leading_zero32__2254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2254__count)));
                            vlSelf->__Vfunc_leading_zero32__2254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2254__count)));
                            vlSelf->__Vfunc_leading_zero32__2254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2266__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2266__part 
                            = vlSelf->__Vfunc_leading_zero32__2266__value;
                        vlSelf->__Vfunc_leading_zero32__2266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2266__count)));
                            vlSelf->__Vfunc_leading_zero32__2266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2266__count)));
                            vlSelf->__Vfunc_leading_zero32__2266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2266__count)));
                            vlSelf->__Vfunc_leading_zero32__2266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2266__count)));
                            vlSelf->__Vfunc_leading_zero32__2266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2278__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2278__part 
                            = vlSelf->__Vfunc_leading_zero32__2278__value;
                        vlSelf->__Vfunc_leading_zero32__2278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2278__count)));
                            vlSelf->__Vfunc_leading_zero32__2278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2278__count)));
                            vlSelf->__Vfunc_leading_zero32__2278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2278__count)));
                            vlSelf->__Vfunc_leading_zero32__2278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2278__count)));
                            vlSelf->__Vfunc_leading_zero32__2278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2290__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2290__part 
                            = vlSelf->__Vfunc_leading_zero32__2290__value;
                        vlSelf->__Vfunc_leading_zero32__2290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2290__count)));
                            vlSelf->__Vfunc_leading_zero32__2290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2290__count)));
                            vlSelf->__Vfunc_leading_zero32__2290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2290__count)));
                            vlSelf->__Vfunc_leading_zero32__2290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2290__count)));
                            vlSelf->__Vfunc_leading_zero32__2290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2302__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2302__part 
                            = vlSelf->__Vfunc_leading_zero32__2302__value;
                        vlSelf->__Vfunc_leading_zero32__2302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2302__count)));
                            vlSelf->__Vfunc_leading_zero32__2302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2302__count)));
                            vlSelf->__Vfunc_leading_zero32__2302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2302__count)));
                            vlSelf->__Vfunc_leading_zero32__2302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2302__count)));
                            vlSelf->__Vfunc_leading_zero32__2302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2314__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2314__part 
                            = vlSelf->__Vfunc_leading_zero32__2314__value;
                        vlSelf->__Vfunc_leading_zero32__2314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2314__count)));
                            vlSelf->__Vfunc_leading_zero32__2314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2314__count)));
                            vlSelf->__Vfunc_leading_zero32__2314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2314__count)));
                            vlSelf->__Vfunc_leading_zero32__2314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2314__count)));
                            vlSelf->__Vfunc_leading_zero32__2314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2326__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2326__part 
                            = vlSelf->__Vfunc_leading_zero32__2326__value;
                        vlSelf->__Vfunc_leading_zero32__2326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2326__count)));
                            vlSelf->__Vfunc_leading_zero32__2326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2326__count)));
                            vlSelf->__Vfunc_leading_zero32__2326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2326__count)));
                            vlSelf->__Vfunc_leading_zero32__2326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2326__count)));
                            vlSelf->__Vfunc_leading_zero32__2326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2338__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2338__part 
                            = vlSelf->__Vfunc_leading_zero32__2338__value;
                        vlSelf->__Vfunc_leading_zero32__2338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2338__count)));
                            vlSelf->__Vfunc_leading_zero32__2338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2338__count)));
                            vlSelf->__Vfunc_leading_zero32__2338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2338__count)));
                            vlSelf->__Vfunc_leading_zero32__2338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2338__count)));
                            vlSelf->__Vfunc_leading_zero32__2338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2350__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2350__part 
                            = vlSelf->__Vfunc_leading_zero32__2350__value;
                        vlSelf->__Vfunc_leading_zero32__2350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2350__count)));
                            vlSelf->__Vfunc_leading_zero32__2350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2350__count)));
                            vlSelf->__Vfunc_leading_zero32__2350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2350__count)));
                            vlSelf->__Vfunc_leading_zero32__2350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2350__count)));
                            vlSelf->__Vfunc_leading_zero32__2350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2362__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2362__part 
                            = vlSelf->__Vfunc_leading_zero32__2362__value;
                        vlSelf->__Vfunc_leading_zero32__2362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2362__count)));
                            vlSelf->__Vfunc_leading_zero32__2362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2362__count)));
                            vlSelf->__Vfunc_leading_zero32__2362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2362__count)));
                            vlSelf->__Vfunc_leading_zero32__2362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2362__count)));
                            vlSelf->__Vfunc_leading_zero32__2362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2374__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2374__part 
                            = vlSelf->__Vfunc_leading_zero32__2374__value;
                        vlSelf->__Vfunc_leading_zero32__2374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2374__count)));
                            vlSelf->__Vfunc_leading_zero32__2374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2374__count)));
                            vlSelf->__Vfunc_leading_zero32__2374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2374__count)));
                            vlSelf->__Vfunc_leading_zero32__2374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2374__count)));
                            vlSelf->__Vfunc_leading_zero32__2374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2386__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2386__part 
                            = vlSelf->__Vfunc_leading_zero32__2386__value;
                        vlSelf->__Vfunc_leading_zero32__2386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2386__count)));
                            vlSelf->__Vfunc_leading_zero32__2386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2386__count)));
                            vlSelf->__Vfunc_leading_zero32__2386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2386__count)));
                            vlSelf->__Vfunc_leading_zero32__2386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2386__count)));
                            vlSelf->__Vfunc_leading_zero32__2386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2398__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2398__part 
                            = vlSelf->__Vfunc_leading_zero32__2398__value;
                        vlSelf->__Vfunc_leading_zero32__2398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2398__count)));
                            vlSelf->__Vfunc_leading_zero32__2398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2398__count)));
                            vlSelf->__Vfunc_leading_zero32__2398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2398__count)));
                            vlSelf->__Vfunc_leading_zero32__2398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2398__count)));
                            vlSelf->__Vfunc_leading_zero32__2398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2410__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2410__part 
                            = vlSelf->__Vfunc_leading_zero32__2410__value;
                        vlSelf->__Vfunc_leading_zero32__2410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2410__count)));
                            vlSelf->__Vfunc_leading_zero32__2410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2410__count)));
                            vlSelf->__Vfunc_leading_zero32__2410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2410__count)));
                            vlSelf->__Vfunc_leading_zero32__2410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2410__count)));
                            vlSelf->__Vfunc_leading_zero32__2410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2422__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2422__part 
                            = vlSelf->__Vfunc_leading_zero32__2422__value;
                        vlSelf->__Vfunc_leading_zero32__2422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2422__count)));
                            vlSelf->__Vfunc_leading_zero32__2422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2422__count)));
                            vlSelf->__Vfunc_leading_zero32__2422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2422__count)));
                            vlSelf->__Vfunc_leading_zero32__2422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2422__count)));
                            vlSelf->__Vfunc_leading_zero32__2422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2434__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2434__part 
                            = vlSelf->__Vfunc_leading_zero32__2434__value;
                        vlSelf->__Vfunc_leading_zero32__2434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2434__count)));
                            vlSelf->__Vfunc_leading_zero32__2434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2434__count)));
                            vlSelf->__Vfunc_leading_zero32__2434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2434__count)));
                            vlSelf->__Vfunc_leading_zero32__2434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2434__count)));
                            vlSelf->__Vfunc_leading_zero32__2434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2446__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2446__part 
                            = vlSelf->__Vfunc_leading_zero32__2446__value;
                        vlSelf->__Vfunc_leading_zero32__2446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2446__count)));
                            vlSelf->__Vfunc_leading_zero32__2446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2446__count)));
                            vlSelf->__Vfunc_leading_zero32__2446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2446__count)));
                            vlSelf->__Vfunc_leading_zero32__2446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2446__count)));
                            vlSelf->__Vfunc_leading_zero32__2446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2458__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2458__part 
                            = vlSelf->__Vfunc_leading_zero32__2458__value;
                        vlSelf->__Vfunc_leading_zero32__2458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2458__count)));
                            vlSelf->__Vfunc_leading_zero32__2458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2458__count)));
                            vlSelf->__Vfunc_leading_zero32__2458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2458__count)));
                            vlSelf->__Vfunc_leading_zero32__2458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2458__count)));
                            vlSelf->__Vfunc_leading_zero32__2458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2470__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2470__part 
                            = vlSelf->__Vfunc_leading_zero32__2470__value;
                        vlSelf->__Vfunc_leading_zero32__2470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2470__count)));
                            vlSelf->__Vfunc_leading_zero32__2470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2470__count)));
                            vlSelf->__Vfunc_leading_zero32__2470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2470__count)));
                            vlSelf->__Vfunc_leading_zero32__2470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2470__count)));
                            vlSelf->__Vfunc_leading_zero32__2470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2482__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2482__part 
                            = vlSelf->__Vfunc_leading_zero32__2482__value;
                        vlSelf->__Vfunc_leading_zero32__2482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2482__count)));
                            vlSelf->__Vfunc_leading_zero32__2482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2482__count)));
                            vlSelf->__Vfunc_leading_zero32__2482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2482__count)));
                            vlSelf->__Vfunc_leading_zero32__2482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2482__count)));
                            vlSelf->__Vfunc_leading_zero32__2482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2494__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2494__part 
                            = vlSelf->__Vfunc_leading_zero32__2494__value;
                        vlSelf->__Vfunc_leading_zero32__2494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2494__count)));
                            vlSelf->__Vfunc_leading_zero32__2494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2494__count)));
                            vlSelf->__Vfunc_leading_zero32__2494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2494__count)));
                            vlSelf->__Vfunc_leading_zero32__2494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2494__count)));
                            vlSelf->__Vfunc_leading_zero32__2494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2506__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2506__part 
                            = vlSelf->__Vfunc_leading_zero32__2506__value;
                        vlSelf->__Vfunc_leading_zero32__2506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2506__count)));
                            vlSelf->__Vfunc_leading_zero32__2506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2506__count)));
                            vlSelf->__Vfunc_leading_zero32__2506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2506__count)));
                            vlSelf->__Vfunc_leading_zero32__2506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2506__count)));
                            vlSelf->__Vfunc_leading_zero32__2506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2518__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2518__part 
                            = vlSelf->__Vfunc_leading_zero32__2518__value;
                        vlSelf->__Vfunc_leading_zero32__2518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2518__count)));
                            vlSelf->__Vfunc_leading_zero32__2518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2518__count)));
                            vlSelf->__Vfunc_leading_zero32__2518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2518__count)));
                            vlSelf->__Vfunc_leading_zero32__2518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2518__count)));
                            vlSelf->__Vfunc_leading_zero32__2518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2530__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2530__part 
                            = vlSelf->__Vfunc_leading_zero32__2530__value;
                        vlSelf->__Vfunc_leading_zero32__2530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2530__count)));
                            vlSelf->__Vfunc_leading_zero32__2530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2530__count)));
                            vlSelf->__Vfunc_leading_zero32__2530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2530__count)));
                            vlSelf->__Vfunc_leading_zero32__2530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2530__count)));
                            vlSelf->__Vfunc_leading_zero32__2530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2542__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2542__part 
                            = vlSelf->__Vfunc_leading_zero32__2542__value;
                        vlSelf->__Vfunc_leading_zero32__2542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2542__count)));
                            vlSelf->__Vfunc_leading_zero32__2542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2542__count)));
                            vlSelf->__Vfunc_leading_zero32__2542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2542__count)));
                            vlSelf->__Vfunc_leading_zero32__2542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2542__count)));
                            vlSelf->__Vfunc_leading_zero32__2542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2554__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2554__part 
                            = vlSelf->__Vfunc_leading_zero32__2554__value;
                        vlSelf->__Vfunc_leading_zero32__2554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2554__count)));
                            vlSelf->__Vfunc_leading_zero32__2554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2554__count)));
                            vlSelf->__Vfunc_leading_zero32__2554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2554__count)));
                            vlSelf->__Vfunc_leading_zero32__2554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2554__count)));
                            vlSelf->__Vfunc_leading_zero32__2554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2566__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2566__part 
                            = vlSelf->__Vfunc_leading_zero32__2566__value;
                        vlSelf->__Vfunc_leading_zero32__2566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2566__count)));
                            vlSelf->__Vfunc_leading_zero32__2566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2566__count)));
                            vlSelf->__Vfunc_leading_zero32__2566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2566__count)));
                            vlSelf->__Vfunc_leading_zero32__2566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2566__count)));
                            vlSelf->__Vfunc_leading_zero32__2566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2578__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2578__part 
                            = vlSelf->__Vfunc_leading_zero32__2578__value;
                        vlSelf->__Vfunc_leading_zero32__2578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2578__count)));
                            vlSelf->__Vfunc_leading_zero32__2578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2578__count)));
                            vlSelf->__Vfunc_leading_zero32__2578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2578__count)));
                            vlSelf->__Vfunc_leading_zero32__2578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2578__count)));
                            vlSelf->__Vfunc_leading_zero32__2578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2590__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2590__part 
                            = vlSelf->__Vfunc_leading_zero32__2590__value;
                        vlSelf->__Vfunc_leading_zero32__2590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2590__count)));
                            vlSelf->__Vfunc_leading_zero32__2590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2590__count)));
                            vlSelf->__Vfunc_leading_zero32__2590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2590__count)));
                            vlSelf->__Vfunc_leading_zero32__2590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2590__count)));
                            vlSelf->__Vfunc_leading_zero32__2590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2602__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2602__part 
                            = vlSelf->__Vfunc_leading_zero32__2602__value;
                        vlSelf->__Vfunc_leading_zero32__2602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2602__count)));
                            vlSelf->__Vfunc_leading_zero32__2602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2602__count)));
                            vlSelf->__Vfunc_leading_zero32__2602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2602__count)));
                            vlSelf->__Vfunc_leading_zero32__2602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2602__count)));
                            vlSelf->__Vfunc_leading_zero32__2602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2614__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2614__part 
                            = vlSelf->__Vfunc_leading_zero32__2614__value;
                        vlSelf->__Vfunc_leading_zero32__2614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2614__count)));
                            vlSelf->__Vfunc_leading_zero32__2614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2614__count)));
                            vlSelf->__Vfunc_leading_zero32__2614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2614__count)));
                            vlSelf->__Vfunc_leading_zero32__2614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2614__count)));
                            vlSelf->__Vfunc_leading_zero32__2614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2626__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2626__part 
                            = vlSelf->__Vfunc_leading_zero32__2626__value;
                        vlSelf->__Vfunc_leading_zero32__2626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2626__count)));
                            vlSelf->__Vfunc_leading_zero32__2626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2626__count)));
                            vlSelf->__Vfunc_leading_zero32__2626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2626__count)));
                            vlSelf->__Vfunc_leading_zero32__2626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2626__count)));
                            vlSelf->__Vfunc_leading_zero32__2626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2638__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2638__part 
                            = vlSelf->__Vfunc_leading_zero32__2638__value;
                        vlSelf->__Vfunc_leading_zero32__2638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2638__count)));
                            vlSelf->__Vfunc_leading_zero32__2638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2638__count)));
                            vlSelf->__Vfunc_leading_zero32__2638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2638__count)));
                            vlSelf->__Vfunc_leading_zero32__2638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2638__count)));
                            vlSelf->__Vfunc_leading_zero32__2638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2650__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2650__part 
                            = vlSelf->__Vfunc_leading_zero32__2650__value;
                        vlSelf->__Vfunc_leading_zero32__2650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2650__count)));
                            vlSelf->__Vfunc_leading_zero32__2650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2650__count)));
                            vlSelf->__Vfunc_leading_zero32__2650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2650__count)));
                            vlSelf->__Vfunc_leading_zero32__2650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2650__count)));
                            vlSelf->__Vfunc_leading_zero32__2650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2662__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2662__part 
                            = vlSelf->__Vfunc_leading_zero32__2662__value;
                        vlSelf->__Vfunc_leading_zero32__2662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2662__count)));
                            vlSelf->__Vfunc_leading_zero32__2662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2662__count)));
                            vlSelf->__Vfunc_leading_zero32__2662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2662__count)));
                            vlSelf->__Vfunc_leading_zero32__2662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2662__count)));
                            vlSelf->__Vfunc_leading_zero32__2662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2674__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2674__part 
                            = vlSelf->__Vfunc_leading_zero32__2674__value;
                        vlSelf->__Vfunc_leading_zero32__2674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2674__count)));
                            vlSelf->__Vfunc_leading_zero32__2674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2674__count)));
                            vlSelf->__Vfunc_leading_zero32__2674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2674__count)));
                            vlSelf->__Vfunc_leading_zero32__2674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2674__count)));
                            vlSelf->__Vfunc_leading_zero32__2674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2686__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2686__part 
                            = vlSelf->__Vfunc_leading_zero32__2686__value;
                        vlSelf->__Vfunc_leading_zero32__2686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2686__count)));
                            vlSelf->__Vfunc_leading_zero32__2686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2686__count)));
                            vlSelf->__Vfunc_leading_zero32__2686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2686__count)));
                            vlSelf->__Vfunc_leading_zero32__2686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2686__count)));
                            vlSelf->__Vfunc_leading_zero32__2686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2698__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2698__part 
                            = vlSelf->__Vfunc_leading_zero32__2698__value;
                        vlSelf->__Vfunc_leading_zero32__2698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2698__count)));
                            vlSelf->__Vfunc_leading_zero32__2698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2698__count)));
                            vlSelf->__Vfunc_leading_zero32__2698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2698__count)));
                            vlSelf->__Vfunc_leading_zero32__2698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2698__count)));
                            vlSelf->__Vfunc_leading_zero32__2698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2710__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2710__part 
                            = vlSelf->__Vfunc_leading_zero32__2710__value;
                        vlSelf->__Vfunc_leading_zero32__2710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2710__count)));
                            vlSelf->__Vfunc_leading_zero32__2710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2710__count)));
                            vlSelf->__Vfunc_leading_zero32__2710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2710__count)));
                            vlSelf->__Vfunc_leading_zero32__2710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2710__count)));
                            vlSelf->__Vfunc_leading_zero32__2710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2722__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2722__part 
                            = vlSelf->__Vfunc_leading_zero32__2722__value;
                        vlSelf->__Vfunc_leading_zero32__2722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2722__count)));
                            vlSelf->__Vfunc_leading_zero32__2722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2722__count)));
                            vlSelf->__Vfunc_leading_zero32__2722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2722__count)));
                            vlSelf->__Vfunc_leading_zero32__2722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2722__count)));
                            vlSelf->__Vfunc_leading_zero32__2722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2734__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2734__part 
                            = vlSelf->__Vfunc_leading_zero32__2734__value;
                        vlSelf->__Vfunc_leading_zero32__2734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2734__count)));
                            vlSelf->__Vfunc_leading_zero32__2734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2734__count)));
                            vlSelf->__Vfunc_leading_zero32__2734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2734__count)));
                            vlSelf->__Vfunc_leading_zero32__2734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2734__count)));
                            vlSelf->__Vfunc_leading_zero32__2734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2746__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2746__part 
                            = vlSelf->__Vfunc_leading_zero32__2746__value;
                        vlSelf->__Vfunc_leading_zero32__2746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2746__count)));
                            vlSelf->__Vfunc_leading_zero32__2746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2746__count)));
                            vlSelf->__Vfunc_leading_zero32__2746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2746__count)));
                            vlSelf->__Vfunc_leading_zero32__2746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2746__count)));
                            vlSelf->__Vfunc_leading_zero32__2746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2758__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2758__part 
                            = vlSelf->__Vfunc_leading_zero32__2758__value;
                        vlSelf->__Vfunc_leading_zero32__2758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2758__count)));
                            vlSelf->__Vfunc_leading_zero32__2758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2758__count)));
                            vlSelf->__Vfunc_leading_zero32__2758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2758__count)));
                            vlSelf->__Vfunc_leading_zero32__2758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2758__count)));
                            vlSelf->__Vfunc_leading_zero32__2758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2770__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2770__part 
                            = vlSelf->__Vfunc_leading_zero32__2770__value;
                        vlSelf->__Vfunc_leading_zero32__2770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2770__count)));
                            vlSelf->__Vfunc_leading_zero32__2770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2770__count)));
                            vlSelf->__Vfunc_leading_zero32__2770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2770__count)));
                            vlSelf->__Vfunc_leading_zero32__2770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2770__count)));
                            vlSelf->__Vfunc_leading_zero32__2770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2782__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2782__part 
                            = vlSelf->__Vfunc_leading_zero32__2782__value;
                        vlSelf->__Vfunc_leading_zero32__2782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2782__count)));
                            vlSelf->__Vfunc_leading_zero32__2782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2782__count)));
                            vlSelf->__Vfunc_leading_zero32__2782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2782__count)));
                            vlSelf->__Vfunc_leading_zero32__2782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2782__count)));
                            vlSelf->__Vfunc_leading_zero32__2782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2794__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2794__part 
                            = vlSelf->__Vfunc_leading_zero32__2794__value;
                        vlSelf->__Vfunc_leading_zero32__2794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2794__count)));
                            vlSelf->__Vfunc_leading_zero32__2794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2794__count)));
                            vlSelf->__Vfunc_leading_zero32__2794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2794__count)));
                            vlSelf->__Vfunc_leading_zero32__2794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2794__count)));
                            vlSelf->__Vfunc_leading_zero32__2794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2806__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2806__part 
                            = vlSelf->__Vfunc_leading_zero32__2806__value;
                        vlSelf->__Vfunc_leading_zero32__2806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2806__count)));
                            vlSelf->__Vfunc_leading_zero32__2806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2806__count)));
                            vlSelf->__Vfunc_leading_zero32__2806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2806__count)));
                            vlSelf->__Vfunc_leading_zero32__2806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2806__count)));
                            vlSelf->__Vfunc_leading_zero32__2806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2818__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2818__part 
                            = vlSelf->__Vfunc_leading_zero32__2818__value;
                        vlSelf->__Vfunc_leading_zero32__2818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2818__count)));
                            vlSelf->__Vfunc_leading_zero32__2818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2818__count)));
                            vlSelf->__Vfunc_leading_zero32__2818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2818__count)));
                            vlSelf->__Vfunc_leading_zero32__2818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2818__count)));
                            vlSelf->__Vfunc_leading_zero32__2818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2830__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2830__part 
                            = vlSelf->__Vfunc_leading_zero32__2830__value;
                        vlSelf->__Vfunc_leading_zero32__2830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2830__count)));
                            vlSelf->__Vfunc_leading_zero32__2830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2830__count)));
                            vlSelf->__Vfunc_leading_zero32__2830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2830__count)));
                            vlSelf->__Vfunc_leading_zero32__2830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2830__count)));
                            vlSelf->__Vfunc_leading_zero32__2830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2842__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2842__part 
                            = vlSelf->__Vfunc_leading_zero32__2842__value;
                        vlSelf->__Vfunc_leading_zero32__2842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2842__count)));
                            vlSelf->__Vfunc_leading_zero32__2842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2842__count)));
                            vlSelf->__Vfunc_leading_zero32__2842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2842__count)));
                            vlSelf->__Vfunc_leading_zero32__2842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2842__count)));
                            vlSelf->__Vfunc_leading_zero32__2842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2854__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2854__part 
                            = vlSelf->__Vfunc_leading_zero32__2854__value;
                        vlSelf->__Vfunc_leading_zero32__2854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2854__count)));
                            vlSelf->__Vfunc_leading_zero32__2854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2854__count)));
                            vlSelf->__Vfunc_leading_zero32__2854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2854__count)));
                            vlSelf->__Vfunc_leading_zero32__2854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2854__count)));
                            vlSelf->__Vfunc_leading_zero32__2854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2866__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2866__part 
                            = vlSelf->__Vfunc_leading_zero32__2866__value;
                        vlSelf->__Vfunc_leading_zero32__2866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2866__count)));
                            vlSelf->__Vfunc_leading_zero32__2866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2866__count)));
                            vlSelf->__Vfunc_leading_zero32__2866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2866__count)));
                            vlSelf->__Vfunc_leading_zero32__2866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2866__count)));
                            vlSelf->__Vfunc_leading_zero32__2866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2878__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2878__part 
                            = vlSelf->__Vfunc_leading_zero32__2878__value;
                        vlSelf->__Vfunc_leading_zero32__2878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2878__count)));
                            vlSelf->__Vfunc_leading_zero32__2878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2878__count)));
                            vlSelf->__Vfunc_leading_zero32__2878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2878__count)));
                            vlSelf->__Vfunc_leading_zero32__2878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2878__count)));
                            vlSelf->__Vfunc_leading_zero32__2878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2890__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2890__part 
                            = vlSelf->__Vfunc_leading_zero32__2890__value;
                        vlSelf->__Vfunc_leading_zero32__2890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2890__count)));
                            vlSelf->__Vfunc_leading_zero32__2890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2890__count)));
                            vlSelf->__Vfunc_leading_zero32__2890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2890__count)));
                            vlSelf->__Vfunc_leading_zero32__2890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2890__count)));
                            vlSelf->__Vfunc_leading_zero32__2890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2902__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2902__part 
                            = vlSelf->__Vfunc_leading_zero32__2902__value;
                        vlSelf->__Vfunc_leading_zero32__2902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2902__count)));
                            vlSelf->__Vfunc_leading_zero32__2902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2902__count)));
                            vlSelf->__Vfunc_leading_zero32__2902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2902__count)));
                            vlSelf->__Vfunc_leading_zero32__2902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2902__count)));
                            vlSelf->__Vfunc_leading_zero32__2902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2914__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2914__part 
                            = vlSelf->__Vfunc_leading_zero32__2914__value;
                        vlSelf->__Vfunc_leading_zero32__2914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2914__count)));
                            vlSelf->__Vfunc_leading_zero32__2914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2914__count)));
                            vlSelf->__Vfunc_leading_zero32__2914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2914__count)));
                            vlSelf->__Vfunc_leading_zero32__2914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2914__count)));
                            vlSelf->__Vfunc_leading_zero32__2914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2926__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2926__part 
                            = vlSelf->__Vfunc_leading_zero32__2926__value;
                        vlSelf->__Vfunc_leading_zero32__2926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2926__count)));
                            vlSelf->__Vfunc_leading_zero32__2926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2926__count)));
                            vlSelf->__Vfunc_leading_zero32__2926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2926__count)));
                            vlSelf->__Vfunc_leading_zero32__2926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2926__count)));
                            vlSelf->__Vfunc_leading_zero32__2926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2938__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2938__part 
                            = vlSelf->__Vfunc_leading_zero32__2938__value;
                        vlSelf->__Vfunc_leading_zero32__2938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2938__count)));
                            vlSelf->__Vfunc_leading_zero32__2938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2938__count)));
                            vlSelf->__Vfunc_leading_zero32__2938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2938__count)));
                            vlSelf->__Vfunc_leading_zero32__2938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2938__count)));
                            vlSelf->__Vfunc_leading_zero32__2938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2950__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2950__part 
                            = vlSelf->__Vfunc_leading_zero32__2950__value;
                        vlSelf->__Vfunc_leading_zero32__2950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2950__count)));
                            vlSelf->__Vfunc_leading_zero32__2950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2950__count)));
                            vlSelf->__Vfunc_leading_zero32__2950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2950__count)));
                            vlSelf->__Vfunc_leading_zero32__2950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2950__count)));
                            vlSelf->__Vfunc_leading_zero32__2950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2962__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2962__part 
                            = vlSelf->__Vfunc_leading_zero32__2962__value;
                        vlSelf->__Vfunc_leading_zero32__2962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2962__count)));
                            vlSelf->__Vfunc_leading_zero32__2962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2962__count)));
                            vlSelf->__Vfunc_leading_zero32__2962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2962__count)));
                            vlSelf->__Vfunc_leading_zero32__2962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2962__count)));
                            vlSelf->__Vfunc_leading_zero32__2962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2974__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2974__part 
                            = vlSelf->__Vfunc_leading_zero32__2974__value;
                        vlSelf->__Vfunc_leading_zero32__2974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2974__count)));
                            vlSelf->__Vfunc_leading_zero32__2974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2974__count)));
                            vlSelf->__Vfunc_leading_zero32__2974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2974__count)));
                            vlSelf->__Vfunc_leading_zero32__2974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2974__count)));
                            vlSelf->__Vfunc_leading_zero32__2974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2986__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2986__part 
                            = vlSelf->__Vfunc_leading_zero32__2986__value;
                        vlSelf->__Vfunc_leading_zero32__2986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2986__count)));
                            vlSelf->__Vfunc_leading_zero32__2986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2986__count)));
                            vlSelf->__Vfunc_leading_zero32__2986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2986__count)));
                            vlSelf->__Vfunc_leading_zero32__2986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2986__count)));
                            vlSelf->__Vfunc_leading_zero32__2986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2998__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2998__part 
                            = vlSelf->__Vfunc_leading_zero32__2998__value;
                        vlSelf->__Vfunc_leading_zero32__2998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2998__count)));
                            vlSelf->__Vfunc_leading_zero32__2998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2998__count)));
                            vlSelf->__Vfunc_leading_zero32__2998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2998__count)));
                            vlSelf->__Vfunc_leading_zero32__2998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2998__count)));
                            vlSelf->__Vfunc_leading_zero32__2998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3010__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3010__part 
                            = vlSelf->__Vfunc_leading_zero32__3010__value;
                        vlSelf->__Vfunc_leading_zero32__3010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3010__count)));
                            vlSelf->__Vfunc_leading_zero32__3010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3010__count)));
                            vlSelf->__Vfunc_leading_zero32__3010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3010__count)));
                            vlSelf->__Vfunc_leading_zero32__3010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3010__count)));
                            vlSelf->__Vfunc_leading_zero32__3010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3022__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3022__part 
                            = vlSelf->__Vfunc_leading_zero32__3022__value;
                        vlSelf->__Vfunc_leading_zero32__3022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3022__count)));
                            vlSelf->__Vfunc_leading_zero32__3022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3022__count)));
                            vlSelf->__Vfunc_leading_zero32__3022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3022__count)));
                            vlSelf->__Vfunc_leading_zero32__3022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3022__count)));
                            vlSelf->__Vfunc_leading_zero32__3022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3034__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3034__part 
                            = vlSelf->__Vfunc_leading_zero32__3034__value;
                        vlSelf->__Vfunc_leading_zero32__3034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3034__count)));
                            vlSelf->__Vfunc_leading_zero32__3034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3034__count)));
                            vlSelf->__Vfunc_leading_zero32__3034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3034__count)));
                            vlSelf->__Vfunc_leading_zero32__3034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3034__count)));
                            vlSelf->__Vfunc_leading_zero32__3034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3046__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3046__part 
                            = vlSelf->__Vfunc_leading_zero32__3046__value;
                        vlSelf->__Vfunc_leading_zero32__3046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3046__count)));
                            vlSelf->__Vfunc_leading_zero32__3046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3046__count)));
                            vlSelf->__Vfunc_leading_zero32__3046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3046__count)));
                            vlSelf->__Vfunc_leading_zero32__3046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3046__count)));
                            vlSelf->__Vfunc_leading_zero32__3046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3058__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3058__part 
                            = vlSelf->__Vfunc_leading_zero32__3058__value;
                        vlSelf->__Vfunc_leading_zero32__3058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3058__count)));
                            vlSelf->__Vfunc_leading_zero32__3058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3058__count)));
                            vlSelf->__Vfunc_leading_zero32__3058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3058__count)));
                            vlSelf->__Vfunc_leading_zero32__3058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3058__count)));
                            vlSelf->__Vfunc_leading_zero32__3058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3070__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3070__part 
                            = vlSelf->__Vfunc_leading_zero32__3070__value;
                        vlSelf->__Vfunc_leading_zero32__3070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3070__count)));
                            vlSelf->__Vfunc_leading_zero32__3070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3070__count)));
                            vlSelf->__Vfunc_leading_zero32__3070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3070__count)));
                            vlSelf->__Vfunc_leading_zero32__3070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3070__count)));
                            vlSelf->__Vfunc_leading_zero32__3070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3082__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3082__part 
                            = vlSelf->__Vfunc_leading_zero32__3082__value;
                        vlSelf->__Vfunc_leading_zero32__3082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3082__count)));
                            vlSelf->__Vfunc_leading_zero32__3082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3082__count)));
                            vlSelf->__Vfunc_leading_zero32__3082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3082__count)));
                            vlSelf->__Vfunc_leading_zero32__3082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3082__count)));
                            vlSelf->__Vfunc_leading_zero32__3082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3094__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3094__part 
                            = vlSelf->__Vfunc_leading_zero32__3094__value;
                        vlSelf->__Vfunc_leading_zero32__3094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3094__count)));
                            vlSelf->__Vfunc_leading_zero32__3094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3094__count)));
                            vlSelf->__Vfunc_leading_zero32__3094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3094__count)));
                            vlSelf->__Vfunc_leading_zero32__3094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3094__count)));
                            vlSelf->__Vfunc_leading_zero32__3094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3106__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3106__part 
                            = vlSelf->__Vfunc_leading_zero32__3106__value;
                        vlSelf->__Vfunc_leading_zero32__3106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3106__count)));
                            vlSelf->__Vfunc_leading_zero32__3106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3106__count)));
                            vlSelf->__Vfunc_leading_zero32__3106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3106__count)));
                            vlSelf->__Vfunc_leading_zero32__3106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3106__count)));
                            vlSelf->__Vfunc_leading_zero32__3106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3118__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3118__part 
                            = vlSelf->__Vfunc_leading_zero32__3118__value;
                        vlSelf->__Vfunc_leading_zero32__3118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3118__count)));
                            vlSelf->__Vfunc_leading_zero32__3118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3118__count)));
                            vlSelf->__Vfunc_leading_zero32__3118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3118__count)));
                            vlSelf->__Vfunc_leading_zero32__3118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3118__count)));
                            vlSelf->__Vfunc_leading_zero32__3118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3130__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3130__part 
                            = vlSelf->__Vfunc_leading_zero32__3130__value;
                        vlSelf->__Vfunc_leading_zero32__3130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3130__count)));
                            vlSelf->__Vfunc_leading_zero32__3130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3130__count)));
                            vlSelf->__Vfunc_leading_zero32__3130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3130__count)));
                            vlSelf->__Vfunc_leading_zero32__3130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3130__count)));
                            vlSelf->__Vfunc_leading_zero32__3130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3142__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3142__part 
                            = vlSelf->__Vfunc_leading_zero32__3142__value;
                        vlSelf->__Vfunc_leading_zero32__3142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3142__count)));
                            vlSelf->__Vfunc_leading_zero32__3142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3142__count)));
                            vlSelf->__Vfunc_leading_zero32__3142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3142__count)));
                            vlSelf->__Vfunc_leading_zero32__3142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3142__count)));
                            vlSelf->__Vfunc_leading_zero32__3142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3154__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3154__part 
                            = vlSelf->__Vfunc_leading_zero32__3154__value;
                        vlSelf->__Vfunc_leading_zero32__3154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3154__count)));
                            vlSelf->__Vfunc_leading_zero32__3154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3154__count)));
                            vlSelf->__Vfunc_leading_zero32__3154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3154__count)));
                            vlSelf->__Vfunc_leading_zero32__3154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3154__count)));
                            vlSelf->__Vfunc_leading_zero32__3154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3166__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3166__part 
                            = vlSelf->__Vfunc_leading_zero32__3166__value;
                        vlSelf->__Vfunc_leading_zero32__3166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3166__count)));
                            vlSelf->__Vfunc_leading_zero32__3166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3166__count)));
                            vlSelf->__Vfunc_leading_zero32__3166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3166__count)));
                            vlSelf->__Vfunc_leading_zero32__3166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3166__count)));
                            vlSelf->__Vfunc_leading_zero32__3166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3178__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3178__part 
                            = vlSelf->__Vfunc_leading_zero32__3178__value;
                        vlSelf->__Vfunc_leading_zero32__3178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3178__count)));
                            vlSelf->__Vfunc_leading_zero32__3178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3178__count)));
                            vlSelf->__Vfunc_leading_zero32__3178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3178__count)));
                            vlSelf->__Vfunc_leading_zero32__3178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3178__count)));
                            vlSelf->__Vfunc_leading_zero32__3178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3190__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3190__part 
                            = vlSelf->__Vfunc_leading_zero32__3190__value;
                        vlSelf->__Vfunc_leading_zero32__3190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3190__count)));
                            vlSelf->__Vfunc_leading_zero32__3190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3190__count)));
                            vlSelf->__Vfunc_leading_zero32__3190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3190__count)));
                            vlSelf->__Vfunc_leading_zero32__3190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3190__count)));
                            vlSelf->__Vfunc_leading_zero32__3190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3202__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3202__part 
                            = vlSelf->__Vfunc_leading_zero32__3202__value;
                        vlSelf->__Vfunc_leading_zero32__3202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3202__count)));
                            vlSelf->__Vfunc_leading_zero32__3202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3202__count)));
                            vlSelf->__Vfunc_leading_zero32__3202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3202__count)));
                            vlSelf->__Vfunc_leading_zero32__3202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3202__count)));
                            vlSelf->__Vfunc_leading_zero32__3202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3214__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3214__part 
                            = vlSelf->__Vfunc_leading_zero32__3214__value;
                        vlSelf->__Vfunc_leading_zero32__3214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3214__count)));
                            vlSelf->__Vfunc_leading_zero32__3214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3214__count)));
                            vlSelf->__Vfunc_leading_zero32__3214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3214__count)));
                            vlSelf->__Vfunc_leading_zero32__3214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3214__count)));
                            vlSelf->__Vfunc_leading_zero32__3214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3226__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3226__part 
                            = vlSelf->__Vfunc_leading_zero32__3226__value;
                        vlSelf->__Vfunc_leading_zero32__3226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3226__count)));
                            vlSelf->__Vfunc_leading_zero32__3226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3226__count)));
                            vlSelf->__Vfunc_leading_zero32__3226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3226__count)));
                            vlSelf->__Vfunc_leading_zero32__3226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3226__count)));
                            vlSelf->__Vfunc_leading_zero32__3226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3238__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3238__part 
                            = vlSelf->__Vfunc_leading_zero32__3238__value;
                        vlSelf->__Vfunc_leading_zero32__3238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3238__count)));
                            vlSelf->__Vfunc_leading_zero32__3238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3238__count)));
                            vlSelf->__Vfunc_leading_zero32__3238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3238__count)));
                            vlSelf->__Vfunc_leading_zero32__3238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3238__count)));
                            vlSelf->__Vfunc_leading_zero32__3238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3250__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3250__part 
                            = vlSelf->__Vfunc_leading_zero32__3250__value;
                        vlSelf->__Vfunc_leading_zero32__3250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3250__count)));
                            vlSelf->__Vfunc_leading_zero32__3250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3250__count)));
                            vlSelf->__Vfunc_leading_zero32__3250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3250__count)));
                            vlSelf->__Vfunc_leading_zero32__3250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3250__count)));
                            vlSelf->__Vfunc_leading_zero32__3250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3262__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3262__part 
                            = vlSelf->__Vfunc_leading_zero32__3262__value;
                        vlSelf->__Vfunc_leading_zero32__3262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3262__count)));
                            vlSelf->__Vfunc_leading_zero32__3262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3262__count)));
                            vlSelf->__Vfunc_leading_zero32__3262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3262__count)));
                            vlSelf->__Vfunc_leading_zero32__3262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3262__count)));
                            vlSelf->__Vfunc_leading_zero32__3262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3274__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3274__part 
                            = vlSelf->__Vfunc_leading_zero32__3274__value;
                        vlSelf->__Vfunc_leading_zero32__3274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3274__count)));
                            vlSelf->__Vfunc_leading_zero32__3274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3274__count)));
                            vlSelf->__Vfunc_leading_zero32__3274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3274__count)));
                            vlSelf->__Vfunc_leading_zero32__3274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3274__count)));
                            vlSelf->__Vfunc_leading_zero32__3274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3274__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3286__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3286__part 
                            = vlSelf->__Vfunc_leading_zero32__3286__value;
                        vlSelf->__Vfunc_leading_zero32__3286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3286__count)));
                            vlSelf->__Vfunc_leading_zero32__3286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3286__count)));
                            vlSelf->__Vfunc_leading_zero32__3286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3286__count)));
                            vlSelf->__Vfunc_leading_zero32__3286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3286__count)));
                            vlSelf->__Vfunc_leading_zero32__3286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3298__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3298__part 
                            = vlSelf->__Vfunc_leading_zero32__3298__value;
                        vlSelf->__Vfunc_leading_zero32__3298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3310__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3310__part 
                            = vlSelf->__Vfunc_leading_zero32__3310__value;
                        vlSelf->__Vfunc_leading_zero32__3310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3322__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3322__part 
                            = vlSelf->__Vfunc_leading_zero32__3322__value;
                        vlSelf->__Vfunc_leading_zero32__3322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3334__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3334__part 
                            = vlSelf->__Vfunc_leading_zero32__3334__value;
                        vlSelf->__Vfunc_leading_zero32__3334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3346__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3346__part 
                            = vlSelf->__Vfunc_leading_zero32__3346__value;
                        vlSelf->__Vfunc_leading_zero32__3346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3358__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3358__part 
                            = vlSelf->__Vfunc_leading_zero32__3358__value;
                        vlSelf->__Vfunc_leading_zero32__3358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3370__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3370__part 
                            = vlSelf->__Vfunc_leading_zero32__3370__value;
                        vlSelf->__Vfunc_leading_zero32__3370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3382__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3382__part 
                            = vlSelf->__Vfunc_leading_zero32__3382__value;
                        vlSelf->__Vfunc_leading_zero32__3382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3394__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3394__part 
                            = vlSelf->__Vfunc_leading_zero32__3394__value;
                        vlSelf->__Vfunc_leading_zero32__3394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3406__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3406__part 
                            = vlSelf->__Vfunc_leading_zero32__3406__value;
                        vlSelf->__Vfunc_leading_zero32__3406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3418__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3418__part 
                            = vlSelf->__Vfunc_leading_zero32__3418__value;
                        vlSelf->__Vfunc_leading_zero32__3418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3430__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3430__part 
                            = vlSelf->__Vfunc_leading_zero32__3430__value;
                        vlSelf->__Vfunc_leading_zero32__3430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3442__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3442__part 
                            = vlSelf->__Vfunc_leading_zero32__3442__value;
                        vlSelf->__Vfunc_leading_zero32__3442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3454__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3454__part 
                            = vlSelf->__Vfunc_leading_zero32__3454__value;
                        vlSelf->__Vfunc_leading_zero32__3454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3466__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3466__part 
                            = vlSelf->__Vfunc_leading_zero32__3466__value;
                        vlSelf->__Vfunc_leading_zero32__3466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3478__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3478__part 
                            = vlSelf->__Vfunc_leading_zero32__3478__value;
                        vlSelf->__Vfunc_leading_zero32__3478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3490__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3490__part 
                            = vlSelf->__Vfunc_leading_zero32__3490__value;
                        vlSelf->__Vfunc_leading_zero32__3490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3502__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3502__part 
                            = vlSelf->__Vfunc_leading_zero32__3502__value;
                        vlSelf->__Vfunc_leading_zero32__3502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3514__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3514__part 
                            = vlSelf->__Vfunc_leading_zero32__3514__value;
                        vlSelf->__Vfunc_leading_zero32__3514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3526__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3526__part 
                            = vlSelf->__Vfunc_leading_zero32__3526__value;
                        vlSelf->__Vfunc_leading_zero32__3526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3538__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3538__part 
                            = vlSelf->__Vfunc_leading_zero32__3538__value;
                        vlSelf->__Vfunc_leading_zero32__3538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3550__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3550__part 
                            = vlSelf->__Vfunc_leading_zero32__3550__value;
                        vlSelf->__Vfunc_leading_zero32__3550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3562__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3562__part 
                            = vlSelf->__Vfunc_leading_zero32__3562__value;
                        vlSelf->__Vfunc_leading_zero32__3562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3574__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3574__part 
                            = vlSelf->__Vfunc_leading_zero32__3574__value;
                        vlSelf->__Vfunc_leading_zero32__3574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3574__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3586__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3586__part 
                            = vlSelf->__Vfunc_leading_zero32__3586__value;
                        vlSelf->__Vfunc_leading_zero32__3586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3586__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3598__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3598__part 
                            = vlSelf->__Vfunc_leading_zero32__3598__value;
                        vlSelf->__Vfunc_leading_zero32__3598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3598__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3610__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3610__part 
                            = vlSelf->__Vfunc_leading_zero32__3610__value;
                        vlSelf->__Vfunc_leading_zero32__3610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3610__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3622__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3622__part 
                            = vlSelf->__Vfunc_leading_zero32__3622__value;
                        vlSelf->__Vfunc_leading_zero32__3622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3622__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3634__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3634__part 
                            = vlSelf->__Vfunc_leading_zero32__3634__value;
                        vlSelf->__Vfunc_leading_zero32__3634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3634__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3646__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3646__part 
                            = vlSelf->__Vfunc_leading_zero32__3646__value;
                        vlSelf->__Vfunc_leading_zero32__3646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3646__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3658__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3658__part 
                            = vlSelf->__Vfunc_leading_zero32__3658__value;
                        vlSelf->__Vfunc_leading_zero32__3658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3658__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3670__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3670__part 
                            = vlSelf->__Vfunc_leading_zero32__3670__value;
                        vlSelf->__Vfunc_leading_zero32__3670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3670__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3682__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3682__part 
                            = vlSelf->__Vfunc_leading_zero32__3682__value;
                        vlSelf->__Vfunc_leading_zero32__3682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3682__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3694__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3694__part 
                            = vlSelf->__Vfunc_leading_zero32__3694__value;
                        vlSelf->__Vfunc_leading_zero32__3694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3694__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3706__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3706__part 
                            = vlSelf->__Vfunc_leading_zero32__3706__value;
                        vlSelf->__Vfunc_leading_zero32__3706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3706__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3718__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3718__part 
                            = vlSelf->__Vfunc_leading_zero32__3718__value;
                        vlSelf->__Vfunc_leading_zero32__3718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3718__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3730__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3730__part 
                            = vlSelf->__Vfunc_leading_zero32__3730__value;
                        vlSelf->__Vfunc_leading_zero32__3730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3730__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3742__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3742__part 
                            = vlSelf->__Vfunc_leading_zero32__3742__value;
                        vlSelf->__Vfunc_leading_zero32__3742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3742__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3754__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3754__part 
                            = vlSelf->__Vfunc_leading_zero32__3754__value;
                        vlSelf->__Vfunc_leading_zero32__3754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3754__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3766__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3766__part 
                            = vlSelf->__Vfunc_leading_zero32__3766__value;
                        vlSelf->__Vfunc_leading_zero32__3766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3766__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3778__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3778__part 
                            = vlSelf->__Vfunc_leading_zero32__3778__value;
                        vlSelf->__Vfunc_leading_zero32__3778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3778__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3790__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3790__part 
                            = vlSelf->__Vfunc_leading_zero32__3790__value;
                        vlSelf->__Vfunc_leading_zero32__3790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3790__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3802__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3802__part 
                            = vlSelf->__Vfunc_leading_zero32__3802__value;
                        vlSelf->__Vfunc_leading_zero32__3802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3802__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3814__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3814__part 
                            = vlSelf->__Vfunc_leading_zero32__3814__value;
                        vlSelf->__Vfunc_leading_zero32__3814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3814__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3826__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3826__part 
                            = vlSelf->__Vfunc_leading_zero32__3826__value;
                        vlSelf->__Vfunc_leading_zero32__3826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3826__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3838__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3838__part 
                            = vlSelf->__Vfunc_leading_zero32__3838__value;
                        vlSelf->__Vfunc_leading_zero32__3838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3838__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3850__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3850__part 
                            = vlSelf->__Vfunc_leading_zero32__3850__value;
                        vlSelf->__Vfunc_leading_zero32__3850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3850__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3862__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3862__part 
                            = vlSelf->__Vfunc_leading_zero32__3862__value;
                        vlSelf->__Vfunc_leading_zero32__3862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3862__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3874__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3874__part 
                            = vlSelf->__Vfunc_leading_zero32__3874__value;
                        vlSelf->__Vfunc_leading_zero32__3874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3874__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3886__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3886__part 
                            = vlSelf->__Vfunc_leading_zero32__3886__value;
                        vlSelf->__Vfunc_leading_zero32__3886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3886__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3898__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3898__part 
                            = vlSelf->__Vfunc_leading_zero32__3898__value;
                        vlSelf->__Vfunc_leading_zero32__3898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3910__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3910__part 
                            = vlSelf->__Vfunc_leading_zero32__3910__value;
                        vlSelf->__Vfunc_leading_zero32__3910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3922__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3922__part 
                            = vlSelf->__Vfunc_leading_zero32__3922__value;
                        vlSelf->__Vfunc_leading_zero32__3922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3934__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3934__part 
                            = vlSelf->__Vfunc_leading_zero32__3934__value;
                        vlSelf->__Vfunc_leading_zero32__3934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3946__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3946__part 
                            = vlSelf->__Vfunc_leading_zero32__3946__value;
                        vlSelf->__Vfunc_leading_zero32__3946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3958__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3958__part 
                            = vlSelf->__Vfunc_leading_zero32__3958__value;
                        vlSelf->__Vfunc_leading_zero32__3958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3970__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3970__part 
                            = vlSelf->__Vfunc_leading_zero32__3970__value;
                        vlSelf->__Vfunc_leading_zero32__3970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3982__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3982__part 
                            = vlSelf->__Vfunc_leading_zero32__3982__value;
                        vlSelf->__Vfunc_leading_zero32__3982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3994__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3994__part 
                            = vlSelf->__Vfunc_leading_zero32__3994__value;
                        vlSelf->__Vfunc_leading_zero32__3994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3994__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4006__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4006__part 
                            = vlSelf->__Vfunc_leading_zero32__4006__value;
                        vlSelf->__Vfunc_leading_zero32__4006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4018__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4018__part 
                            = vlSelf->__Vfunc_leading_zero32__4018__value;
                        vlSelf->__Vfunc_leading_zero32__4018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4030__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4030__part 
                            = vlSelf->__Vfunc_leading_zero32__4030__value;
                        vlSelf->__Vfunc_leading_zero32__4030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4030__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4042__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4042__part 
                            = vlSelf->__Vfunc_leading_zero32__4042__value;
                        vlSelf->__Vfunc_leading_zero32__4042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4054__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4054__part 
                            = vlSelf->__Vfunc_leading_zero32__4054__value;
                        vlSelf->__Vfunc_leading_zero32__4054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4066__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4066__part 
                            = vlSelf->__Vfunc_leading_zero32__4066__value;
                        vlSelf->__Vfunc_leading_zero32__4066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4066__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4078__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4078__part 
                            = vlSelf->__Vfunc_leading_zero32__4078__value;
                        vlSelf->__Vfunc_leading_zero32__4078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4090__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4090__part 
                            = vlSelf->__Vfunc_leading_zero32__4090__value;
                        vlSelf->__Vfunc_leading_zero32__4090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4102__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4102__part 
                            = vlSelf->__Vfunc_leading_zero32__4102__value;
                        vlSelf->__Vfunc_leading_zero32__4102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4114__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4114__part 
                            = vlSelf->__Vfunc_leading_zero32__4114__value;
                        vlSelf->__Vfunc_leading_zero32__4114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4126__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4126__part 
                            = vlSelf->__Vfunc_leading_zero32__4126__value;
                        vlSelf->__Vfunc_leading_zero32__4126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4138__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4138__part 
                            = vlSelf->__Vfunc_leading_zero32__4138__value;
                        vlSelf->__Vfunc_leading_zero32__4138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4150__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4150__part 
                            = vlSelf->__Vfunc_leading_zero32__4150__value;
                        vlSelf->__Vfunc_leading_zero32__4150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4162__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4162__part 
                            = vlSelf->__Vfunc_leading_zero32__4162__value;
                        vlSelf->__Vfunc_leading_zero32__4162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4174__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4174__part 
                            = vlSelf->__Vfunc_leading_zero32__4174__value;
                        vlSelf->__Vfunc_leading_zero32__4174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4186__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4186__part 
                            = vlSelf->__Vfunc_leading_zero32__4186__value;
                        vlSelf->__Vfunc_leading_zero32__4186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4198__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4198__part 
                            = vlSelf->__Vfunc_leading_zero32__4198__value;
                        vlSelf->__Vfunc_leading_zero32__4198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4210__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4210__part 
                            = vlSelf->__Vfunc_leading_zero32__4210__value;
                        vlSelf->__Vfunc_leading_zero32__4210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4222__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4222__part 
                            = vlSelf->__Vfunc_leading_zero32__4222__value;
                        vlSelf->__Vfunc_leading_zero32__4222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4234__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4234__part 
                            = vlSelf->__Vfunc_leading_zero32__4234__value;
                        vlSelf->__Vfunc_leading_zero32__4234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4246__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4246__part 
                            = vlSelf->__Vfunc_leading_zero32__4246__value;
                        vlSelf->__Vfunc_leading_zero32__4246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4258__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4258__part 
                            = vlSelf->__Vfunc_leading_zero32__4258__value;
                        vlSelf->__Vfunc_leading_zero32__4258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4270__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4270__part 
                            = vlSelf->__Vfunc_leading_zero32__4270__value;
                        vlSelf->__Vfunc_leading_zero32__4270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4282__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4282__part 
                            = vlSelf->__Vfunc_leading_zero32__4282__value;
                        vlSelf->__Vfunc_leading_zero32__4282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4294__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4294__part 
                            = vlSelf->__Vfunc_leading_zero32__4294__value;
                        vlSelf->__Vfunc_leading_zero32__4294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4306__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4306__part 
                            = vlSelf->__Vfunc_leading_zero32__4306__value;
                        vlSelf->__Vfunc_leading_zero32__4306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4318__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4318__part 
                            = vlSelf->__Vfunc_leading_zero32__4318__value;
                        vlSelf->__Vfunc_leading_zero32__4318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4330__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4330__part 
                            = vlSelf->__Vfunc_leading_zero32__4330__value;
                        vlSelf->__Vfunc_leading_zero32__4330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4342__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4342__part 
                            = vlSelf->__Vfunc_leading_zero32__4342__value;
                        vlSelf->__Vfunc_leading_zero32__4342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4342__Vfuncout)) 
                             - (IData)(8U))));
}
