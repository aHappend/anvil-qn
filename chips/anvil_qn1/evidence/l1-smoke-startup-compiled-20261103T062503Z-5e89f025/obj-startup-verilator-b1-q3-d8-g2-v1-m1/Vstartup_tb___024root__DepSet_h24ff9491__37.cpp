// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___nba_sequent__TOP__37(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_sequent__TOP__37\n"); );
    // Body
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4354__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4354__part 
                            = vlSelf->__Vfunc_leading_zero32__4354__value;
                        vlSelf->__Vfunc_leading_zero32__4354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4366__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4366__part 
                            = vlSelf->__Vfunc_leading_zero32__4366__value;
                        vlSelf->__Vfunc_leading_zero32__4366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4378__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4378__part 
                            = vlSelf->__Vfunc_leading_zero32__4378__value;
                        vlSelf->__Vfunc_leading_zero32__4378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4390__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4390__part 
                            = vlSelf->__Vfunc_leading_zero32__4390__value;
                        vlSelf->__Vfunc_leading_zero32__4390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4402__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4402__part 
                            = vlSelf->__Vfunc_leading_zero32__4402__value;
                        vlSelf->__Vfunc_leading_zero32__4402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4414__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4414__part 
                            = vlSelf->__Vfunc_leading_zero32__4414__value;
                        vlSelf->__Vfunc_leading_zero32__4414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4426__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4426__part 
                            = vlSelf->__Vfunc_leading_zero32__4426__value;
                        vlSelf->__Vfunc_leading_zero32__4426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4438__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4438__part 
                            = vlSelf->__Vfunc_leading_zero32__4438__value;
                        vlSelf->__Vfunc_leading_zero32__4438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4450__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4450__part 
                            = vlSelf->__Vfunc_leading_zero32__4450__value;
                        vlSelf->__Vfunc_leading_zero32__4450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4462__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4462__part 
                            = vlSelf->__Vfunc_leading_zero32__4462__value;
                        vlSelf->__Vfunc_leading_zero32__4462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4474__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4474__part 
                            = vlSelf->__Vfunc_leading_zero32__4474__value;
                        vlSelf->__Vfunc_leading_zero32__4474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4486__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4486__part 
                            = vlSelf->__Vfunc_leading_zero32__4486__value;
                        vlSelf->__Vfunc_leading_zero32__4486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4498__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4498__part 
                            = vlSelf->__Vfunc_leading_zero32__4498__value;
                        vlSelf->__Vfunc_leading_zero32__4498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4510__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4510__part 
                            = vlSelf->__Vfunc_leading_zero32__4510__value;
                        vlSelf->__Vfunc_leading_zero32__4510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4522__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4522__part 
                            = vlSelf->__Vfunc_leading_zero32__4522__value;
                        vlSelf->__Vfunc_leading_zero32__4522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4534__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4534__part 
                            = vlSelf->__Vfunc_leading_zero32__4534__value;
                        vlSelf->__Vfunc_leading_zero32__4534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4546__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4546__part 
                            = vlSelf->__Vfunc_leading_zero32__4546__value;
                        vlSelf->__Vfunc_leading_zero32__4546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4558__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4558__part 
                            = vlSelf->__Vfunc_leading_zero32__4558__value;
                        vlSelf->__Vfunc_leading_zero32__4558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4570__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4570__part 
                            = vlSelf->__Vfunc_leading_zero32__4570__value;
                        vlSelf->__Vfunc_leading_zero32__4570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4582__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4582__part 
                            = vlSelf->__Vfunc_leading_zero32__4582__value;
                        vlSelf->__Vfunc_leading_zero32__4582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4594__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4594__part 
                            = vlSelf->__Vfunc_leading_zero32__4594__value;
                        vlSelf->__Vfunc_leading_zero32__4594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4606__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4606__part 
                            = vlSelf->__Vfunc_leading_zero32__4606__value;
                        vlSelf->__Vfunc_leading_zero32__4606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4618__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4618__part 
                            = vlSelf->__Vfunc_leading_zero32__4618__value;
                        vlSelf->__Vfunc_leading_zero32__4618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4630__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4630__part 
                            = vlSelf->__Vfunc_leading_zero32__4630__value;
                        vlSelf->__Vfunc_leading_zero32__4630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4642__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4642__part 
                            = vlSelf->__Vfunc_leading_zero32__4642__value;
                        vlSelf->__Vfunc_leading_zero32__4642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4654__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4654__part 
                            = vlSelf->__Vfunc_leading_zero32__4654__value;
                        vlSelf->__Vfunc_leading_zero32__4654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4666__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4666__part 
                            = vlSelf->__Vfunc_leading_zero32__4666__value;
                        vlSelf->__Vfunc_leading_zero32__4666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4678__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4678__part 
                            = vlSelf->__Vfunc_leading_zero32__4678__value;
                        vlSelf->__Vfunc_leading_zero32__4678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4690__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4690__part 
                            = vlSelf->__Vfunc_leading_zero32__4690__value;
                        vlSelf->__Vfunc_leading_zero32__4690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4702__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4702__part 
                            = vlSelf->__Vfunc_leading_zero32__4702__value;
                        vlSelf->__Vfunc_leading_zero32__4702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4714__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4714__part 
                            = vlSelf->__Vfunc_leading_zero32__4714__value;
                        vlSelf->__Vfunc_leading_zero32__4714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4726__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4726__part 
                            = vlSelf->__Vfunc_leading_zero32__4726__value;
                        vlSelf->__Vfunc_leading_zero32__4726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4738__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4738__part 
                            = vlSelf->__Vfunc_leading_zero32__4738__value;
                        vlSelf->__Vfunc_leading_zero32__4738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4750__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4750__part 
                            = vlSelf->__Vfunc_leading_zero32__4750__value;
                        vlSelf->__Vfunc_leading_zero32__4750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4762__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4762__part 
                            = vlSelf->__Vfunc_leading_zero32__4762__value;
                        vlSelf->__Vfunc_leading_zero32__4762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4774__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4774__part 
                            = vlSelf->__Vfunc_leading_zero32__4774__value;
                        vlSelf->__Vfunc_leading_zero32__4774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4786__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4786__part 
                            = vlSelf->__Vfunc_leading_zero32__4786__value;
                        vlSelf->__Vfunc_leading_zero32__4786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4798__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4798__part 
                            = vlSelf->__Vfunc_leading_zero32__4798__value;
                        vlSelf->__Vfunc_leading_zero32__4798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1731__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1743__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1755__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1767__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1779__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1791__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1803__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1815__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1827__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1839__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1851__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1863__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1875__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1887__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1899__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1911__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1923__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1935__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1947__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1959__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1971__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1983__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1995__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2007__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2019__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2031__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2043__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2055__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2067__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2079__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2091__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2103__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2115__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a;
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
}
