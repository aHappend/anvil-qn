// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__14(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__14\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3867__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3867__part 
                            = vlSelf->__Vfunc_leading_zero32__3867__value;
                        vlSelf->__Vfunc_leading_zero32__3867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3879__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3879__part 
                            = vlSelf->__Vfunc_leading_zero32__3879__value;
                        vlSelf->__Vfunc_leading_zero32__3879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3891__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3891__part 
                            = vlSelf->__Vfunc_leading_zero32__3891__value;
                        vlSelf->__Vfunc_leading_zero32__3891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3903__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3903__part 
                            = vlSelf->__Vfunc_leading_zero32__3903__value;
                        vlSelf->__Vfunc_leading_zero32__3903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3915__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3915__part 
                            = vlSelf->__Vfunc_leading_zero32__3915__value;
                        vlSelf->__Vfunc_leading_zero32__3915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3927__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3927__part 
                            = vlSelf->__Vfunc_leading_zero32__3927__value;
                        vlSelf->__Vfunc_leading_zero32__3927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3939__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3939__part 
                            = vlSelf->__Vfunc_leading_zero32__3939__value;
                        vlSelf->__Vfunc_leading_zero32__3939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3951__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3951__part 
                            = vlSelf->__Vfunc_leading_zero32__3951__value;
                        vlSelf->__Vfunc_leading_zero32__3951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3963__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3963__part 
                            = vlSelf->__Vfunc_leading_zero32__3963__value;
                        vlSelf->__Vfunc_leading_zero32__3963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3975__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3975__part 
                            = vlSelf->__Vfunc_leading_zero32__3975__value;
                        vlSelf->__Vfunc_leading_zero32__3975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3987__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3987__part 
                            = vlSelf->__Vfunc_leading_zero32__3987__value;
                        vlSelf->__Vfunc_leading_zero32__3987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3999__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3999__part 
                            = vlSelf->__Vfunc_leading_zero32__3999__value;
                        vlSelf->__Vfunc_leading_zero32__3999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4011__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4011__part 
                            = vlSelf->__Vfunc_leading_zero32__4011__value;
                        vlSelf->__Vfunc_leading_zero32__4011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4023__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4023__part 
                            = vlSelf->__Vfunc_leading_zero32__4023__value;
                        vlSelf->__Vfunc_leading_zero32__4023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4035__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4035__part 
                            = vlSelf->__Vfunc_leading_zero32__4035__value;
                        vlSelf->__Vfunc_leading_zero32__4035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4047__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4047__part 
                            = vlSelf->__Vfunc_leading_zero32__4047__value;
                        vlSelf->__Vfunc_leading_zero32__4047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4059__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4059__part 
                            = vlSelf->__Vfunc_leading_zero32__4059__value;
                        vlSelf->__Vfunc_leading_zero32__4059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4071__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4071__part 
                            = vlSelf->__Vfunc_leading_zero32__4071__value;
                        vlSelf->__Vfunc_leading_zero32__4071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4083__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4083__part 
                            = vlSelf->__Vfunc_leading_zero32__4083__value;
                        vlSelf->__Vfunc_leading_zero32__4083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4095__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4095__part 
                            = vlSelf->__Vfunc_leading_zero32__4095__value;
                        vlSelf->__Vfunc_leading_zero32__4095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4107__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4107__part 
                            = vlSelf->__Vfunc_leading_zero32__4107__value;
                        vlSelf->__Vfunc_leading_zero32__4107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4119__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4119__part 
                            = vlSelf->__Vfunc_leading_zero32__4119__value;
                        vlSelf->__Vfunc_leading_zero32__4119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4131__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4131__part 
                            = vlSelf->__Vfunc_leading_zero32__4131__value;
                        vlSelf->__Vfunc_leading_zero32__4131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4143__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4143__part 
                            = vlSelf->__Vfunc_leading_zero32__4143__value;
                        vlSelf->__Vfunc_leading_zero32__4143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4155__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4155__part 
                            = vlSelf->__Vfunc_leading_zero32__4155__value;
                        vlSelf->__Vfunc_leading_zero32__4155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4167__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4167__part 
                            = vlSelf->__Vfunc_leading_zero32__4167__value;
                        vlSelf->__Vfunc_leading_zero32__4167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4179__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4179__part 
                            = vlSelf->__Vfunc_leading_zero32__4179__value;
                        vlSelf->__Vfunc_leading_zero32__4179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4191__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4191__part 
                            = vlSelf->__Vfunc_leading_zero32__4191__value;
                        vlSelf->__Vfunc_leading_zero32__4191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4203__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4203__part 
                            = vlSelf->__Vfunc_leading_zero32__4203__value;
                        vlSelf->__Vfunc_leading_zero32__4203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4215__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4215__part 
                            = vlSelf->__Vfunc_leading_zero32__4215__value;
                        vlSelf->__Vfunc_leading_zero32__4215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4227__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4227__part 
                            = vlSelf->__Vfunc_leading_zero32__4227__value;
                        vlSelf->__Vfunc_leading_zero32__4227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4239__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4239__part 
                            = vlSelf->__Vfunc_leading_zero32__4239__value;
                        vlSelf->__Vfunc_leading_zero32__4239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4251__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4251__part 
                            = vlSelf->__Vfunc_leading_zero32__4251__value;
                        vlSelf->__Vfunc_leading_zero32__4251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4263__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4263__part 
                            = vlSelf->__Vfunc_leading_zero32__4263__value;
                        vlSelf->__Vfunc_leading_zero32__4263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4275__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4275__part 
                            = vlSelf->__Vfunc_leading_zero32__4275__value;
                        vlSelf->__Vfunc_leading_zero32__4275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4287__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4287__part 
                            = vlSelf->__Vfunc_leading_zero32__4287__value;
                        vlSelf->__Vfunc_leading_zero32__4287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4299__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4299__part 
                            = vlSelf->__Vfunc_leading_zero32__4299__value;
                        vlSelf->__Vfunc_leading_zero32__4299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4311__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4311__part 
                            = vlSelf->__Vfunc_leading_zero32__4311__value;
                        vlSelf->__Vfunc_leading_zero32__4311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4323__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4323__part 
                            = vlSelf->__Vfunc_leading_zero32__4323__value;
                        vlSelf->__Vfunc_leading_zero32__4323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4335__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4335__part 
                            = vlSelf->__Vfunc_leading_zero32__4335__value;
                        vlSelf->__Vfunc_leading_zero32__4335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4347__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4347__part 
                            = vlSelf->__Vfunc_leading_zero32__4347__value;
                        vlSelf->__Vfunc_leading_zero32__4347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4359__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4359__part 
                            = vlSelf->__Vfunc_leading_zero32__4359__value;
                        vlSelf->__Vfunc_leading_zero32__4359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4359__count)));
                            vlSelf->__Vfunc_leading_zero32__4359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4359__count)));
                            vlSelf->__Vfunc_leading_zero32__4359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4359__count)));
                            vlSelf->__Vfunc_leading_zero32__4359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4359__count)));
                            vlSelf->__Vfunc_leading_zero32__4359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4371__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4371__part 
                            = vlSelf->__Vfunc_leading_zero32__4371__value;
                        vlSelf->__Vfunc_leading_zero32__4371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4371__count)));
                            vlSelf->__Vfunc_leading_zero32__4371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4371__count)));
                            vlSelf->__Vfunc_leading_zero32__4371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4371__count)));
                            vlSelf->__Vfunc_leading_zero32__4371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4371__count)));
                            vlSelf->__Vfunc_leading_zero32__4371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4383__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4383__part 
                            = vlSelf->__Vfunc_leading_zero32__4383__value;
                        vlSelf->__Vfunc_leading_zero32__4383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4383__count)));
                            vlSelf->__Vfunc_leading_zero32__4383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4383__count)));
                            vlSelf->__Vfunc_leading_zero32__4383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4383__count)));
                            vlSelf->__Vfunc_leading_zero32__4383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4383__count)));
                            vlSelf->__Vfunc_leading_zero32__4383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4395__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4395__part 
                            = vlSelf->__Vfunc_leading_zero32__4395__value;
                        vlSelf->__Vfunc_leading_zero32__4395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4395__count)));
                            vlSelf->__Vfunc_leading_zero32__4395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4395__count)));
                            vlSelf->__Vfunc_leading_zero32__4395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4395__count)));
                            vlSelf->__Vfunc_leading_zero32__4395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4395__count)));
                            vlSelf->__Vfunc_leading_zero32__4395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4407__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4407__part 
                            = vlSelf->__Vfunc_leading_zero32__4407__value;
                        vlSelf->__Vfunc_leading_zero32__4407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4407__count)));
                            vlSelf->__Vfunc_leading_zero32__4407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4407__count)));
                            vlSelf->__Vfunc_leading_zero32__4407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4407__count)));
                            vlSelf->__Vfunc_leading_zero32__4407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4407__count)));
                            vlSelf->__Vfunc_leading_zero32__4407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4419__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4419__part 
                            = vlSelf->__Vfunc_leading_zero32__4419__value;
                        vlSelf->__Vfunc_leading_zero32__4419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4419__count)));
                            vlSelf->__Vfunc_leading_zero32__4419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4419__count)));
                            vlSelf->__Vfunc_leading_zero32__4419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4419__count)));
                            vlSelf->__Vfunc_leading_zero32__4419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4419__count)));
                            vlSelf->__Vfunc_leading_zero32__4419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4431__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4431__part 
                            = vlSelf->__Vfunc_leading_zero32__4431__value;
                        vlSelf->__Vfunc_leading_zero32__4431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4431__count)));
                            vlSelf->__Vfunc_leading_zero32__4431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4431__count)));
                            vlSelf->__Vfunc_leading_zero32__4431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4431__count)));
                            vlSelf->__Vfunc_leading_zero32__4431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4431__count)));
                            vlSelf->__Vfunc_leading_zero32__4431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4443__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4443__part 
                            = vlSelf->__Vfunc_leading_zero32__4443__value;
                        vlSelf->__Vfunc_leading_zero32__4443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4443__count)));
                            vlSelf->__Vfunc_leading_zero32__4443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4443__count)));
                            vlSelf->__Vfunc_leading_zero32__4443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4443__count)));
                            vlSelf->__Vfunc_leading_zero32__4443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4443__count)));
                            vlSelf->__Vfunc_leading_zero32__4443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4455__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4455__part 
                            = vlSelf->__Vfunc_leading_zero32__4455__value;
                        vlSelf->__Vfunc_leading_zero32__4455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4455__count)));
                            vlSelf->__Vfunc_leading_zero32__4455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4455__count)));
                            vlSelf->__Vfunc_leading_zero32__4455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4455__count)));
                            vlSelf->__Vfunc_leading_zero32__4455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4455__count)));
                            vlSelf->__Vfunc_leading_zero32__4455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4467__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4467__part 
                            = vlSelf->__Vfunc_leading_zero32__4467__value;
                        vlSelf->__Vfunc_leading_zero32__4467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4467__count)));
                            vlSelf->__Vfunc_leading_zero32__4467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4467__count)));
                            vlSelf->__Vfunc_leading_zero32__4467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4467__count)));
                            vlSelf->__Vfunc_leading_zero32__4467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4467__count)));
                            vlSelf->__Vfunc_leading_zero32__4467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4479__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4479__part 
                            = vlSelf->__Vfunc_leading_zero32__4479__value;
                        vlSelf->__Vfunc_leading_zero32__4479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4479__count)));
                            vlSelf->__Vfunc_leading_zero32__4479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4479__count)));
                            vlSelf->__Vfunc_leading_zero32__4479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4479__count)));
                            vlSelf->__Vfunc_leading_zero32__4479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4479__count)));
                            vlSelf->__Vfunc_leading_zero32__4479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4491__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4491__part 
                            = vlSelf->__Vfunc_leading_zero32__4491__value;
                        vlSelf->__Vfunc_leading_zero32__4491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4491__count)));
                            vlSelf->__Vfunc_leading_zero32__4491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4491__count)));
                            vlSelf->__Vfunc_leading_zero32__4491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4491__count)));
                            vlSelf->__Vfunc_leading_zero32__4491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4491__count)));
                            vlSelf->__Vfunc_leading_zero32__4491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4503__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4503__part 
                            = vlSelf->__Vfunc_leading_zero32__4503__value;
                        vlSelf->__Vfunc_leading_zero32__4503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4503__count)));
                            vlSelf->__Vfunc_leading_zero32__4503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4503__count)));
                            vlSelf->__Vfunc_leading_zero32__4503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4503__count)));
                            vlSelf->__Vfunc_leading_zero32__4503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4503__count)));
                            vlSelf->__Vfunc_leading_zero32__4503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4515__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4515__part 
                            = vlSelf->__Vfunc_leading_zero32__4515__value;
                        vlSelf->__Vfunc_leading_zero32__4515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4515__count)));
                            vlSelf->__Vfunc_leading_zero32__4515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4515__count)));
                            vlSelf->__Vfunc_leading_zero32__4515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4515__count)));
                            vlSelf->__Vfunc_leading_zero32__4515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4515__count)));
                            vlSelf->__Vfunc_leading_zero32__4515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4527__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4527__part 
                            = vlSelf->__Vfunc_leading_zero32__4527__value;
                        vlSelf->__Vfunc_leading_zero32__4527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4527__count)));
                            vlSelf->__Vfunc_leading_zero32__4527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4527__count)));
                            vlSelf->__Vfunc_leading_zero32__4527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4527__count)));
                            vlSelf->__Vfunc_leading_zero32__4527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4527__count)));
                            vlSelf->__Vfunc_leading_zero32__4527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4539__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4539__part 
                            = vlSelf->__Vfunc_leading_zero32__4539__value;
                        vlSelf->__Vfunc_leading_zero32__4539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4539__count)));
                            vlSelf->__Vfunc_leading_zero32__4539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4539__count)));
                            vlSelf->__Vfunc_leading_zero32__4539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4539__count)));
                            vlSelf->__Vfunc_leading_zero32__4539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4539__count)));
                            vlSelf->__Vfunc_leading_zero32__4539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4551__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4551__part 
                            = vlSelf->__Vfunc_leading_zero32__4551__value;
                        vlSelf->__Vfunc_leading_zero32__4551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4551__count)));
                            vlSelf->__Vfunc_leading_zero32__4551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4551__count)));
                            vlSelf->__Vfunc_leading_zero32__4551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4551__count)));
                            vlSelf->__Vfunc_leading_zero32__4551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4551__count)));
                            vlSelf->__Vfunc_leading_zero32__4551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4563__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4563__part 
                            = vlSelf->__Vfunc_leading_zero32__4563__value;
                        vlSelf->__Vfunc_leading_zero32__4563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4563__count)));
                            vlSelf->__Vfunc_leading_zero32__4563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4563__count)));
                            vlSelf->__Vfunc_leading_zero32__4563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4563__count)));
                            vlSelf->__Vfunc_leading_zero32__4563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4563__count)));
                            vlSelf->__Vfunc_leading_zero32__4563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4575__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4575__part 
                            = vlSelf->__Vfunc_leading_zero32__4575__value;
                        vlSelf->__Vfunc_leading_zero32__4575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4575__count)));
                            vlSelf->__Vfunc_leading_zero32__4575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4575__count)));
                            vlSelf->__Vfunc_leading_zero32__4575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4575__count)));
                            vlSelf->__Vfunc_leading_zero32__4575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4575__count)));
                            vlSelf->__Vfunc_leading_zero32__4575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4587__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4587__part 
                            = vlSelf->__Vfunc_leading_zero32__4587__value;
                        vlSelf->__Vfunc_leading_zero32__4587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4587__count)));
                            vlSelf->__Vfunc_leading_zero32__4587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4587__count)));
                            vlSelf->__Vfunc_leading_zero32__4587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4587__count)));
                            vlSelf->__Vfunc_leading_zero32__4587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4587__count)));
                            vlSelf->__Vfunc_leading_zero32__4587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4599__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4599__part 
                            = vlSelf->__Vfunc_leading_zero32__4599__value;
                        vlSelf->__Vfunc_leading_zero32__4599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4599__count)));
                            vlSelf->__Vfunc_leading_zero32__4599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4599__count)));
                            vlSelf->__Vfunc_leading_zero32__4599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4599__count)));
                            vlSelf->__Vfunc_leading_zero32__4599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4599__count)));
                            vlSelf->__Vfunc_leading_zero32__4599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4611__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4611__part 
                            = vlSelf->__Vfunc_leading_zero32__4611__value;
                        vlSelf->__Vfunc_leading_zero32__4611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4611__count)));
                            vlSelf->__Vfunc_leading_zero32__4611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4611__count)));
                            vlSelf->__Vfunc_leading_zero32__4611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4611__count)));
                            vlSelf->__Vfunc_leading_zero32__4611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4611__count)));
                            vlSelf->__Vfunc_leading_zero32__4611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4623__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4623__part 
                            = vlSelf->__Vfunc_leading_zero32__4623__value;
                        vlSelf->__Vfunc_leading_zero32__4623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4623__count)));
                            vlSelf->__Vfunc_leading_zero32__4623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4623__count)));
                            vlSelf->__Vfunc_leading_zero32__4623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4623__count)));
                            vlSelf->__Vfunc_leading_zero32__4623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4623__count)));
                            vlSelf->__Vfunc_leading_zero32__4623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4635__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4635__part 
                            = vlSelf->__Vfunc_leading_zero32__4635__value;
                        vlSelf->__Vfunc_leading_zero32__4635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4635__count)));
                            vlSelf->__Vfunc_leading_zero32__4635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4635__count)));
                            vlSelf->__Vfunc_leading_zero32__4635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4635__count)));
                            vlSelf->__Vfunc_leading_zero32__4635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4635__count)));
                            vlSelf->__Vfunc_leading_zero32__4635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4647__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4647__part 
                            = vlSelf->__Vfunc_leading_zero32__4647__value;
                        vlSelf->__Vfunc_leading_zero32__4647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4647__count)));
                            vlSelf->__Vfunc_leading_zero32__4647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4647__count)));
                            vlSelf->__Vfunc_leading_zero32__4647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4647__count)));
                            vlSelf->__Vfunc_leading_zero32__4647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4647__count)));
                            vlSelf->__Vfunc_leading_zero32__4647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4659__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4659__part 
                            = vlSelf->__Vfunc_leading_zero32__4659__value;
                        vlSelf->__Vfunc_leading_zero32__4659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4659__count)));
                            vlSelf->__Vfunc_leading_zero32__4659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4659__count)));
                            vlSelf->__Vfunc_leading_zero32__4659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4659__count)));
                            vlSelf->__Vfunc_leading_zero32__4659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4659__count)));
                            vlSelf->__Vfunc_leading_zero32__4659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4671__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4671__part 
                            = vlSelf->__Vfunc_leading_zero32__4671__value;
                        vlSelf->__Vfunc_leading_zero32__4671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4671__count)));
                            vlSelf->__Vfunc_leading_zero32__4671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4671__count)));
                            vlSelf->__Vfunc_leading_zero32__4671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4671__count)));
                            vlSelf->__Vfunc_leading_zero32__4671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4671__count)));
                            vlSelf->__Vfunc_leading_zero32__4671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4683__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4683__part 
                            = vlSelf->__Vfunc_leading_zero32__4683__value;
                        vlSelf->__Vfunc_leading_zero32__4683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4683__count)));
                            vlSelf->__Vfunc_leading_zero32__4683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4683__count)));
                            vlSelf->__Vfunc_leading_zero32__4683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4683__count)));
                            vlSelf->__Vfunc_leading_zero32__4683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4683__count)));
                            vlSelf->__Vfunc_leading_zero32__4683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4695__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4695__part 
                            = vlSelf->__Vfunc_leading_zero32__4695__value;
                        vlSelf->__Vfunc_leading_zero32__4695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4695__count)));
                            vlSelf->__Vfunc_leading_zero32__4695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4695__count)));
                            vlSelf->__Vfunc_leading_zero32__4695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4695__count)));
                            vlSelf->__Vfunc_leading_zero32__4695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4695__count)));
                            vlSelf->__Vfunc_leading_zero32__4695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4707__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4707__part 
                            = vlSelf->__Vfunc_leading_zero32__4707__value;
                        vlSelf->__Vfunc_leading_zero32__4707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4707__count)));
                            vlSelf->__Vfunc_leading_zero32__4707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4707__count)));
                            vlSelf->__Vfunc_leading_zero32__4707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4707__count)));
                            vlSelf->__Vfunc_leading_zero32__4707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4707__count)));
                            vlSelf->__Vfunc_leading_zero32__4707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4719__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4719__part 
                            = vlSelf->__Vfunc_leading_zero32__4719__value;
                        vlSelf->__Vfunc_leading_zero32__4719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4719__count)));
                            vlSelf->__Vfunc_leading_zero32__4719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4719__count)));
                            vlSelf->__Vfunc_leading_zero32__4719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4719__count)));
                            vlSelf->__Vfunc_leading_zero32__4719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4719__count)));
                            vlSelf->__Vfunc_leading_zero32__4719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4719__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4731__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4731__part 
                            = vlSelf->__Vfunc_leading_zero32__4731__value;
                        vlSelf->__Vfunc_leading_zero32__4731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4731__count)));
                            vlSelf->__Vfunc_leading_zero32__4731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4731__count)));
                            vlSelf->__Vfunc_leading_zero32__4731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4731__count)));
                            vlSelf->__Vfunc_leading_zero32__4731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4731__count)));
                            vlSelf->__Vfunc_leading_zero32__4731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4743__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4743__part 
                            = vlSelf->__Vfunc_leading_zero32__4743__value;
                        vlSelf->__Vfunc_leading_zero32__4743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4743__count)));
                            vlSelf->__Vfunc_leading_zero32__4743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4743__count)));
                            vlSelf->__Vfunc_leading_zero32__4743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4743__count)));
                            vlSelf->__Vfunc_leading_zero32__4743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4743__count)));
                            vlSelf->__Vfunc_leading_zero32__4743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4755__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4755__part 
                            = vlSelf->__Vfunc_leading_zero32__4755__value;
                        vlSelf->__Vfunc_leading_zero32__4755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4755__count)));
                            vlSelf->__Vfunc_leading_zero32__4755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4755__count)));
                            vlSelf->__Vfunc_leading_zero32__4755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4755__count)));
                            vlSelf->__Vfunc_leading_zero32__4755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4755__count)));
                            vlSelf->__Vfunc_leading_zero32__4755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4767__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4767__part 
                            = vlSelf->__Vfunc_leading_zero32__4767__value;
                        vlSelf->__Vfunc_leading_zero32__4767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4767__count)));
                            vlSelf->__Vfunc_leading_zero32__4767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4767__count)));
                            vlSelf->__Vfunc_leading_zero32__4767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4767__count)));
                            vlSelf->__Vfunc_leading_zero32__4767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4767__count)));
                            vlSelf->__Vfunc_leading_zero32__4767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4779__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4779__part 
                            = vlSelf->__Vfunc_leading_zero32__4779__value;
                        vlSelf->__Vfunc_leading_zero32__4779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4779__count)));
                            vlSelf->__Vfunc_leading_zero32__4779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4779__count)));
                            vlSelf->__Vfunc_leading_zero32__4779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4779__count)));
                            vlSelf->__Vfunc_leading_zero32__4779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4779__count)));
                            vlSelf->__Vfunc_leading_zero32__4779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4791__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4791__part 
                            = vlSelf->__Vfunc_leading_zero32__4791__value;
                        vlSelf->__Vfunc_leading_zero32__4791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4791__count)));
                            vlSelf->__Vfunc_leading_zero32__4791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4791__count)));
                            vlSelf->__Vfunc_leading_zero32__4791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4791__count)));
                            vlSelf->__Vfunc_leading_zero32__4791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4791__count)));
                            vlSelf->__Vfunc_leading_zero32__4791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1732__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1732__part 
                            = vlSelf->__Vfunc_leading_zero32__1732__value;
                        vlSelf->__Vfunc_leading_zero32__1732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1732__count)));
                            vlSelf->__Vfunc_leading_zero32__1732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1732__count)));
                            vlSelf->__Vfunc_leading_zero32__1732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1732__count)));
                            vlSelf->__Vfunc_leading_zero32__1732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1732__count)));
                            vlSelf->__Vfunc_leading_zero32__1732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1744__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1744__part 
                            = vlSelf->__Vfunc_leading_zero32__1744__value;
                        vlSelf->__Vfunc_leading_zero32__1744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1744__count)));
                            vlSelf->__Vfunc_leading_zero32__1744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1744__count)));
                            vlSelf->__Vfunc_leading_zero32__1744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1744__count)));
                            vlSelf->__Vfunc_leading_zero32__1744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1744__count)));
                            vlSelf->__Vfunc_leading_zero32__1744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1756__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1756__part 
                            = vlSelf->__Vfunc_leading_zero32__1756__value;
                        vlSelf->__Vfunc_leading_zero32__1756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1756__count)));
                            vlSelf->__Vfunc_leading_zero32__1756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1756__count)));
                            vlSelf->__Vfunc_leading_zero32__1756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1756__count)));
                            vlSelf->__Vfunc_leading_zero32__1756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1756__count)));
                            vlSelf->__Vfunc_leading_zero32__1756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1768__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1768__part 
                            = vlSelf->__Vfunc_leading_zero32__1768__value;
                        vlSelf->__Vfunc_leading_zero32__1768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1768__count)));
                            vlSelf->__Vfunc_leading_zero32__1768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1768__count)));
                            vlSelf->__Vfunc_leading_zero32__1768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1768__count)));
                            vlSelf->__Vfunc_leading_zero32__1768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1768__count)));
                            vlSelf->__Vfunc_leading_zero32__1768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1780__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1780__part 
                            = vlSelf->__Vfunc_leading_zero32__1780__value;
                        vlSelf->__Vfunc_leading_zero32__1780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1780__count)));
                            vlSelf->__Vfunc_leading_zero32__1780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1780__count)));
                            vlSelf->__Vfunc_leading_zero32__1780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1780__count)));
                            vlSelf->__Vfunc_leading_zero32__1780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1780__count)));
                            vlSelf->__Vfunc_leading_zero32__1780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1792__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1792__part 
                            = vlSelf->__Vfunc_leading_zero32__1792__value;
                        vlSelf->__Vfunc_leading_zero32__1792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1792__count)));
                            vlSelf->__Vfunc_leading_zero32__1792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1792__count)));
                            vlSelf->__Vfunc_leading_zero32__1792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1792__count)));
                            vlSelf->__Vfunc_leading_zero32__1792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1792__count)));
                            vlSelf->__Vfunc_leading_zero32__1792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1804__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1804__part 
                            = vlSelf->__Vfunc_leading_zero32__1804__value;
                        vlSelf->__Vfunc_leading_zero32__1804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1804__count)));
                            vlSelf->__Vfunc_leading_zero32__1804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1804__count)));
                            vlSelf->__Vfunc_leading_zero32__1804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1804__count)));
                            vlSelf->__Vfunc_leading_zero32__1804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1804__count)));
                            vlSelf->__Vfunc_leading_zero32__1804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1816__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1816__part 
                            = vlSelf->__Vfunc_leading_zero32__1816__value;
                        vlSelf->__Vfunc_leading_zero32__1816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1816__count)));
                            vlSelf->__Vfunc_leading_zero32__1816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1816__count)));
                            vlSelf->__Vfunc_leading_zero32__1816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1816__count)));
                            vlSelf->__Vfunc_leading_zero32__1816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1816__count)));
                            vlSelf->__Vfunc_leading_zero32__1816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1816__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1828__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1828__part 
                            = vlSelf->__Vfunc_leading_zero32__1828__value;
                        vlSelf->__Vfunc_leading_zero32__1828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1828__count)));
                            vlSelf->__Vfunc_leading_zero32__1828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1828__count)));
                            vlSelf->__Vfunc_leading_zero32__1828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1828__count)));
                            vlSelf->__Vfunc_leading_zero32__1828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1828__count)));
                            vlSelf->__Vfunc_leading_zero32__1828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1840__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1840__part 
                            = vlSelf->__Vfunc_leading_zero32__1840__value;
                        vlSelf->__Vfunc_leading_zero32__1840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1840__count)));
                            vlSelf->__Vfunc_leading_zero32__1840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1840__count)));
                            vlSelf->__Vfunc_leading_zero32__1840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1840__count)));
                            vlSelf->__Vfunc_leading_zero32__1840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1840__count)));
                            vlSelf->__Vfunc_leading_zero32__1840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1852__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1852__part 
                            = vlSelf->__Vfunc_leading_zero32__1852__value;
                        vlSelf->__Vfunc_leading_zero32__1852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1852__count)));
                            vlSelf->__Vfunc_leading_zero32__1852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1852__count)));
                            vlSelf->__Vfunc_leading_zero32__1852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1852__count)));
                            vlSelf->__Vfunc_leading_zero32__1852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1852__count)));
                            vlSelf->__Vfunc_leading_zero32__1852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1852__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1864__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1864__part 
                            = vlSelf->__Vfunc_leading_zero32__1864__value;
                        vlSelf->__Vfunc_leading_zero32__1864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1864__count)));
                            vlSelf->__Vfunc_leading_zero32__1864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1864__count)));
                            vlSelf->__Vfunc_leading_zero32__1864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1864__count)));
                            vlSelf->__Vfunc_leading_zero32__1864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1864__count)));
                            vlSelf->__Vfunc_leading_zero32__1864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1876__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1876__part 
                            = vlSelf->__Vfunc_leading_zero32__1876__value;
                        vlSelf->__Vfunc_leading_zero32__1876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1876__count)));
                            vlSelf->__Vfunc_leading_zero32__1876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1876__count)));
                            vlSelf->__Vfunc_leading_zero32__1876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1876__count)));
                            vlSelf->__Vfunc_leading_zero32__1876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1876__count)));
                            vlSelf->__Vfunc_leading_zero32__1876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1888__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1888__part 
                            = vlSelf->__Vfunc_leading_zero32__1888__value;
                        vlSelf->__Vfunc_leading_zero32__1888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1888__count)));
                            vlSelf->__Vfunc_leading_zero32__1888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1888__count)));
                            vlSelf->__Vfunc_leading_zero32__1888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1888__count)));
                            vlSelf->__Vfunc_leading_zero32__1888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1888__count)));
                            vlSelf->__Vfunc_leading_zero32__1888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1888__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1900__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1900__part 
                            = vlSelf->__Vfunc_leading_zero32__1900__value;
                        vlSelf->__Vfunc_leading_zero32__1900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1900__count)));
                            vlSelf->__Vfunc_leading_zero32__1900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1900__count)));
                            vlSelf->__Vfunc_leading_zero32__1900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1900__count)));
                            vlSelf->__Vfunc_leading_zero32__1900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1900__count)));
                            vlSelf->__Vfunc_leading_zero32__1900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1912__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1912__part 
                            = vlSelf->__Vfunc_leading_zero32__1912__value;
                        vlSelf->__Vfunc_leading_zero32__1912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1912__count)));
                            vlSelf->__Vfunc_leading_zero32__1912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1912__count)));
                            vlSelf->__Vfunc_leading_zero32__1912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1912__count)));
                            vlSelf->__Vfunc_leading_zero32__1912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1912__count)));
                            vlSelf->__Vfunc_leading_zero32__1912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1924__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1924__part 
                            = vlSelf->__Vfunc_leading_zero32__1924__value;
                        vlSelf->__Vfunc_leading_zero32__1924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1924__count)));
                            vlSelf->__Vfunc_leading_zero32__1924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1924__count)));
                            vlSelf->__Vfunc_leading_zero32__1924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1924__count)));
                            vlSelf->__Vfunc_leading_zero32__1924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1924__count)));
                            vlSelf->__Vfunc_leading_zero32__1924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1936__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1936__part 
                            = vlSelf->__Vfunc_leading_zero32__1936__value;
                        vlSelf->__Vfunc_leading_zero32__1936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1936__count)));
                            vlSelf->__Vfunc_leading_zero32__1936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1936__count)));
                            vlSelf->__Vfunc_leading_zero32__1936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1936__count)));
                            vlSelf->__Vfunc_leading_zero32__1936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1936__count)));
                            vlSelf->__Vfunc_leading_zero32__1936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1948__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1948__part 
                            = vlSelf->__Vfunc_leading_zero32__1948__value;
                        vlSelf->__Vfunc_leading_zero32__1948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1948__count)));
                            vlSelf->__Vfunc_leading_zero32__1948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1948__count)));
                            vlSelf->__Vfunc_leading_zero32__1948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1948__count)));
                            vlSelf->__Vfunc_leading_zero32__1948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1948__count)));
                            vlSelf->__Vfunc_leading_zero32__1948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1960__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1960__part 
                            = vlSelf->__Vfunc_leading_zero32__1960__value;
                        vlSelf->__Vfunc_leading_zero32__1960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1960__count)));
                            vlSelf->__Vfunc_leading_zero32__1960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1960__count)));
                            vlSelf->__Vfunc_leading_zero32__1960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1960__count)));
                            vlSelf->__Vfunc_leading_zero32__1960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1960__count)));
                            vlSelf->__Vfunc_leading_zero32__1960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1972__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1972__part 
                            = vlSelf->__Vfunc_leading_zero32__1972__value;
                        vlSelf->__Vfunc_leading_zero32__1972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1972__count)));
                            vlSelf->__Vfunc_leading_zero32__1972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1972__count)));
                            vlSelf->__Vfunc_leading_zero32__1972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1972__count)));
                            vlSelf->__Vfunc_leading_zero32__1972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1972__count)));
                            vlSelf->__Vfunc_leading_zero32__1972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1984__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1984__part 
                            = vlSelf->__Vfunc_leading_zero32__1984__value;
                        vlSelf->__Vfunc_leading_zero32__1984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1984__count)));
                            vlSelf->__Vfunc_leading_zero32__1984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1984__count)));
                            vlSelf->__Vfunc_leading_zero32__1984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1984__count)));
                            vlSelf->__Vfunc_leading_zero32__1984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1984__count)));
                            vlSelf->__Vfunc_leading_zero32__1984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1996__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1996__part 
                            = vlSelf->__Vfunc_leading_zero32__1996__value;
                        vlSelf->__Vfunc_leading_zero32__1996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1996__count)));
                            vlSelf->__Vfunc_leading_zero32__1996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1996__count)));
                            vlSelf->__Vfunc_leading_zero32__1996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1996__count)));
                            vlSelf->__Vfunc_leading_zero32__1996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1996__count)));
                            vlSelf->__Vfunc_leading_zero32__1996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2008__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2008__part 
                            = vlSelf->__Vfunc_leading_zero32__2008__value;
                        vlSelf->__Vfunc_leading_zero32__2008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2008__count)));
                            vlSelf->__Vfunc_leading_zero32__2008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2008__count)));
                            vlSelf->__Vfunc_leading_zero32__2008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2008__count)));
                            vlSelf->__Vfunc_leading_zero32__2008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2008__count)));
                            vlSelf->__Vfunc_leading_zero32__2008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2020__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2020__part 
                            = vlSelf->__Vfunc_leading_zero32__2020__value;
                        vlSelf->__Vfunc_leading_zero32__2020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2020__count)));
                            vlSelf->__Vfunc_leading_zero32__2020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2020__count)));
                            vlSelf->__Vfunc_leading_zero32__2020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2020__count)));
                            vlSelf->__Vfunc_leading_zero32__2020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2020__count)));
                            vlSelf->__Vfunc_leading_zero32__2020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2032__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2032__part 
                            = vlSelf->__Vfunc_leading_zero32__2032__value;
                        vlSelf->__Vfunc_leading_zero32__2032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2032__count)));
                            vlSelf->__Vfunc_leading_zero32__2032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2032__count)));
                            vlSelf->__Vfunc_leading_zero32__2032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2032__count)));
                            vlSelf->__Vfunc_leading_zero32__2032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2032__count)));
                            vlSelf->__Vfunc_leading_zero32__2032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2032__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2044__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2044__part 
                            = vlSelf->__Vfunc_leading_zero32__2044__value;
                        vlSelf->__Vfunc_leading_zero32__2044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2044__count)));
                            vlSelf->__Vfunc_leading_zero32__2044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2044__count)));
                            vlSelf->__Vfunc_leading_zero32__2044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2044__count)));
                            vlSelf->__Vfunc_leading_zero32__2044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2044__count)));
                            vlSelf->__Vfunc_leading_zero32__2044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2056__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2056__part 
                            = vlSelf->__Vfunc_leading_zero32__2056__value;
                        vlSelf->__Vfunc_leading_zero32__2056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2056__count)));
                            vlSelf->__Vfunc_leading_zero32__2056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2056__count)));
                            vlSelf->__Vfunc_leading_zero32__2056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2056__count)));
                            vlSelf->__Vfunc_leading_zero32__2056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2056__count)));
                            vlSelf->__Vfunc_leading_zero32__2056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2068__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2068__part 
                            = vlSelf->__Vfunc_leading_zero32__2068__value;
                        vlSelf->__Vfunc_leading_zero32__2068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2068__count)));
                            vlSelf->__Vfunc_leading_zero32__2068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2068__count)));
                            vlSelf->__Vfunc_leading_zero32__2068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2068__count)));
                            vlSelf->__Vfunc_leading_zero32__2068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2068__count)));
                            vlSelf->__Vfunc_leading_zero32__2068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2068__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2080__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2080__part 
                            = vlSelf->__Vfunc_leading_zero32__2080__value;
                        vlSelf->__Vfunc_leading_zero32__2080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2080__count)));
                            vlSelf->__Vfunc_leading_zero32__2080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2080__count)));
                            vlSelf->__Vfunc_leading_zero32__2080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2080__count)));
                            vlSelf->__Vfunc_leading_zero32__2080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2080__count)));
                            vlSelf->__Vfunc_leading_zero32__2080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2092__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2092__part 
                            = vlSelf->__Vfunc_leading_zero32__2092__value;
                        vlSelf->__Vfunc_leading_zero32__2092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2092__count)));
                            vlSelf->__Vfunc_leading_zero32__2092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2092__count)));
                            vlSelf->__Vfunc_leading_zero32__2092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2092__count)));
                            vlSelf->__Vfunc_leading_zero32__2092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2092__count)));
                            vlSelf->__Vfunc_leading_zero32__2092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2104__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2104__part 
                            = vlSelf->__Vfunc_leading_zero32__2104__value;
                        vlSelf->__Vfunc_leading_zero32__2104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2104__count)));
                            vlSelf->__Vfunc_leading_zero32__2104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2104__count)));
                            vlSelf->__Vfunc_leading_zero32__2104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2104__count)));
                            vlSelf->__Vfunc_leading_zero32__2104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2104__count)));
                            vlSelf->__Vfunc_leading_zero32__2104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2104__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2116__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2116__part 
                            = vlSelf->__Vfunc_leading_zero32__2116__value;
                        vlSelf->__Vfunc_leading_zero32__2116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2116__count)));
                            vlSelf->__Vfunc_leading_zero32__2116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2116__count)));
                            vlSelf->__Vfunc_leading_zero32__2116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2116__count)));
                            vlSelf->__Vfunc_leading_zero32__2116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2116__count)));
                            vlSelf->__Vfunc_leading_zero32__2116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2128__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2128__part 
                            = vlSelf->__Vfunc_leading_zero32__2128__value;
                        vlSelf->__Vfunc_leading_zero32__2128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2128__count)));
                            vlSelf->__Vfunc_leading_zero32__2128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2128__count)));
                            vlSelf->__Vfunc_leading_zero32__2128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2128__count)));
                            vlSelf->__Vfunc_leading_zero32__2128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2128__count)));
                            vlSelf->__Vfunc_leading_zero32__2128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2140__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2140__part 
                            = vlSelf->__Vfunc_leading_zero32__2140__value;
                        vlSelf->__Vfunc_leading_zero32__2140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2140__count)));
                            vlSelf->__Vfunc_leading_zero32__2140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2140__count)));
                            vlSelf->__Vfunc_leading_zero32__2140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2140__count)));
                            vlSelf->__Vfunc_leading_zero32__2140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2140__count)));
                            vlSelf->__Vfunc_leading_zero32__2140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2140__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2152__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2152__part 
                            = vlSelf->__Vfunc_leading_zero32__2152__value;
                        vlSelf->__Vfunc_leading_zero32__2152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2152__count)));
                            vlSelf->__Vfunc_leading_zero32__2152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2152__count)));
                            vlSelf->__Vfunc_leading_zero32__2152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2152__count)));
                            vlSelf->__Vfunc_leading_zero32__2152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2152__count)));
                            vlSelf->__Vfunc_leading_zero32__2152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2164__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2164__part 
                            = vlSelf->__Vfunc_leading_zero32__2164__value;
                        vlSelf->__Vfunc_leading_zero32__2164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2164__count)));
                            vlSelf->__Vfunc_leading_zero32__2164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2164__count)));
                            vlSelf->__Vfunc_leading_zero32__2164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2164__count)));
                            vlSelf->__Vfunc_leading_zero32__2164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2164__count)));
                            vlSelf->__Vfunc_leading_zero32__2164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2176__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2176__part 
                            = vlSelf->__Vfunc_leading_zero32__2176__value;
                        vlSelf->__Vfunc_leading_zero32__2176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2176__count)));
                            vlSelf->__Vfunc_leading_zero32__2176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2176__count)));
                            vlSelf->__Vfunc_leading_zero32__2176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2176__count)));
                            vlSelf->__Vfunc_leading_zero32__2176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2176__count)));
                            vlSelf->__Vfunc_leading_zero32__2176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2188__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2188__part 
                            = vlSelf->__Vfunc_leading_zero32__2188__value;
                        vlSelf->__Vfunc_leading_zero32__2188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2188__count)));
                            vlSelf->__Vfunc_leading_zero32__2188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2188__count)));
                            vlSelf->__Vfunc_leading_zero32__2188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2188__count)));
                            vlSelf->__Vfunc_leading_zero32__2188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2188__count)));
                            vlSelf->__Vfunc_leading_zero32__2188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2200__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2200__part 
                            = vlSelf->__Vfunc_leading_zero32__2200__value;
                        vlSelf->__Vfunc_leading_zero32__2200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2200__count)));
                            vlSelf->__Vfunc_leading_zero32__2200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2200__count)));
                            vlSelf->__Vfunc_leading_zero32__2200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2200__count)));
                            vlSelf->__Vfunc_leading_zero32__2200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2200__count)));
                            vlSelf->__Vfunc_leading_zero32__2200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2212__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2212__part 
                            = vlSelf->__Vfunc_leading_zero32__2212__value;
                        vlSelf->__Vfunc_leading_zero32__2212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2212__count)));
                            vlSelf->__Vfunc_leading_zero32__2212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2212__count)));
                            vlSelf->__Vfunc_leading_zero32__2212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2212__count)));
                            vlSelf->__Vfunc_leading_zero32__2212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2212__count)));
                            vlSelf->__Vfunc_leading_zero32__2212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2224__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2224__part 
                            = vlSelf->__Vfunc_leading_zero32__2224__value;
                        vlSelf->__Vfunc_leading_zero32__2224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2224__count)));
                            vlSelf->__Vfunc_leading_zero32__2224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2224__count)));
                            vlSelf->__Vfunc_leading_zero32__2224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2224__count)));
                            vlSelf->__Vfunc_leading_zero32__2224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2224__count)));
                            vlSelf->__Vfunc_leading_zero32__2224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2236__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2236__part 
                            = vlSelf->__Vfunc_leading_zero32__2236__value;
                        vlSelf->__Vfunc_leading_zero32__2236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2236__count)));
                            vlSelf->__Vfunc_leading_zero32__2236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2236__count)));
                            vlSelf->__Vfunc_leading_zero32__2236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2236__count)));
                            vlSelf->__Vfunc_leading_zero32__2236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2236__count)));
                            vlSelf->__Vfunc_leading_zero32__2236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2248__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2248__part 
                            = vlSelf->__Vfunc_leading_zero32__2248__value;
                        vlSelf->__Vfunc_leading_zero32__2248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2248__count)));
                            vlSelf->__Vfunc_leading_zero32__2248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2248__count)));
                            vlSelf->__Vfunc_leading_zero32__2248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2248__count)));
                            vlSelf->__Vfunc_leading_zero32__2248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2248__count)));
                            vlSelf->__Vfunc_leading_zero32__2248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2260__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2260__part 
                            = vlSelf->__Vfunc_leading_zero32__2260__value;
                        vlSelf->__Vfunc_leading_zero32__2260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2260__count)));
                            vlSelf->__Vfunc_leading_zero32__2260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2260__count)));
                            vlSelf->__Vfunc_leading_zero32__2260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2260__count)));
                            vlSelf->__Vfunc_leading_zero32__2260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2260__count)));
                            vlSelf->__Vfunc_leading_zero32__2260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2272__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2272__part 
                            = vlSelf->__Vfunc_leading_zero32__2272__value;
                        vlSelf->__Vfunc_leading_zero32__2272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2272__count)));
                            vlSelf->__Vfunc_leading_zero32__2272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2272__count)));
                            vlSelf->__Vfunc_leading_zero32__2272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2272__count)));
                            vlSelf->__Vfunc_leading_zero32__2272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2272__count)));
                            vlSelf->__Vfunc_leading_zero32__2272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2284__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2284__part 
                            = vlSelf->__Vfunc_leading_zero32__2284__value;
                        vlSelf->__Vfunc_leading_zero32__2284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2284__count)));
                            vlSelf->__Vfunc_leading_zero32__2284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2284__count)));
                            vlSelf->__Vfunc_leading_zero32__2284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2284__count)));
                            vlSelf->__Vfunc_leading_zero32__2284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2284__count)));
                            vlSelf->__Vfunc_leading_zero32__2284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2296__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2296__part 
                            = vlSelf->__Vfunc_leading_zero32__2296__value;
                        vlSelf->__Vfunc_leading_zero32__2296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2296__count)));
                            vlSelf->__Vfunc_leading_zero32__2296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2296__count)));
                            vlSelf->__Vfunc_leading_zero32__2296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2296__count)));
                            vlSelf->__Vfunc_leading_zero32__2296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2296__count)));
                            vlSelf->__Vfunc_leading_zero32__2296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2308__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2308__part 
                            = vlSelf->__Vfunc_leading_zero32__2308__value;
                        vlSelf->__Vfunc_leading_zero32__2308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2308__count)));
                            vlSelf->__Vfunc_leading_zero32__2308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2308__count)));
                            vlSelf->__Vfunc_leading_zero32__2308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2308__count)));
                            vlSelf->__Vfunc_leading_zero32__2308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2308__count)));
                            vlSelf->__Vfunc_leading_zero32__2308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2320__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2320__part 
                            = vlSelf->__Vfunc_leading_zero32__2320__value;
                        vlSelf->__Vfunc_leading_zero32__2320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2320__count)));
                            vlSelf->__Vfunc_leading_zero32__2320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2320__count)));
                            vlSelf->__Vfunc_leading_zero32__2320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2320__count)));
                            vlSelf->__Vfunc_leading_zero32__2320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2320__count)));
                            vlSelf->__Vfunc_leading_zero32__2320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2332__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2332__part 
                            = vlSelf->__Vfunc_leading_zero32__2332__value;
                        vlSelf->__Vfunc_leading_zero32__2332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2332__count)));
                            vlSelf->__Vfunc_leading_zero32__2332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2332__count)));
                            vlSelf->__Vfunc_leading_zero32__2332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2332__count)));
                            vlSelf->__Vfunc_leading_zero32__2332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2332__count)));
                            vlSelf->__Vfunc_leading_zero32__2332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2344__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2344__part 
                            = vlSelf->__Vfunc_leading_zero32__2344__value;
                        vlSelf->__Vfunc_leading_zero32__2344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2344__count)));
                            vlSelf->__Vfunc_leading_zero32__2344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2344__count)));
                            vlSelf->__Vfunc_leading_zero32__2344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2344__count)));
                            vlSelf->__Vfunc_leading_zero32__2344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2344__count)));
                            vlSelf->__Vfunc_leading_zero32__2344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2356__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2356__part 
                            = vlSelf->__Vfunc_leading_zero32__2356__value;
                        vlSelf->__Vfunc_leading_zero32__2356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2356__count)));
                            vlSelf->__Vfunc_leading_zero32__2356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2356__count)));
                            vlSelf->__Vfunc_leading_zero32__2356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2356__count)));
                            vlSelf->__Vfunc_leading_zero32__2356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2356__count)));
                            vlSelf->__Vfunc_leading_zero32__2356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2368__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2368__part 
                            = vlSelf->__Vfunc_leading_zero32__2368__value;
                        vlSelf->__Vfunc_leading_zero32__2368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2368__count)));
                            vlSelf->__Vfunc_leading_zero32__2368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2368__count)));
                            vlSelf->__Vfunc_leading_zero32__2368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2368__count)));
                            vlSelf->__Vfunc_leading_zero32__2368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2368__count)));
                            vlSelf->__Vfunc_leading_zero32__2368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2380__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2380__part 
                            = vlSelf->__Vfunc_leading_zero32__2380__value;
                        vlSelf->__Vfunc_leading_zero32__2380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2380__count)));
                            vlSelf->__Vfunc_leading_zero32__2380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2380__count)));
                            vlSelf->__Vfunc_leading_zero32__2380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2380__count)));
                            vlSelf->__Vfunc_leading_zero32__2380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2380__count)));
                            vlSelf->__Vfunc_leading_zero32__2380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2392__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2392__part 
                            = vlSelf->__Vfunc_leading_zero32__2392__value;
                        vlSelf->__Vfunc_leading_zero32__2392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2392__count)));
                            vlSelf->__Vfunc_leading_zero32__2392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2392__count)));
                            vlSelf->__Vfunc_leading_zero32__2392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2392__count)));
                            vlSelf->__Vfunc_leading_zero32__2392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2392__count)));
                            vlSelf->__Vfunc_leading_zero32__2392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2404__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2404__part 
                            = vlSelf->__Vfunc_leading_zero32__2404__value;
                        vlSelf->__Vfunc_leading_zero32__2404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2404__count)));
                            vlSelf->__Vfunc_leading_zero32__2404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2404__count)));
                            vlSelf->__Vfunc_leading_zero32__2404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2404__count)));
                            vlSelf->__Vfunc_leading_zero32__2404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2404__count)));
                            vlSelf->__Vfunc_leading_zero32__2404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2416__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2416__part 
                            = vlSelf->__Vfunc_leading_zero32__2416__value;
                        vlSelf->__Vfunc_leading_zero32__2416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2416__count)));
                            vlSelf->__Vfunc_leading_zero32__2416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2416__count)));
                            vlSelf->__Vfunc_leading_zero32__2416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2416__count)));
                            vlSelf->__Vfunc_leading_zero32__2416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2416__count)));
                            vlSelf->__Vfunc_leading_zero32__2416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2428__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2428__part 
                            = vlSelf->__Vfunc_leading_zero32__2428__value;
                        vlSelf->__Vfunc_leading_zero32__2428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2428__count)));
                            vlSelf->__Vfunc_leading_zero32__2428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2428__count)));
                            vlSelf->__Vfunc_leading_zero32__2428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2428__count)));
                            vlSelf->__Vfunc_leading_zero32__2428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2428__count)));
                            vlSelf->__Vfunc_leading_zero32__2428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2440__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2440__part 
                            = vlSelf->__Vfunc_leading_zero32__2440__value;
                        vlSelf->__Vfunc_leading_zero32__2440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2440__count)));
                            vlSelf->__Vfunc_leading_zero32__2440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2440__count)));
                            vlSelf->__Vfunc_leading_zero32__2440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2440__count)));
                            vlSelf->__Vfunc_leading_zero32__2440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2440__count)));
                            vlSelf->__Vfunc_leading_zero32__2440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2452__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2452__part 
                            = vlSelf->__Vfunc_leading_zero32__2452__value;
                        vlSelf->__Vfunc_leading_zero32__2452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2452__count)));
                            vlSelf->__Vfunc_leading_zero32__2452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2452__count)));
                            vlSelf->__Vfunc_leading_zero32__2452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2452__count)));
                            vlSelf->__Vfunc_leading_zero32__2452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2452__count)));
                            vlSelf->__Vfunc_leading_zero32__2452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2464__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2464__part 
                            = vlSelf->__Vfunc_leading_zero32__2464__value;
                        vlSelf->__Vfunc_leading_zero32__2464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2464__count)));
                            vlSelf->__Vfunc_leading_zero32__2464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2464__count)));
                            vlSelf->__Vfunc_leading_zero32__2464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2464__count)));
                            vlSelf->__Vfunc_leading_zero32__2464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2464__count)));
                            vlSelf->__Vfunc_leading_zero32__2464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2476__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2476__part 
                            = vlSelf->__Vfunc_leading_zero32__2476__value;
                        vlSelf->__Vfunc_leading_zero32__2476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2476__count)));
                            vlSelf->__Vfunc_leading_zero32__2476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2476__count)));
                            vlSelf->__Vfunc_leading_zero32__2476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2476__count)));
                            vlSelf->__Vfunc_leading_zero32__2476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2476__count)));
                            vlSelf->__Vfunc_leading_zero32__2476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2488__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2488__part 
                            = vlSelf->__Vfunc_leading_zero32__2488__value;
                        vlSelf->__Vfunc_leading_zero32__2488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2488__count)));
                            vlSelf->__Vfunc_leading_zero32__2488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2488__count)));
                            vlSelf->__Vfunc_leading_zero32__2488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2488__count)));
                            vlSelf->__Vfunc_leading_zero32__2488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2488__count)));
                            vlSelf->__Vfunc_leading_zero32__2488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2500__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2500__part 
                            = vlSelf->__Vfunc_leading_zero32__2500__value;
                        vlSelf->__Vfunc_leading_zero32__2500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2500__count)));
                            vlSelf->__Vfunc_leading_zero32__2500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2500__count)));
                            vlSelf->__Vfunc_leading_zero32__2500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2500__count)));
                            vlSelf->__Vfunc_leading_zero32__2500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2500__count)));
                            vlSelf->__Vfunc_leading_zero32__2500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2512__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2512__part 
                            = vlSelf->__Vfunc_leading_zero32__2512__value;
                        vlSelf->__Vfunc_leading_zero32__2512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2512__count)));
                            vlSelf->__Vfunc_leading_zero32__2512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2512__count)));
                            vlSelf->__Vfunc_leading_zero32__2512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2512__count)));
                            vlSelf->__Vfunc_leading_zero32__2512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2512__count)));
                            vlSelf->__Vfunc_leading_zero32__2512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2524__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2524__part 
                            = vlSelf->__Vfunc_leading_zero32__2524__value;
                        vlSelf->__Vfunc_leading_zero32__2524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2524__count)));
                            vlSelf->__Vfunc_leading_zero32__2524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2524__count)));
                            vlSelf->__Vfunc_leading_zero32__2524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2524__count)));
                            vlSelf->__Vfunc_leading_zero32__2524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2524__count)));
                            vlSelf->__Vfunc_leading_zero32__2524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2536__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2536__part 
                            = vlSelf->__Vfunc_leading_zero32__2536__value;
                        vlSelf->__Vfunc_leading_zero32__2536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2536__count)));
                            vlSelf->__Vfunc_leading_zero32__2536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2536__count)));
                            vlSelf->__Vfunc_leading_zero32__2536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2536__count)));
                            vlSelf->__Vfunc_leading_zero32__2536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2536__count)));
                            vlSelf->__Vfunc_leading_zero32__2536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2548__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2548__part 
                            = vlSelf->__Vfunc_leading_zero32__2548__value;
                        vlSelf->__Vfunc_leading_zero32__2548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2548__count)));
                            vlSelf->__Vfunc_leading_zero32__2548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2548__count)));
                            vlSelf->__Vfunc_leading_zero32__2548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2548__count)));
                            vlSelf->__Vfunc_leading_zero32__2548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2548__count)));
                            vlSelf->__Vfunc_leading_zero32__2548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2560__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2560__part 
                            = vlSelf->__Vfunc_leading_zero32__2560__value;
                        vlSelf->__Vfunc_leading_zero32__2560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2560__count)));
                            vlSelf->__Vfunc_leading_zero32__2560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2560__count)));
                            vlSelf->__Vfunc_leading_zero32__2560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2560__count)));
                            vlSelf->__Vfunc_leading_zero32__2560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2560__count)));
                            vlSelf->__Vfunc_leading_zero32__2560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2572__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2572__part 
                            = vlSelf->__Vfunc_leading_zero32__2572__value;
                        vlSelf->__Vfunc_leading_zero32__2572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2572__count)));
                            vlSelf->__Vfunc_leading_zero32__2572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2572__count)));
                            vlSelf->__Vfunc_leading_zero32__2572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2572__count)));
                            vlSelf->__Vfunc_leading_zero32__2572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2572__count)));
                            vlSelf->__Vfunc_leading_zero32__2572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2584__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2584__part 
                            = vlSelf->__Vfunc_leading_zero32__2584__value;
                        vlSelf->__Vfunc_leading_zero32__2584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2584__count)));
                            vlSelf->__Vfunc_leading_zero32__2584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2584__count)));
                            vlSelf->__Vfunc_leading_zero32__2584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2584__count)));
                            vlSelf->__Vfunc_leading_zero32__2584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2584__count)));
                            vlSelf->__Vfunc_leading_zero32__2584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2596__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2596__part 
                            = vlSelf->__Vfunc_leading_zero32__2596__value;
                        vlSelf->__Vfunc_leading_zero32__2596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2596__count)));
                            vlSelf->__Vfunc_leading_zero32__2596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2596__count)));
                            vlSelf->__Vfunc_leading_zero32__2596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2596__count)));
                            vlSelf->__Vfunc_leading_zero32__2596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2596__count)));
                            vlSelf->__Vfunc_leading_zero32__2596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2608__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2608__part 
                            = vlSelf->__Vfunc_leading_zero32__2608__value;
                        vlSelf->__Vfunc_leading_zero32__2608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2608__count)));
                            vlSelf->__Vfunc_leading_zero32__2608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2608__count)));
                            vlSelf->__Vfunc_leading_zero32__2608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2608__count)));
                            vlSelf->__Vfunc_leading_zero32__2608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2608__count)));
                            vlSelf->__Vfunc_leading_zero32__2608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2620__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2620__part 
                            = vlSelf->__Vfunc_leading_zero32__2620__value;
                        vlSelf->__Vfunc_leading_zero32__2620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2620__count)));
                            vlSelf->__Vfunc_leading_zero32__2620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2620__count)));
                            vlSelf->__Vfunc_leading_zero32__2620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2620__count)));
                            vlSelf->__Vfunc_leading_zero32__2620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2620__count)));
                            vlSelf->__Vfunc_leading_zero32__2620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2632__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2632__part 
                            = vlSelf->__Vfunc_leading_zero32__2632__value;
                        vlSelf->__Vfunc_leading_zero32__2632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2632__count)));
                            vlSelf->__Vfunc_leading_zero32__2632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2632__count)));
                            vlSelf->__Vfunc_leading_zero32__2632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2632__count)));
                            vlSelf->__Vfunc_leading_zero32__2632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2632__count)));
                            vlSelf->__Vfunc_leading_zero32__2632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2644__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2644__part 
                            = vlSelf->__Vfunc_leading_zero32__2644__value;
                        vlSelf->__Vfunc_leading_zero32__2644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2644__count)));
                            vlSelf->__Vfunc_leading_zero32__2644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2644__count)));
                            vlSelf->__Vfunc_leading_zero32__2644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2644__count)));
                            vlSelf->__Vfunc_leading_zero32__2644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2644__count)));
                            vlSelf->__Vfunc_leading_zero32__2644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2656__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2656__part 
                            = vlSelf->__Vfunc_leading_zero32__2656__value;
                        vlSelf->__Vfunc_leading_zero32__2656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2656__count)));
                            vlSelf->__Vfunc_leading_zero32__2656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2656__count)));
                            vlSelf->__Vfunc_leading_zero32__2656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2656__count)));
                            vlSelf->__Vfunc_leading_zero32__2656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2656__count)));
                            vlSelf->__Vfunc_leading_zero32__2656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2668__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2668__part 
                            = vlSelf->__Vfunc_leading_zero32__2668__value;
                        vlSelf->__Vfunc_leading_zero32__2668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2668__count)));
                            vlSelf->__Vfunc_leading_zero32__2668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2668__count)));
                            vlSelf->__Vfunc_leading_zero32__2668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2668__count)));
                            vlSelf->__Vfunc_leading_zero32__2668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2668__count)));
                            vlSelf->__Vfunc_leading_zero32__2668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2680__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2680__part 
                            = vlSelf->__Vfunc_leading_zero32__2680__value;
                        vlSelf->__Vfunc_leading_zero32__2680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2680__count)));
                            vlSelf->__Vfunc_leading_zero32__2680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2680__count)));
                            vlSelf->__Vfunc_leading_zero32__2680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2680__count)));
                            vlSelf->__Vfunc_leading_zero32__2680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2680__count)));
                            vlSelf->__Vfunc_leading_zero32__2680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2692__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2692__part 
                            = vlSelf->__Vfunc_leading_zero32__2692__value;
                        vlSelf->__Vfunc_leading_zero32__2692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2692__count)));
                            vlSelf->__Vfunc_leading_zero32__2692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2692__count)));
                            vlSelf->__Vfunc_leading_zero32__2692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2692__count)));
                            vlSelf->__Vfunc_leading_zero32__2692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2692__count)));
                            vlSelf->__Vfunc_leading_zero32__2692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2704__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2704__part 
                            = vlSelf->__Vfunc_leading_zero32__2704__value;
                        vlSelf->__Vfunc_leading_zero32__2704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2704__count)));
                            vlSelf->__Vfunc_leading_zero32__2704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2704__count)));
                            vlSelf->__Vfunc_leading_zero32__2704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2704__count)));
                            vlSelf->__Vfunc_leading_zero32__2704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2704__count)));
                            vlSelf->__Vfunc_leading_zero32__2704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2716__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2716__part 
                            = vlSelf->__Vfunc_leading_zero32__2716__value;
                        vlSelf->__Vfunc_leading_zero32__2716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2716__count)));
                            vlSelf->__Vfunc_leading_zero32__2716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2716__count)));
                            vlSelf->__Vfunc_leading_zero32__2716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2716__count)));
                            vlSelf->__Vfunc_leading_zero32__2716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2716__count)));
                            vlSelf->__Vfunc_leading_zero32__2716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2728__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2728__part 
                            = vlSelf->__Vfunc_leading_zero32__2728__value;
                        vlSelf->__Vfunc_leading_zero32__2728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2728__count)));
                            vlSelf->__Vfunc_leading_zero32__2728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2728__count)));
                            vlSelf->__Vfunc_leading_zero32__2728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2728__count)));
                            vlSelf->__Vfunc_leading_zero32__2728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2728__count)));
                            vlSelf->__Vfunc_leading_zero32__2728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2740__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2740__part 
                            = vlSelf->__Vfunc_leading_zero32__2740__value;
                        vlSelf->__Vfunc_leading_zero32__2740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2740__count)));
                            vlSelf->__Vfunc_leading_zero32__2740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2740__count)));
                            vlSelf->__Vfunc_leading_zero32__2740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2740__count)));
                            vlSelf->__Vfunc_leading_zero32__2740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2740__count)));
                            vlSelf->__Vfunc_leading_zero32__2740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2752__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2752__part 
                            = vlSelf->__Vfunc_leading_zero32__2752__value;
                        vlSelf->__Vfunc_leading_zero32__2752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2752__count)));
                            vlSelf->__Vfunc_leading_zero32__2752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2752__count)));
                            vlSelf->__Vfunc_leading_zero32__2752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2752__count)));
                            vlSelf->__Vfunc_leading_zero32__2752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2752__count)));
                            vlSelf->__Vfunc_leading_zero32__2752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2764__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2764__part 
                            = vlSelf->__Vfunc_leading_zero32__2764__value;
                        vlSelf->__Vfunc_leading_zero32__2764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2764__count)));
                            vlSelf->__Vfunc_leading_zero32__2764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2764__count)));
                            vlSelf->__Vfunc_leading_zero32__2764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2764__count)));
                            vlSelf->__Vfunc_leading_zero32__2764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2764__count)));
                            vlSelf->__Vfunc_leading_zero32__2764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2776__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2776__part 
                            = vlSelf->__Vfunc_leading_zero32__2776__value;
                        vlSelf->__Vfunc_leading_zero32__2776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2776__count)));
                            vlSelf->__Vfunc_leading_zero32__2776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2776__count)));
                            vlSelf->__Vfunc_leading_zero32__2776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2776__count)));
                            vlSelf->__Vfunc_leading_zero32__2776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2776__count)));
                            vlSelf->__Vfunc_leading_zero32__2776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2788__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2788__part 
                            = vlSelf->__Vfunc_leading_zero32__2788__value;
                        vlSelf->__Vfunc_leading_zero32__2788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2788__count)));
                            vlSelf->__Vfunc_leading_zero32__2788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2788__count)));
                            vlSelf->__Vfunc_leading_zero32__2788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2788__count)));
                            vlSelf->__Vfunc_leading_zero32__2788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2788__count)));
                            vlSelf->__Vfunc_leading_zero32__2788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2800__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2800__part 
                            = vlSelf->__Vfunc_leading_zero32__2800__value;
                        vlSelf->__Vfunc_leading_zero32__2800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2800__count)));
                            vlSelf->__Vfunc_leading_zero32__2800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2800__count)));
                            vlSelf->__Vfunc_leading_zero32__2800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2800__count)));
                            vlSelf->__Vfunc_leading_zero32__2800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2800__count)));
                            vlSelf->__Vfunc_leading_zero32__2800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2812__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2812__part 
                            = vlSelf->__Vfunc_leading_zero32__2812__value;
                        vlSelf->__Vfunc_leading_zero32__2812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2812__count)));
                            vlSelf->__Vfunc_leading_zero32__2812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2812__count)));
                            vlSelf->__Vfunc_leading_zero32__2812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2812__count)));
                            vlSelf->__Vfunc_leading_zero32__2812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2812__count)));
                            vlSelf->__Vfunc_leading_zero32__2812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2824__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2824__part 
                            = vlSelf->__Vfunc_leading_zero32__2824__value;
                        vlSelf->__Vfunc_leading_zero32__2824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2824__count)));
                            vlSelf->__Vfunc_leading_zero32__2824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2824__count)));
                            vlSelf->__Vfunc_leading_zero32__2824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2824__count)));
                            vlSelf->__Vfunc_leading_zero32__2824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2824__count)));
                            vlSelf->__Vfunc_leading_zero32__2824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2836__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2836__part 
                            = vlSelf->__Vfunc_leading_zero32__2836__value;
                        vlSelf->__Vfunc_leading_zero32__2836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2836__count)));
                            vlSelf->__Vfunc_leading_zero32__2836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2836__count)));
                            vlSelf->__Vfunc_leading_zero32__2836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2836__count)));
                            vlSelf->__Vfunc_leading_zero32__2836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2836__count)));
                            vlSelf->__Vfunc_leading_zero32__2836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2848__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2848__part 
                            = vlSelf->__Vfunc_leading_zero32__2848__value;
                        vlSelf->__Vfunc_leading_zero32__2848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2848__count)));
                            vlSelf->__Vfunc_leading_zero32__2848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2848__count)));
                            vlSelf->__Vfunc_leading_zero32__2848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2848__count)));
                            vlSelf->__Vfunc_leading_zero32__2848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2848__count)));
                            vlSelf->__Vfunc_leading_zero32__2848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2860__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2860__part 
                            = vlSelf->__Vfunc_leading_zero32__2860__value;
                        vlSelf->__Vfunc_leading_zero32__2860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2860__count)));
                            vlSelf->__Vfunc_leading_zero32__2860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2860__count)));
                            vlSelf->__Vfunc_leading_zero32__2860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2860__count)));
                            vlSelf->__Vfunc_leading_zero32__2860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2860__count)));
                            vlSelf->__Vfunc_leading_zero32__2860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2872__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2872__part 
                            = vlSelf->__Vfunc_leading_zero32__2872__value;
                        vlSelf->__Vfunc_leading_zero32__2872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2872__count)));
                            vlSelf->__Vfunc_leading_zero32__2872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2872__count)));
                            vlSelf->__Vfunc_leading_zero32__2872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2872__count)));
                            vlSelf->__Vfunc_leading_zero32__2872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2872__count)));
                            vlSelf->__Vfunc_leading_zero32__2872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2884__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2884__part 
                            = vlSelf->__Vfunc_leading_zero32__2884__value;
                        vlSelf->__Vfunc_leading_zero32__2884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2884__count)));
                            vlSelf->__Vfunc_leading_zero32__2884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2884__count)));
                            vlSelf->__Vfunc_leading_zero32__2884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2884__count)));
                            vlSelf->__Vfunc_leading_zero32__2884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2884__count)));
                            vlSelf->__Vfunc_leading_zero32__2884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2896__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2896__part 
                            = vlSelf->__Vfunc_leading_zero32__2896__value;
                        vlSelf->__Vfunc_leading_zero32__2896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2896__count)));
                            vlSelf->__Vfunc_leading_zero32__2896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2896__count)));
                            vlSelf->__Vfunc_leading_zero32__2896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2896__count)));
                            vlSelf->__Vfunc_leading_zero32__2896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2896__count)));
                            vlSelf->__Vfunc_leading_zero32__2896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2908__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2908__part 
                            = vlSelf->__Vfunc_leading_zero32__2908__value;
                        vlSelf->__Vfunc_leading_zero32__2908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2908__count)));
                            vlSelf->__Vfunc_leading_zero32__2908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2908__count)));
                            vlSelf->__Vfunc_leading_zero32__2908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2908__count)));
                            vlSelf->__Vfunc_leading_zero32__2908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2908__count)));
                            vlSelf->__Vfunc_leading_zero32__2908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2920__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2920__part 
                            = vlSelf->__Vfunc_leading_zero32__2920__value;
                        vlSelf->__Vfunc_leading_zero32__2920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2920__count)));
                            vlSelf->__Vfunc_leading_zero32__2920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2920__count)));
                            vlSelf->__Vfunc_leading_zero32__2920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2920__count)));
                            vlSelf->__Vfunc_leading_zero32__2920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2920__count)));
                            vlSelf->__Vfunc_leading_zero32__2920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2932__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2932__part 
                            = vlSelf->__Vfunc_leading_zero32__2932__value;
                        vlSelf->__Vfunc_leading_zero32__2932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2932__count)));
                            vlSelf->__Vfunc_leading_zero32__2932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2932__count)));
                            vlSelf->__Vfunc_leading_zero32__2932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2932__count)));
                            vlSelf->__Vfunc_leading_zero32__2932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2932__count)));
                            vlSelf->__Vfunc_leading_zero32__2932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2944__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2944__part 
                            = vlSelf->__Vfunc_leading_zero32__2944__value;
                        vlSelf->__Vfunc_leading_zero32__2944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2944__count)));
                            vlSelf->__Vfunc_leading_zero32__2944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2944__count)));
                            vlSelf->__Vfunc_leading_zero32__2944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2944__count)));
                            vlSelf->__Vfunc_leading_zero32__2944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2944__count)));
                            vlSelf->__Vfunc_leading_zero32__2944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2956__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2956__part 
                            = vlSelf->__Vfunc_leading_zero32__2956__value;
                        vlSelf->__Vfunc_leading_zero32__2956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2956__count)));
                            vlSelf->__Vfunc_leading_zero32__2956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2956__count)));
                            vlSelf->__Vfunc_leading_zero32__2956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2956__count)));
                            vlSelf->__Vfunc_leading_zero32__2956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2956__count)));
                            vlSelf->__Vfunc_leading_zero32__2956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2956__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2968__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2968__part 
                            = vlSelf->__Vfunc_leading_zero32__2968__value;
                        vlSelf->__Vfunc_leading_zero32__2968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2968__count)));
                            vlSelf->__Vfunc_leading_zero32__2968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2968__count)));
                            vlSelf->__Vfunc_leading_zero32__2968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2968__count)));
                            vlSelf->__Vfunc_leading_zero32__2968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2968__count)));
                            vlSelf->__Vfunc_leading_zero32__2968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2968__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2980__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2980__part 
                            = vlSelf->__Vfunc_leading_zero32__2980__value;
                        vlSelf->__Vfunc_leading_zero32__2980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2980__count)));
                            vlSelf->__Vfunc_leading_zero32__2980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2980__count)));
                            vlSelf->__Vfunc_leading_zero32__2980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2980__count)));
                            vlSelf->__Vfunc_leading_zero32__2980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2980__count)));
                            vlSelf->__Vfunc_leading_zero32__2980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2992__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2992__part 
                            = vlSelf->__Vfunc_leading_zero32__2992__value;
                        vlSelf->__Vfunc_leading_zero32__2992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2992__count)));
                            vlSelf->__Vfunc_leading_zero32__2992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2992__count)));
                            vlSelf->__Vfunc_leading_zero32__2992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2992__count)));
                            vlSelf->__Vfunc_leading_zero32__2992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2992__count)));
                            vlSelf->__Vfunc_leading_zero32__2992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2992__Vfuncout)) 
                             - (IData)(8U))));
}
