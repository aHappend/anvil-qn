// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__3\n"); );
    // Init
    IData/*16:0*/ __Vfunc_round_bf16__5__Vfuncout;
    __Vfunc_round_bf16__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__5__value;
    __Vfunc_round_bf16__5__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__5__rounded;
    __Vfunc_round_bf16__5__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__10__Vfuncout;
    __Vfunc_round_bf16__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__10__value;
    __Vfunc_round_bf16__10__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__10__rounded;
    __Vfunc_round_bf16__10__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__13__Vfuncout;
    __Vfunc_round_bf16__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__13__value;
    __Vfunc_round_bf16__13__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__13__rounded;
    __Vfunc_round_bf16__13__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__15__Vfuncout;
    __Vfunc_round_bf16__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__15__value;
    __Vfunc_round_bf16__15__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__15__rounded;
    __Vfunc_round_bf16__15__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__35__Vfuncout;
    __Vfunc_round_bf16__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__35__value;
    __Vfunc_round_bf16__35__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__35__rounded;
    __Vfunc_round_bf16__35__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__147__Vfuncout;
    __Vfunc_round_bf16__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__147__value;
    __Vfunc_round_bf16__147__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__147__rounded;
    __Vfunc_round_bf16__147__rounded = 0;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6583__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6583__part 
                            = vlSelf->__Vfunc_leading_zero32__6583__value;
                        vlSelf->__Vfunc_leading_zero32__6583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6583__count)));
                            vlSelf->__Vfunc_leading_zero32__6583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6583__count)));
                            vlSelf->__Vfunc_leading_zero32__6583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6583__count)));
                            vlSelf->__Vfunc_leading_zero32__6583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6583__count)));
                            vlSelf->__Vfunc_leading_zero32__6583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6583__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6589__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6589__part 
                            = vlSelf->__Vfunc_leading_zero32__6589__value;
                        vlSelf->__Vfunc_leading_zero32__6589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6589__count)));
                            vlSelf->__Vfunc_leading_zero32__6589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6589__count)));
                            vlSelf->__Vfunc_leading_zero32__6589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6589__count)));
                            vlSelf->__Vfunc_leading_zero32__6589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6589__count)));
                            vlSelf->__Vfunc_leading_zero32__6589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6589__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6595__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6595__part 
                            = vlSelf->__Vfunc_leading_zero32__6595__value;
                        vlSelf->__Vfunc_leading_zero32__6595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6595__count)));
                            vlSelf->__Vfunc_leading_zero32__6595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6595__count)));
                            vlSelf->__Vfunc_leading_zero32__6595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6595__count)));
                            vlSelf->__Vfunc_leading_zero32__6595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6595__count)));
                            vlSelf->__Vfunc_leading_zero32__6595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6595__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6601__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6601__part 
                            = vlSelf->__Vfunc_leading_zero32__6601__value;
                        vlSelf->__Vfunc_leading_zero32__6601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6601__count)));
                            vlSelf->__Vfunc_leading_zero32__6601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6601__count)));
                            vlSelf->__Vfunc_leading_zero32__6601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6601__count)));
                            vlSelf->__Vfunc_leading_zero32__6601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6601__count)));
                            vlSelf->__Vfunc_leading_zero32__6601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6601__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6607__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6607__part 
                            = vlSelf->__Vfunc_leading_zero32__6607__value;
                        vlSelf->__Vfunc_leading_zero32__6607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6607__count)));
                            vlSelf->__Vfunc_leading_zero32__6607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6607__count)));
                            vlSelf->__Vfunc_leading_zero32__6607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6607__count)));
                            vlSelf->__Vfunc_leading_zero32__6607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6607__count)));
                            vlSelf->__Vfunc_leading_zero32__6607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6607__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6613__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6613__part 
                            = vlSelf->__Vfunc_leading_zero32__6613__value;
                        vlSelf->__Vfunc_leading_zero32__6613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6613__count)));
                            vlSelf->__Vfunc_leading_zero32__6613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6613__count)));
                            vlSelf->__Vfunc_leading_zero32__6613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6613__count)));
                            vlSelf->__Vfunc_leading_zero32__6613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6613__count)));
                            vlSelf->__Vfunc_leading_zero32__6613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6613__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6619__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6619__part 
                            = vlSelf->__Vfunc_leading_zero32__6619__value;
                        vlSelf->__Vfunc_leading_zero32__6619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6619__count)));
                            vlSelf->__Vfunc_leading_zero32__6619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6619__count)));
                            vlSelf->__Vfunc_leading_zero32__6619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6619__count)));
                            vlSelf->__Vfunc_leading_zero32__6619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6619__count)));
                            vlSelf->__Vfunc_leading_zero32__6619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6619__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6625__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6625__part 
                            = vlSelf->__Vfunc_leading_zero32__6625__value;
                        vlSelf->__Vfunc_leading_zero32__6625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6625__count)));
                            vlSelf->__Vfunc_leading_zero32__6625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6625__count)));
                            vlSelf->__Vfunc_leading_zero32__6625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6625__count)));
                            vlSelf->__Vfunc_leading_zero32__6625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6625__count)));
                            vlSelf->__Vfunc_leading_zero32__6625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6625__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6631__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6631__part 
                            = vlSelf->__Vfunc_leading_zero32__6631__value;
                        vlSelf->__Vfunc_leading_zero32__6631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6631__count)));
                            vlSelf->__Vfunc_leading_zero32__6631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6631__count)));
                            vlSelf->__Vfunc_leading_zero32__6631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6631__count)));
                            vlSelf->__Vfunc_leading_zero32__6631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6631__count)));
                            vlSelf->__Vfunc_leading_zero32__6631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6631__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6637__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6637__part 
                            = vlSelf->__Vfunc_leading_zero32__6637__value;
                        vlSelf->__Vfunc_leading_zero32__6637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6637__count)));
                            vlSelf->__Vfunc_leading_zero32__6637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6637__count)));
                            vlSelf->__Vfunc_leading_zero32__6637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6637__count)));
                            vlSelf->__Vfunc_leading_zero32__6637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6637__count)));
                            vlSelf->__Vfunc_leading_zero32__6637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6637__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6643__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6643__part 
                            = vlSelf->__Vfunc_leading_zero32__6643__value;
                        vlSelf->__Vfunc_leading_zero32__6643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6643__count)));
                            vlSelf->__Vfunc_leading_zero32__6643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6643__count)));
                            vlSelf->__Vfunc_leading_zero32__6643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6643__count)));
                            vlSelf->__Vfunc_leading_zero32__6643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6643__count)));
                            vlSelf->__Vfunc_leading_zero32__6643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6643__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6649__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6649__part 
                            = vlSelf->__Vfunc_leading_zero32__6649__value;
                        vlSelf->__Vfunc_leading_zero32__6649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6649__count)));
                            vlSelf->__Vfunc_leading_zero32__6649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6649__count)));
                            vlSelf->__Vfunc_leading_zero32__6649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6649__count)));
                            vlSelf->__Vfunc_leading_zero32__6649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6649__count)));
                            vlSelf->__Vfunc_leading_zero32__6649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6649__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6655__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6655__part 
                            = vlSelf->__Vfunc_leading_zero32__6655__value;
                        vlSelf->__Vfunc_leading_zero32__6655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6655__count)));
                            vlSelf->__Vfunc_leading_zero32__6655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6655__count)));
                            vlSelf->__Vfunc_leading_zero32__6655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6655__count)));
                            vlSelf->__Vfunc_leading_zero32__6655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6655__count)));
                            vlSelf->__Vfunc_leading_zero32__6655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6655__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6661__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6661__part 
                            = vlSelf->__Vfunc_leading_zero32__6661__value;
                        vlSelf->__Vfunc_leading_zero32__6661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6661__count)));
                            vlSelf->__Vfunc_leading_zero32__6661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6661__count)));
                            vlSelf->__Vfunc_leading_zero32__6661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6661__count)));
                            vlSelf->__Vfunc_leading_zero32__6661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6661__count)));
                            vlSelf->__Vfunc_leading_zero32__6661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6661__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6667__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6667__part 
                            = vlSelf->__Vfunc_leading_zero32__6667__value;
                        vlSelf->__Vfunc_leading_zero32__6667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6667__count)));
                            vlSelf->__Vfunc_leading_zero32__6667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6667__count)));
                            vlSelf->__Vfunc_leading_zero32__6667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6667__count)));
                            vlSelf->__Vfunc_leading_zero32__6667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6667__count)));
                            vlSelf->__Vfunc_leading_zero32__6667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6667__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6673__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6673__part 
                            = vlSelf->__Vfunc_leading_zero32__6673__value;
                        vlSelf->__Vfunc_leading_zero32__6673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6673__count)));
                            vlSelf->__Vfunc_leading_zero32__6673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6673__count)));
                            vlSelf->__Vfunc_leading_zero32__6673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6673__count)));
                            vlSelf->__Vfunc_leading_zero32__6673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6673__count)));
                            vlSelf->__Vfunc_leading_zero32__6673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6673__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6679__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6679__part 
                            = vlSelf->__Vfunc_leading_zero32__6679__value;
                        vlSelf->__Vfunc_leading_zero32__6679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6679__count)));
                            vlSelf->__Vfunc_leading_zero32__6679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6679__count)));
                            vlSelf->__Vfunc_leading_zero32__6679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6679__count)));
                            vlSelf->__Vfunc_leading_zero32__6679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6679__count)));
                            vlSelf->__Vfunc_leading_zero32__6679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6679__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6685__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6685__part 
                            = vlSelf->__Vfunc_leading_zero32__6685__value;
                        vlSelf->__Vfunc_leading_zero32__6685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6685__count)));
                            vlSelf->__Vfunc_leading_zero32__6685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6685__count)));
                            vlSelf->__Vfunc_leading_zero32__6685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6685__count)));
                            vlSelf->__Vfunc_leading_zero32__6685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6685__count)));
                            vlSelf->__Vfunc_leading_zero32__6685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6685__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6691__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6691__part 
                            = vlSelf->__Vfunc_leading_zero32__6691__value;
                        vlSelf->__Vfunc_leading_zero32__6691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6691__count)));
                            vlSelf->__Vfunc_leading_zero32__6691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6691__count)));
                            vlSelf->__Vfunc_leading_zero32__6691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6691__count)));
                            vlSelf->__Vfunc_leading_zero32__6691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6691__count)));
                            vlSelf->__Vfunc_leading_zero32__6691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6691__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6697__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6697__part 
                            = vlSelf->__Vfunc_leading_zero32__6697__value;
                        vlSelf->__Vfunc_leading_zero32__6697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6697__count)));
                            vlSelf->__Vfunc_leading_zero32__6697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6697__count)));
                            vlSelf->__Vfunc_leading_zero32__6697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6697__count)));
                            vlSelf->__Vfunc_leading_zero32__6697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6697__count)));
                            vlSelf->__Vfunc_leading_zero32__6697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6697__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6703__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6703__part 
                            = vlSelf->__Vfunc_leading_zero32__6703__value;
                        vlSelf->__Vfunc_leading_zero32__6703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6703__count)));
                            vlSelf->__Vfunc_leading_zero32__6703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6703__count)));
                            vlSelf->__Vfunc_leading_zero32__6703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6703__count)));
                            vlSelf->__Vfunc_leading_zero32__6703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6703__count)));
                            vlSelf->__Vfunc_leading_zero32__6703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6703__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6709__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6709__part 
                            = vlSelf->__Vfunc_leading_zero32__6709__value;
                        vlSelf->__Vfunc_leading_zero32__6709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6709__count)));
                            vlSelf->__Vfunc_leading_zero32__6709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6709__count)));
                            vlSelf->__Vfunc_leading_zero32__6709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6709__count)));
                            vlSelf->__Vfunc_leading_zero32__6709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6709__count)));
                            vlSelf->__Vfunc_leading_zero32__6709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6709__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6715__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6715__part 
                            = vlSelf->__Vfunc_leading_zero32__6715__value;
                        vlSelf->__Vfunc_leading_zero32__6715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6715__count)));
                            vlSelf->__Vfunc_leading_zero32__6715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6715__count)));
                            vlSelf->__Vfunc_leading_zero32__6715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6715__count)));
                            vlSelf->__Vfunc_leading_zero32__6715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6715__count)));
                            vlSelf->__Vfunc_leading_zero32__6715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6715__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6721__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6721__part 
                            = vlSelf->__Vfunc_leading_zero32__6721__value;
                        vlSelf->__Vfunc_leading_zero32__6721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6721__count)));
                            vlSelf->__Vfunc_leading_zero32__6721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6721__count)));
                            vlSelf->__Vfunc_leading_zero32__6721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6721__count)));
                            vlSelf->__Vfunc_leading_zero32__6721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6721__count)));
                            vlSelf->__Vfunc_leading_zero32__6721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6721__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6727__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6727__part 
                            = vlSelf->__Vfunc_leading_zero32__6727__value;
                        vlSelf->__Vfunc_leading_zero32__6727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6727__count)));
                            vlSelf->__Vfunc_leading_zero32__6727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6727__count)));
                            vlSelf->__Vfunc_leading_zero32__6727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6727__count)));
                            vlSelf->__Vfunc_leading_zero32__6727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6727__count)));
                            vlSelf->__Vfunc_leading_zero32__6727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6727__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6733__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6733__part 
                            = vlSelf->__Vfunc_leading_zero32__6733__value;
                        vlSelf->__Vfunc_leading_zero32__6733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6733__count)));
                            vlSelf->__Vfunc_leading_zero32__6733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6733__count)));
                            vlSelf->__Vfunc_leading_zero32__6733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6733__count)));
                            vlSelf->__Vfunc_leading_zero32__6733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6733__count)));
                            vlSelf->__Vfunc_leading_zero32__6733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6733__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6739__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6739__part 
                            = vlSelf->__Vfunc_leading_zero32__6739__value;
                        vlSelf->__Vfunc_leading_zero32__6739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6739__count)));
                            vlSelf->__Vfunc_leading_zero32__6739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6739__count)));
                            vlSelf->__Vfunc_leading_zero32__6739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6739__count)));
                            vlSelf->__Vfunc_leading_zero32__6739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6739__count)));
                            vlSelf->__Vfunc_leading_zero32__6739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6739__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6745__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6745__part 
                            = vlSelf->__Vfunc_leading_zero32__6745__value;
                        vlSelf->__Vfunc_leading_zero32__6745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6745__count)));
                            vlSelf->__Vfunc_leading_zero32__6745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6745__count)));
                            vlSelf->__Vfunc_leading_zero32__6745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6745__count)));
                            vlSelf->__Vfunc_leading_zero32__6745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6745__count)));
                            vlSelf->__Vfunc_leading_zero32__6745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6745__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6751__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6751__part 
                            = vlSelf->__Vfunc_leading_zero32__6751__value;
                        vlSelf->__Vfunc_leading_zero32__6751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6751__count)));
                            vlSelf->__Vfunc_leading_zero32__6751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6751__count)));
                            vlSelf->__Vfunc_leading_zero32__6751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6751__count)));
                            vlSelf->__Vfunc_leading_zero32__6751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6751__count)));
                            vlSelf->__Vfunc_leading_zero32__6751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6751__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6757__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6757__part 
                            = vlSelf->__Vfunc_leading_zero32__6757__value;
                        vlSelf->__Vfunc_leading_zero32__6757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6757__count)));
                            vlSelf->__Vfunc_leading_zero32__6757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6757__count)));
                            vlSelf->__Vfunc_leading_zero32__6757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6757__count)));
                            vlSelf->__Vfunc_leading_zero32__6757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6757__count)));
                            vlSelf->__Vfunc_leading_zero32__6757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6757__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6763__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6763__part 
                            = vlSelf->__Vfunc_leading_zero32__6763__value;
                        vlSelf->__Vfunc_leading_zero32__6763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6763__count)));
                            vlSelf->__Vfunc_leading_zero32__6763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6763__count)));
                            vlSelf->__Vfunc_leading_zero32__6763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6763__count)));
                            vlSelf->__Vfunc_leading_zero32__6763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6763__count)));
                            vlSelf->__Vfunc_leading_zero32__6763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6763__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6769__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6769__part 
                            = vlSelf->__Vfunc_leading_zero32__6769__value;
                        vlSelf->__Vfunc_leading_zero32__6769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6769__count)));
                            vlSelf->__Vfunc_leading_zero32__6769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6769__count)));
                            vlSelf->__Vfunc_leading_zero32__6769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6769__count)));
                            vlSelf->__Vfunc_leading_zero32__6769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6769__count)));
                            vlSelf->__Vfunc_leading_zero32__6769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6769__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6775__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6775__part 
                            = vlSelf->__Vfunc_leading_zero32__6775__value;
                        vlSelf->__Vfunc_leading_zero32__6775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6775__count)));
                            vlSelf->__Vfunc_leading_zero32__6775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6775__count)));
                            vlSelf->__Vfunc_leading_zero32__6775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6775__count)));
                            vlSelf->__Vfunc_leading_zero32__6775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6775__count)));
                            vlSelf->__Vfunc_leading_zero32__6775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6775__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6781__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6781__part 
                            = vlSelf->__Vfunc_leading_zero32__6781__value;
                        vlSelf->__Vfunc_leading_zero32__6781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6781__count)));
                            vlSelf->__Vfunc_leading_zero32__6781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6781__count)));
                            vlSelf->__Vfunc_leading_zero32__6781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6781__count)));
                            vlSelf->__Vfunc_leading_zero32__6781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6781__count)));
                            vlSelf->__Vfunc_leading_zero32__6781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6781__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6787__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6787__part 
                            = vlSelf->__Vfunc_leading_zero32__6787__value;
                        vlSelf->__Vfunc_leading_zero32__6787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6787__count)));
                            vlSelf->__Vfunc_leading_zero32__6787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6787__count)));
                            vlSelf->__Vfunc_leading_zero32__6787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6787__count)));
                            vlSelf->__Vfunc_leading_zero32__6787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6787__count)));
                            vlSelf->__Vfunc_leading_zero32__6787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6787__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6793__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6793__part 
                            = vlSelf->__Vfunc_leading_zero32__6793__value;
                        vlSelf->__Vfunc_leading_zero32__6793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6793__count)));
                            vlSelf->__Vfunc_leading_zero32__6793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6793__count)));
                            vlSelf->__Vfunc_leading_zero32__6793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6793__count)));
                            vlSelf->__Vfunc_leading_zero32__6793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6793__count)));
                            vlSelf->__Vfunc_leading_zero32__6793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6793__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6799__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6799__part 
                            = vlSelf->__Vfunc_leading_zero32__6799__value;
                        vlSelf->__Vfunc_leading_zero32__6799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6799__count)));
                            vlSelf->__Vfunc_leading_zero32__6799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6799__count)));
                            vlSelf->__Vfunc_leading_zero32__6799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6799__count)));
                            vlSelf->__Vfunc_leading_zero32__6799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6799__count)));
                            vlSelf->__Vfunc_leading_zero32__6799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6799__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6805__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6805__part 
                            = vlSelf->__Vfunc_leading_zero32__6805__value;
                        vlSelf->__Vfunc_leading_zero32__6805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6805__count)));
                            vlSelf->__Vfunc_leading_zero32__6805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6805__count)));
                            vlSelf->__Vfunc_leading_zero32__6805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6805__count)));
                            vlSelf->__Vfunc_leading_zero32__6805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6805__count)));
                            vlSelf->__Vfunc_leading_zero32__6805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6805__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6811__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6811__part 
                            = vlSelf->__Vfunc_leading_zero32__6811__value;
                        vlSelf->__Vfunc_leading_zero32__6811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6811__count)));
                            vlSelf->__Vfunc_leading_zero32__6811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6811__count)));
                            vlSelf->__Vfunc_leading_zero32__6811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6811__count)));
                            vlSelf->__Vfunc_leading_zero32__6811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6811__count)));
                            vlSelf->__Vfunc_leading_zero32__6811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6811__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6817__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6817__part 
                            = vlSelf->__Vfunc_leading_zero32__6817__value;
                        vlSelf->__Vfunc_leading_zero32__6817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6817__count)));
                            vlSelf->__Vfunc_leading_zero32__6817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6817__count)));
                            vlSelf->__Vfunc_leading_zero32__6817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6817__count)));
                            vlSelf->__Vfunc_leading_zero32__6817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6817__count)));
                            vlSelf->__Vfunc_leading_zero32__6817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6817__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6823__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6823__part 
                            = vlSelf->__Vfunc_leading_zero32__6823__value;
                        vlSelf->__Vfunc_leading_zero32__6823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6823__count)));
                            vlSelf->__Vfunc_leading_zero32__6823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6823__count)));
                            vlSelf->__Vfunc_leading_zero32__6823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6823__count)));
                            vlSelf->__Vfunc_leading_zero32__6823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6823__count)));
                            vlSelf->__Vfunc_leading_zero32__6823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6823__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6829__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6829__part 
                            = vlSelf->__Vfunc_leading_zero32__6829__value;
                        vlSelf->__Vfunc_leading_zero32__6829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6829__count)));
                            vlSelf->__Vfunc_leading_zero32__6829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6829__count)));
                            vlSelf->__Vfunc_leading_zero32__6829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6829__count)));
                            vlSelf->__Vfunc_leading_zero32__6829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6829__count)));
                            vlSelf->__Vfunc_leading_zero32__6829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6829__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6835__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6835__part 
                            = vlSelf->__Vfunc_leading_zero32__6835__value;
                        vlSelf->__Vfunc_leading_zero32__6835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6835__count)));
                            vlSelf->__Vfunc_leading_zero32__6835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6835__count)));
                            vlSelf->__Vfunc_leading_zero32__6835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6835__count)));
                            vlSelf->__Vfunc_leading_zero32__6835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6835__count)));
                            vlSelf->__Vfunc_leading_zero32__6835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6835__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6841__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6841__part 
                            = vlSelf->__Vfunc_leading_zero32__6841__value;
                        vlSelf->__Vfunc_leading_zero32__6841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6841__count)));
                            vlSelf->__Vfunc_leading_zero32__6841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6841__count)));
                            vlSelf->__Vfunc_leading_zero32__6841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6841__count)));
                            vlSelf->__Vfunc_leading_zero32__6841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6841__count)));
                            vlSelf->__Vfunc_leading_zero32__6841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6841__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6847__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6847__part 
                            = vlSelf->__Vfunc_leading_zero32__6847__value;
                        vlSelf->__Vfunc_leading_zero32__6847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6847__count)));
                            vlSelf->__Vfunc_leading_zero32__6847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6847__count)));
                            vlSelf->__Vfunc_leading_zero32__6847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6847__count)));
                            vlSelf->__Vfunc_leading_zero32__6847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6847__count)));
                            vlSelf->__Vfunc_leading_zero32__6847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6847__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6853__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6853__part 
                            = vlSelf->__Vfunc_leading_zero32__6853__value;
                        vlSelf->__Vfunc_leading_zero32__6853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6853__count)));
                            vlSelf->__Vfunc_leading_zero32__6853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6853__count)));
                            vlSelf->__Vfunc_leading_zero32__6853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6853__count)));
                            vlSelf->__Vfunc_leading_zero32__6853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6853__count)));
                            vlSelf->__Vfunc_leading_zero32__6853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6853__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6859__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6859__part 
                            = vlSelf->__Vfunc_leading_zero32__6859__value;
                        vlSelf->__Vfunc_leading_zero32__6859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6859__count)));
                            vlSelf->__Vfunc_leading_zero32__6859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6859__count)));
                            vlSelf->__Vfunc_leading_zero32__6859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6859__count)));
                            vlSelf->__Vfunc_leading_zero32__6859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6859__count)));
                            vlSelf->__Vfunc_leading_zero32__6859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6859__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6865__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6865__part 
                            = vlSelf->__Vfunc_leading_zero32__6865__value;
                        vlSelf->__Vfunc_leading_zero32__6865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6865__count)));
                            vlSelf->__Vfunc_leading_zero32__6865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6865__count)));
                            vlSelf->__Vfunc_leading_zero32__6865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6865__count)));
                            vlSelf->__Vfunc_leading_zero32__6865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6865__count)));
                            vlSelf->__Vfunc_leading_zero32__6865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6865__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6871__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6871__part 
                            = vlSelf->__Vfunc_leading_zero32__6871__value;
                        vlSelf->__Vfunc_leading_zero32__6871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6871__count)));
                            vlSelf->__Vfunc_leading_zero32__6871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6871__count)));
                            vlSelf->__Vfunc_leading_zero32__6871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6871__count)));
                            vlSelf->__Vfunc_leading_zero32__6871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6871__count)));
                            vlSelf->__Vfunc_leading_zero32__6871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6871__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6877__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6877__part 
                            = vlSelf->__Vfunc_leading_zero32__6877__value;
                        vlSelf->__Vfunc_leading_zero32__6877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6877__count)));
                            vlSelf->__Vfunc_leading_zero32__6877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6877__count)));
                            vlSelf->__Vfunc_leading_zero32__6877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6877__count)));
                            vlSelf->__Vfunc_leading_zero32__6877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6877__count)));
                            vlSelf->__Vfunc_leading_zero32__6877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6877__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6883__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6883__part 
                            = vlSelf->__Vfunc_leading_zero32__6883__value;
                        vlSelf->__Vfunc_leading_zero32__6883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6883__count)));
                            vlSelf->__Vfunc_leading_zero32__6883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6883__count)));
                            vlSelf->__Vfunc_leading_zero32__6883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6883__count)));
                            vlSelf->__Vfunc_leading_zero32__6883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6883__count)));
                            vlSelf->__Vfunc_leading_zero32__6883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6883__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6889__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6889__part 
                            = vlSelf->__Vfunc_leading_zero32__6889__value;
                        vlSelf->__Vfunc_leading_zero32__6889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6889__count)));
                            vlSelf->__Vfunc_leading_zero32__6889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6889__count)));
                            vlSelf->__Vfunc_leading_zero32__6889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6889__count)));
                            vlSelf->__Vfunc_leading_zero32__6889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6889__count)));
                            vlSelf->__Vfunc_leading_zero32__6889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6889__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6895__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6895__part 
                            = vlSelf->__Vfunc_leading_zero32__6895__value;
                        vlSelf->__Vfunc_leading_zero32__6895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6895__count)));
                            vlSelf->__Vfunc_leading_zero32__6895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6895__count)));
                            vlSelf->__Vfunc_leading_zero32__6895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6895__count)));
                            vlSelf->__Vfunc_leading_zero32__6895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6895__count)));
                            vlSelf->__Vfunc_leading_zero32__6895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6895__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6901__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6901__part 
                            = vlSelf->__Vfunc_leading_zero32__6901__value;
                        vlSelf->__Vfunc_leading_zero32__6901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6901__count)));
                            vlSelf->__Vfunc_leading_zero32__6901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6901__count)));
                            vlSelf->__Vfunc_leading_zero32__6901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6901__count)));
                            vlSelf->__Vfunc_leading_zero32__6901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6901__count)));
                            vlSelf->__Vfunc_leading_zero32__6901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6901__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6907__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6907__part 
                            = vlSelf->__Vfunc_leading_zero32__6907__value;
                        vlSelf->__Vfunc_leading_zero32__6907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6907__count)));
                            vlSelf->__Vfunc_leading_zero32__6907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6907__count)));
                            vlSelf->__Vfunc_leading_zero32__6907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6907__count)));
                            vlSelf->__Vfunc_leading_zero32__6907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6907__count)));
                            vlSelf->__Vfunc_leading_zero32__6907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6907__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6913__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6913__part 
                            = vlSelf->__Vfunc_leading_zero32__6913__value;
                        vlSelf->__Vfunc_leading_zero32__6913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6913__count)));
                            vlSelf->__Vfunc_leading_zero32__6913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6913__count)));
                            vlSelf->__Vfunc_leading_zero32__6913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6913__count)));
                            vlSelf->__Vfunc_leading_zero32__6913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6913__count)));
                            vlSelf->__Vfunc_leading_zero32__6913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6913__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6919__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6919__part 
                            = vlSelf->__Vfunc_leading_zero32__6919__value;
                        vlSelf->__Vfunc_leading_zero32__6919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6919__count)));
                            vlSelf->__Vfunc_leading_zero32__6919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6919__count)));
                            vlSelf->__Vfunc_leading_zero32__6919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6919__count)));
                            vlSelf->__Vfunc_leading_zero32__6919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6919__count)));
                            vlSelf->__Vfunc_leading_zero32__6919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6919__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6925__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6925__part 
                            = vlSelf->__Vfunc_leading_zero32__6925__value;
                        vlSelf->__Vfunc_leading_zero32__6925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6925__count)));
                            vlSelf->__Vfunc_leading_zero32__6925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6925__count)));
                            vlSelf->__Vfunc_leading_zero32__6925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6925__count)));
                            vlSelf->__Vfunc_leading_zero32__6925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6925__count)));
                            vlSelf->__Vfunc_leading_zero32__6925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6925__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6931__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6931__part 
                            = vlSelf->__Vfunc_leading_zero32__6931__value;
                        vlSelf->__Vfunc_leading_zero32__6931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6931__count)));
                            vlSelf->__Vfunc_leading_zero32__6931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6931__count)));
                            vlSelf->__Vfunc_leading_zero32__6931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6931__count)));
                            vlSelf->__Vfunc_leading_zero32__6931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6931__count)));
                            vlSelf->__Vfunc_leading_zero32__6931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6931__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6937__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6937__part 
                            = vlSelf->__Vfunc_leading_zero32__6937__value;
                        vlSelf->__Vfunc_leading_zero32__6937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6937__count)));
                            vlSelf->__Vfunc_leading_zero32__6937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6937__count)));
                            vlSelf->__Vfunc_leading_zero32__6937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6937__count)));
                            vlSelf->__Vfunc_leading_zero32__6937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6937__count)));
                            vlSelf->__Vfunc_leading_zero32__6937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6937__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6943__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6943__part 
                            = vlSelf->__Vfunc_leading_zero32__6943__value;
                        vlSelf->__Vfunc_leading_zero32__6943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6943__count)));
                            vlSelf->__Vfunc_leading_zero32__6943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6943__count)));
                            vlSelf->__Vfunc_leading_zero32__6943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6943__count)));
                            vlSelf->__Vfunc_leading_zero32__6943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6943__count)));
                            vlSelf->__Vfunc_leading_zero32__6943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6943__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6949__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6949__part 
                            = vlSelf->__Vfunc_leading_zero32__6949__value;
                        vlSelf->__Vfunc_leading_zero32__6949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6949__count)));
                            vlSelf->__Vfunc_leading_zero32__6949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6949__count)));
                            vlSelf->__Vfunc_leading_zero32__6949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6949__count)));
                            vlSelf->__Vfunc_leading_zero32__6949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6949__count)));
                            vlSelf->__Vfunc_leading_zero32__6949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6949__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6955__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6955__part 
                            = vlSelf->__Vfunc_leading_zero32__6955__value;
                        vlSelf->__Vfunc_leading_zero32__6955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6955__count)));
                            vlSelf->__Vfunc_leading_zero32__6955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6955__count)));
                            vlSelf->__Vfunc_leading_zero32__6955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6955__count)));
                            vlSelf->__Vfunc_leading_zero32__6955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6955__count)));
                            vlSelf->__Vfunc_leading_zero32__6955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6955__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6961__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6961__part 
                            = vlSelf->__Vfunc_leading_zero32__6961__value;
                        vlSelf->__Vfunc_leading_zero32__6961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6961__count)));
                            vlSelf->__Vfunc_leading_zero32__6961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6961__count)));
                            vlSelf->__Vfunc_leading_zero32__6961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6961__count)));
                            vlSelf->__Vfunc_leading_zero32__6961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6961__count)));
                            vlSelf->__Vfunc_leading_zero32__6961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6961__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6967__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6967__part 
                            = vlSelf->__Vfunc_leading_zero32__6967__value;
                        vlSelf->__Vfunc_leading_zero32__6967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6967__count)));
                            vlSelf->__Vfunc_leading_zero32__6967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6967__count)));
                            vlSelf->__Vfunc_leading_zero32__6967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6967__count)));
                            vlSelf->__Vfunc_leading_zero32__6967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6967__count)));
                            vlSelf->__Vfunc_leading_zero32__6967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6967__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6973__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6973__part 
                            = vlSelf->__Vfunc_leading_zero32__6973__value;
                        vlSelf->__Vfunc_leading_zero32__6973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6973__count)));
                            vlSelf->__Vfunc_leading_zero32__6973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6973__count)));
                            vlSelf->__Vfunc_leading_zero32__6973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6973__count)));
                            vlSelf->__Vfunc_leading_zero32__6973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6973__count)));
                            vlSelf->__Vfunc_leading_zero32__6973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6973__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6979__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6979__part 
                            = vlSelf->__Vfunc_leading_zero32__6979__value;
                        vlSelf->__Vfunc_leading_zero32__6979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6979__count)));
                            vlSelf->__Vfunc_leading_zero32__6979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6979__count)));
                            vlSelf->__Vfunc_leading_zero32__6979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6979__count)));
                            vlSelf->__Vfunc_leading_zero32__6979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6979__count)));
                            vlSelf->__Vfunc_leading_zero32__6979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6979__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6985__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6985__part 
                            = vlSelf->__Vfunc_leading_zero32__6985__value;
                        vlSelf->__Vfunc_leading_zero32__6985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6985__count)));
                            vlSelf->__Vfunc_leading_zero32__6985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6985__count)));
                            vlSelf->__Vfunc_leading_zero32__6985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6985__count)));
                            vlSelf->__Vfunc_leading_zero32__6985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6985__count)));
                            vlSelf->__Vfunc_leading_zero32__6985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6985__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6991__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6991__part 
                            = vlSelf->__Vfunc_leading_zero32__6991__value;
                        vlSelf->__Vfunc_leading_zero32__6991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6991__count)));
                            vlSelf->__Vfunc_leading_zero32__6991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6991__count)));
                            vlSelf->__Vfunc_leading_zero32__6991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6991__count)));
                            vlSelf->__Vfunc_leading_zero32__6991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6991__count)));
                            vlSelf->__Vfunc_leading_zero32__6991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6991__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6997__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6997__part 
                            = vlSelf->__Vfunc_leading_zero32__6997__value;
                        vlSelf->__Vfunc_leading_zero32__6997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6997__count)));
                            vlSelf->__Vfunc_leading_zero32__6997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6997__count)));
                            vlSelf->__Vfunc_leading_zero32__6997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6997__count)));
                            vlSelf->__Vfunc_leading_zero32__6997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6997__count)));
                            vlSelf->__Vfunc_leading_zero32__6997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6997__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7003__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7003__part 
                            = vlSelf->__Vfunc_leading_zero32__7003__value;
                        vlSelf->__Vfunc_leading_zero32__7003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7003__count)));
                            vlSelf->__Vfunc_leading_zero32__7003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7003__count)));
                            vlSelf->__Vfunc_leading_zero32__7003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7003__count)));
                            vlSelf->__Vfunc_leading_zero32__7003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7003__count)));
                            vlSelf->__Vfunc_leading_zero32__7003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7003__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7009__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7009__part 
                            = vlSelf->__Vfunc_leading_zero32__7009__value;
                        vlSelf->__Vfunc_leading_zero32__7009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7009__count)));
                            vlSelf->__Vfunc_leading_zero32__7009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7009__count)));
                            vlSelf->__Vfunc_leading_zero32__7009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7009__count)));
                            vlSelf->__Vfunc_leading_zero32__7009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7009__count)));
                            vlSelf->__Vfunc_leading_zero32__7009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7009__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7015__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7015__part 
                            = vlSelf->__Vfunc_leading_zero32__7015__value;
                        vlSelf->__Vfunc_leading_zero32__7015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7015__count)));
                            vlSelf->__Vfunc_leading_zero32__7015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7015__count)));
                            vlSelf->__Vfunc_leading_zero32__7015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7015__count)));
                            vlSelf->__Vfunc_leading_zero32__7015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7015__count)));
                            vlSelf->__Vfunc_leading_zero32__7015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7015__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7021__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7021__part 
                            = vlSelf->__Vfunc_leading_zero32__7021__value;
                        vlSelf->__Vfunc_leading_zero32__7021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7021__count)));
                            vlSelf->__Vfunc_leading_zero32__7021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7021__count)));
                            vlSelf->__Vfunc_leading_zero32__7021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7021__count)));
                            vlSelf->__Vfunc_leading_zero32__7021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7021__count)));
                            vlSelf->__Vfunc_leading_zero32__7021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7021__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7027__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7027__part 
                            = vlSelf->__Vfunc_leading_zero32__7027__value;
                        vlSelf->__Vfunc_leading_zero32__7027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7027__count)));
                            vlSelf->__Vfunc_leading_zero32__7027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7027__count)));
                            vlSelf->__Vfunc_leading_zero32__7027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7027__count)));
                            vlSelf->__Vfunc_leading_zero32__7027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7027__count)));
                            vlSelf->__Vfunc_leading_zero32__7027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7027__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7033__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7033__part 
                            = vlSelf->__Vfunc_leading_zero32__7033__value;
                        vlSelf->__Vfunc_leading_zero32__7033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7033__count)));
                            vlSelf->__Vfunc_leading_zero32__7033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7033__count)));
                            vlSelf->__Vfunc_leading_zero32__7033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7033__count)));
                            vlSelf->__Vfunc_leading_zero32__7033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7033__count)));
                            vlSelf->__Vfunc_leading_zero32__7033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7033__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7039__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7039__part 
                            = vlSelf->__Vfunc_leading_zero32__7039__value;
                        vlSelf->__Vfunc_leading_zero32__7039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7039__count)));
                            vlSelf->__Vfunc_leading_zero32__7039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7039__count)));
                            vlSelf->__Vfunc_leading_zero32__7039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7039__count)));
                            vlSelf->__Vfunc_leading_zero32__7039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7039__count)));
                            vlSelf->__Vfunc_leading_zero32__7039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7039__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7045__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7045__part 
                            = vlSelf->__Vfunc_leading_zero32__7045__value;
                        vlSelf->__Vfunc_leading_zero32__7045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7045__count)));
                            vlSelf->__Vfunc_leading_zero32__7045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7045__count)));
                            vlSelf->__Vfunc_leading_zero32__7045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7045__count)));
                            vlSelf->__Vfunc_leading_zero32__7045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7045__count)));
                            vlSelf->__Vfunc_leading_zero32__7045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7045__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7051__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7051__part 
                            = vlSelf->__Vfunc_leading_zero32__7051__value;
                        vlSelf->__Vfunc_leading_zero32__7051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7051__count)));
                            vlSelf->__Vfunc_leading_zero32__7051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7051__count)));
                            vlSelf->__Vfunc_leading_zero32__7051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7051__count)));
                            vlSelf->__Vfunc_leading_zero32__7051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7051__count)));
                            vlSelf->__Vfunc_leading_zero32__7051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7051__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7057__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7057__part 
                            = vlSelf->__Vfunc_leading_zero32__7057__value;
                        vlSelf->__Vfunc_leading_zero32__7057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7057__count)));
                            vlSelf->__Vfunc_leading_zero32__7057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7057__count)));
                            vlSelf->__Vfunc_leading_zero32__7057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7057__count)));
                            vlSelf->__Vfunc_leading_zero32__7057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7057__count)));
                            vlSelf->__Vfunc_leading_zero32__7057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7057__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7063__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7063__part 
                            = vlSelf->__Vfunc_leading_zero32__7063__value;
                        vlSelf->__Vfunc_leading_zero32__7063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7063__count)));
                            vlSelf->__Vfunc_leading_zero32__7063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7063__count)));
                            vlSelf->__Vfunc_leading_zero32__7063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7063__count)));
                            vlSelf->__Vfunc_leading_zero32__7063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7063__count)));
                            vlSelf->__Vfunc_leading_zero32__7063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7063__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7069__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7069__part 
                            = vlSelf->__Vfunc_leading_zero32__7069__value;
                        vlSelf->__Vfunc_leading_zero32__7069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7069__count)));
                            vlSelf->__Vfunc_leading_zero32__7069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7069__count)));
                            vlSelf->__Vfunc_leading_zero32__7069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7069__count)));
                            vlSelf->__Vfunc_leading_zero32__7069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7069__count)));
                            vlSelf->__Vfunc_leading_zero32__7069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7069__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7075__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7075__part 
                            = vlSelf->__Vfunc_leading_zero32__7075__value;
                        vlSelf->__Vfunc_leading_zero32__7075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7075__count)));
                            vlSelf->__Vfunc_leading_zero32__7075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7075__count)));
                            vlSelf->__Vfunc_leading_zero32__7075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7075__count)));
                            vlSelf->__Vfunc_leading_zero32__7075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7075__count)));
                            vlSelf->__Vfunc_leading_zero32__7075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7075__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7081__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7081__part 
                            = vlSelf->__Vfunc_leading_zero32__7081__value;
                        vlSelf->__Vfunc_leading_zero32__7081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7081__count)));
                            vlSelf->__Vfunc_leading_zero32__7081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7081__count)));
                            vlSelf->__Vfunc_leading_zero32__7081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7081__count)));
                            vlSelf->__Vfunc_leading_zero32__7081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7081__count)));
                            vlSelf->__Vfunc_leading_zero32__7081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7081__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7087__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7087__part 
                            = vlSelf->__Vfunc_leading_zero32__7087__value;
                        vlSelf->__Vfunc_leading_zero32__7087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7087__count)));
                            vlSelf->__Vfunc_leading_zero32__7087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7087__count)));
                            vlSelf->__Vfunc_leading_zero32__7087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7087__count)));
                            vlSelf->__Vfunc_leading_zero32__7087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7087__count)));
                            vlSelf->__Vfunc_leading_zero32__7087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7087__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7093__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7093__part 
                            = vlSelf->__Vfunc_leading_zero32__7093__value;
                        vlSelf->__Vfunc_leading_zero32__7093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7093__count)));
                            vlSelf->__Vfunc_leading_zero32__7093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7093__count)));
                            vlSelf->__Vfunc_leading_zero32__7093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7093__count)));
                            vlSelf->__Vfunc_leading_zero32__7093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7093__count)));
                            vlSelf->__Vfunc_leading_zero32__7093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7093__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7099__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7099__part 
                            = vlSelf->__Vfunc_leading_zero32__7099__value;
                        vlSelf->__Vfunc_leading_zero32__7099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7099__count)));
                            vlSelf->__Vfunc_leading_zero32__7099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7099__count)));
                            vlSelf->__Vfunc_leading_zero32__7099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7099__count)));
                            vlSelf->__Vfunc_leading_zero32__7099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7099__count)));
                            vlSelf->__Vfunc_leading_zero32__7099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7099__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7105__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7105__part 
                            = vlSelf->__Vfunc_leading_zero32__7105__value;
                        vlSelf->__Vfunc_leading_zero32__7105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7105__count)));
                            vlSelf->__Vfunc_leading_zero32__7105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7105__count)));
                            vlSelf->__Vfunc_leading_zero32__7105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7105__count)));
                            vlSelf->__Vfunc_leading_zero32__7105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7105__count)));
                            vlSelf->__Vfunc_leading_zero32__7105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7105__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7111__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7111__part 
                            = vlSelf->__Vfunc_leading_zero32__7111__value;
                        vlSelf->__Vfunc_leading_zero32__7111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7111__count)));
                            vlSelf->__Vfunc_leading_zero32__7111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7111__count)));
                            vlSelf->__Vfunc_leading_zero32__7111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7111__count)));
                            vlSelf->__Vfunc_leading_zero32__7111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7111__count)));
                            vlSelf->__Vfunc_leading_zero32__7111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7111__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7117__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7117__part 
                            = vlSelf->__Vfunc_leading_zero32__7117__value;
                        vlSelf->__Vfunc_leading_zero32__7117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7117__count)));
                            vlSelf->__Vfunc_leading_zero32__7117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7117__count)));
                            vlSelf->__Vfunc_leading_zero32__7117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7117__count)));
                            vlSelf->__Vfunc_leading_zero32__7117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7117__count)));
                            vlSelf->__Vfunc_leading_zero32__7117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7117__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7123__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7123__part 
                            = vlSelf->__Vfunc_leading_zero32__7123__value;
                        vlSelf->__Vfunc_leading_zero32__7123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7123__count)));
                            vlSelf->__Vfunc_leading_zero32__7123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7123__count)));
                            vlSelf->__Vfunc_leading_zero32__7123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7123__count)));
                            vlSelf->__Vfunc_leading_zero32__7123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7123__count)));
                            vlSelf->__Vfunc_leading_zero32__7123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7123__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7129__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7129__part 
                            = vlSelf->__Vfunc_leading_zero32__7129__value;
                        vlSelf->__Vfunc_leading_zero32__7129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7129__count)));
                            vlSelf->__Vfunc_leading_zero32__7129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7129__count)));
                            vlSelf->__Vfunc_leading_zero32__7129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7129__count)));
                            vlSelf->__Vfunc_leading_zero32__7129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7129__count)));
                            vlSelf->__Vfunc_leading_zero32__7129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7129__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7135__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7135__part 
                            = vlSelf->__Vfunc_leading_zero32__7135__value;
                        vlSelf->__Vfunc_leading_zero32__7135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7135__count)));
                            vlSelf->__Vfunc_leading_zero32__7135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7135__count)));
                            vlSelf->__Vfunc_leading_zero32__7135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7135__count)));
                            vlSelf->__Vfunc_leading_zero32__7135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7135__count)));
                            vlSelf->__Vfunc_leading_zero32__7135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7135__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7141__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7141__part 
                            = vlSelf->__Vfunc_leading_zero32__7141__value;
                        vlSelf->__Vfunc_leading_zero32__7141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7141__count)));
                            vlSelf->__Vfunc_leading_zero32__7141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7141__count)));
                            vlSelf->__Vfunc_leading_zero32__7141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7141__count)));
                            vlSelf->__Vfunc_leading_zero32__7141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7141__count)));
                            vlSelf->__Vfunc_leading_zero32__7141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7141__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7147__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7147__part 
                            = vlSelf->__Vfunc_leading_zero32__7147__value;
                        vlSelf->__Vfunc_leading_zero32__7147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7147__count)));
                            vlSelf->__Vfunc_leading_zero32__7147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7147__count)));
                            vlSelf->__Vfunc_leading_zero32__7147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7147__count)));
                            vlSelf->__Vfunc_leading_zero32__7147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7147__count)));
                            vlSelf->__Vfunc_leading_zero32__7147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7147__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7153__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7153__part 
                            = vlSelf->__Vfunc_leading_zero32__7153__value;
                        vlSelf->__Vfunc_leading_zero32__7153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7153__count)));
                            vlSelf->__Vfunc_leading_zero32__7153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7153__count)));
                            vlSelf->__Vfunc_leading_zero32__7153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7153__count)));
                            vlSelf->__Vfunc_leading_zero32__7153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7153__count)));
                            vlSelf->__Vfunc_leading_zero32__7153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7153__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7159__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7159__part 
                            = vlSelf->__Vfunc_leading_zero32__7159__value;
                        vlSelf->__Vfunc_leading_zero32__7159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7159__count)));
                            vlSelf->__Vfunc_leading_zero32__7159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7159__count)));
                            vlSelf->__Vfunc_leading_zero32__7159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7159__count)));
                            vlSelf->__Vfunc_leading_zero32__7159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7159__count)));
                            vlSelf->__Vfunc_leading_zero32__7159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7159__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7165__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7165__part 
                            = vlSelf->__Vfunc_leading_zero32__7165__value;
                        vlSelf->__Vfunc_leading_zero32__7165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7165__count)));
                            vlSelf->__Vfunc_leading_zero32__7165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7165__count)));
                            vlSelf->__Vfunc_leading_zero32__7165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7165__count)));
                            vlSelf->__Vfunc_leading_zero32__7165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7165__count)));
                            vlSelf->__Vfunc_leading_zero32__7165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7165__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7171__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7171__part 
                            = vlSelf->__Vfunc_leading_zero32__7171__value;
                        vlSelf->__Vfunc_leading_zero32__7171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7171__count)));
                            vlSelf->__Vfunc_leading_zero32__7171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7171__count)));
                            vlSelf->__Vfunc_leading_zero32__7171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7171__count)));
                            vlSelf->__Vfunc_leading_zero32__7171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7171__count)));
                            vlSelf->__Vfunc_leading_zero32__7171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7171__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7177__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7177__part 
                            = vlSelf->__Vfunc_leading_zero32__7177__value;
                        vlSelf->__Vfunc_leading_zero32__7177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7177__count)));
                            vlSelf->__Vfunc_leading_zero32__7177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7177__count)));
                            vlSelf->__Vfunc_leading_zero32__7177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7177__count)));
                            vlSelf->__Vfunc_leading_zero32__7177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7177__count)));
                            vlSelf->__Vfunc_leading_zero32__7177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7177__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7183__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7183__part 
                            = vlSelf->__Vfunc_leading_zero32__7183__value;
                        vlSelf->__Vfunc_leading_zero32__7183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7183__count)));
                            vlSelf->__Vfunc_leading_zero32__7183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7183__count)));
                            vlSelf->__Vfunc_leading_zero32__7183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7183__count)));
                            vlSelf->__Vfunc_leading_zero32__7183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7183__count)));
                            vlSelf->__Vfunc_leading_zero32__7183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7183__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7309__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7309__part 
                            = vlSelf->__Vfunc_leading_zero32__7309__value;
                        vlSelf->__Vfunc_leading_zero32__7309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7309__count)));
                            vlSelf->__Vfunc_leading_zero32__7309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7309__count)));
                            vlSelf->__Vfunc_leading_zero32__7309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7309__count)));
                            vlSelf->__Vfunc_leading_zero32__7309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7309__count)));
                            vlSelf->__Vfunc_leading_zero32__7309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7309__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7315__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7315__part 
                            = vlSelf->__Vfunc_leading_zero32__7315__value;
                        vlSelf->__Vfunc_leading_zero32__7315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7315__count)));
                            vlSelf->__Vfunc_leading_zero32__7315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7315__count)));
                            vlSelf->__Vfunc_leading_zero32__7315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7315__count)));
                            vlSelf->__Vfunc_leading_zero32__7315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7315__count)));
                            vlSelf->__Vfunc_leading_zero32__7315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7315__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7345__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7345__part 
                            = vlSelf->__Vfunc_leading_zero32__7345__value;
                        vlSelf->__Vfunc_leading_zero32__7345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7345__count)));
                            vlSelf->__Vfunc_leading_zero32__7345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7345__count)));
                            vlSelf->__Vfunc_leading_zero32__7345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7345__count)));
                            vlSelf->__Vfunc_leading_zero32__7345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7345__count)));
                            vlSelf->__Vfunc_leading_zero32__7345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7345__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7351__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7351__part 
                            = vlSelf->__Vfunc_leading_zero32__7351__value;
                        vlSelf->__Vfunc_leading_zero32__7351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7351__count)));
                            vlSelf->__Vfunc_leading_zero32__7351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7351__count)));
                            vlSelf->__Vfunc_leading_zero32__7351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7351__count)));
                            vlSelf->__Vfunc_leading_zero32__7351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7351__count)));
                            vlSelf->__Vfunc_leading_zero32__7351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7351__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7381__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7381__part 
                            = vlSelf->__Vfunc_leading_zero32__7381__value;
                        vlSelf->__Vfunc_leading_zero32__7381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7381__count)));
                            vlSelf->__Vfunc_leading_zero32__7381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7381__count)));
                            vlSelf->__Vfunc_leading_zero32__7381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7381__count)));
                            vlSelf->__Vfunc_leading_zero32__7381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7381__count)));
                            vlSelf->__Vfunc_leading_zero32__7381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7381__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7387__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7387__part 
                            = vlSelf->__Vfunc_leading_zero32__7387__value;
                        vlSelf->__Vfunc_leading_zero32__7387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7387__count)));
                            vlSelf->__Vfunc_leading_zero32__7387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7387__count)));
                            vlSelf->__Vfunc_leading_zero32__7387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7387__count)));
                            vlSelf->__Vfunc_leading_zero32__7387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7387__count)));
                            vlSelf->__Vfunc_leading_zero32__7387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7387__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7417__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7417__part 
                            = vlSelf->__Vfunc_leading_zero32__7417__value;
                        vlSelf->__Vfunc_leading_zero32__7417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7417__count)));
                            vlSelf->__Vfunc_leading_zero32__7417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7417__count)));
                            vlSelf->__Vfunc_leading_zero32__7417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7417__count)));
                            vlSelf->__Vfunc_leading_zero32__7417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7417__count)));
                            vlSelf->__Vfunc_leading_zero32__7417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7417__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7423__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7423__part 
                            = vlSelf->__Vfunc_leading_zero32__7423__value;
                        vlSelf->__Vfunc_leading_zero32__7423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7423__count)));
                            vlSelf->__Vfunc_leading_zero32__7423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7423__count)));
                            vlSelf->__Vfunc_leading_zero32__7423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7423__count)));
                            vlSelf->__Vfunc_leading_zero32__7423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7423__count)));
                            vlSelf->__Vfunc_leading_zero32__7423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7423__Vfuncout)) 
                             - (IData)(5U))));
    if ((5U >= (7U & vlSelf->top_tb__DOT__active_tx))) {
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[0U] 
            = vlSelf->top_tb__DOT__draft_token_image
            [(7U & vlSelf->top_tb__DOT__active_tx)][0U];
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[1U] 
            = vlSelf->top_tb__DOT__draft_token_image
            [(7U & vlSelf->top_tb__DOT__active_tx)][1U];
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[2U] 
            = vlSelf->top_tb__DOT__draft_token_image
            [(7U & vlSelf->top_tb__DOT__active_tx)][2U];
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[3U] 
            = vlSelf->top_tb__DOT__draft_token_image
            [(7U & vlSelf->top_tb__DOT__active_tx)][3U];
    } else {
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[0U] = 0U;
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[1U] = 0U;
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[2U] = 0U;
        vlSelf->top_tb__DOT____Vcellinp__dut__draft_tokens[3U] = 0U;
    }
    __Vfunc_round_bf16__5__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product;
    __Vfunc_round_bf16__5__rounded = (0x1ffffU & ((__Vfunc_round_bf16__5__value 
                                                   >> 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((__Vfunc_round_bf16__5__value 
                                                       >> 0xfU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x17fffU 
                                                                  & __Vfunc_round_bf16__5__value)))))));
    __Vfunc_round_bf16__5__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__6__value 
                        = __Vfunc_round_bf16__5__value;
                    vlSelf->__Vfunc_fp32_invalid__6__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__6__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__6__Vfuncout)) 
                                        | (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_round_bf16__5__rounded 
                                             >> 7U))))
                                        ? 0x10000U : 
                                       (0xffffU & __Vfunc_round_bf16__5__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__5__Vfuncout;
    __Vfunc_round_bf16__10__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum;
    __Vfunc_round_bf16__10__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__10__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__10__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__10__value)))))));
    __Vfunc_round_bf16__10__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__11__value 
                        = __Vfunc_round_bf16__10__value;
                    vlSelf->__Vfunc_fp32_invalid__11__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__11__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__11__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__10__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__10__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__10__Vfuncout;
    __Vfunc_round_bf16__13__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product;
    __Vfunc_round_bf16__13__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__13__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__13__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__13__value)))))));
    __Vfunc_round_bf16__13__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__14__value 
                        = __Vfunc_round_bf16__13__value;
                    vlSelf->__Vfunc_fp32_invalid__14__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__14__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__14__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__13__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__13__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__13__Vfuncout;
    __Vfunc_round_bf16__15__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient;
    __Vfunc_round_bf16__15__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__15__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__15__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__15__value)))))));
    __Vfunc_round_bf16__15__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__16__value 
                        = __Vfunc_round_bf16__15__value;
                    vlSelf->__Vfunc_fp32_invalid__16__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__16__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__16__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__15__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__15__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
        = __Vfunc_round_bf16__15__Vfuncout;
    __Vfunc_round_bf16__35__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient;
    __Vfunc_round_bf16__35__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__35__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__35__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__35__value)))))));
    __Vfunc_round_bf16__35__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__36__value 
                        = __Vfunc_round_bf16__35__value;
                    vlSelf->__Vfunc_fp32_invalid__36__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__36__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__36__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__35__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__35__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__35__Vfuncout;
    __Vfunc_round_bf16__147__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
    __Vfunc_round_bf16__147__rounded = (0x1ffffU & 
                                        ((__Vfunc_round_bf16__147__value 
                                          >> 0x10U) 
                                         + (1U & ((__Vfunc_round_bf16__147__value 
                                                   >> 0xfU) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x17fffU 
                                                              & __Vfunc_round_bf16__147__value)))))));
    __Vfunc_round_bf16__147__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__148__value 
                        = __Vfunc_round_bf16__147__value;
                    vlSelf->__Vfunc_fp32_invalid__148__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__148__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__148__Vfuncout)) 
                                          | (0xffU 
                                             == (0xffU 
                                                 & (__Vfunc_round_bf16__147__rounded 
                                                    >> 7U))))
                                          ? 0x10000U
                                          : (0xffffU 
                                             & __Vfunc_round_bf16__147__rounded));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__147__Vfuncout;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_request_invalid 
        = (1U & ((8U <= vlSelf->top_tb__DOT__token_id) 
                 | ((3U <= vlSelf->top_tb__DOT__token_pos) 
                    | ((IData)(vlSelf->top_tb__DOT__new_sequence)
                        ? (0U != vlSelf->top_tb__DOT__token_pos)
                        : ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__sequence_valid)) 
                           | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__exhausted) 
                              | ((vlSelf->top_tb__DOT__token_pos 
                                  != vlSelf->top_tb__DOT__dut__DOT__native__DOT__next_position) 
                                 | (((~ (IData)(vlSelf->top_tb__DOT__token_phase)) 
                                     & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decode_started)) 
                                    | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__pending_final) 
                                       & ((~ (IData)(vlSelf->top_tb__DOT__token_phase)) 
                                          | ((vlSelf->top_tb__DOT__token_pos 
                                              != vlSelf->top_tb__DOT__dut__DOT__native__DOT__pending_position) 
                                             | (vlSelf->top_tb__DOT__token_id 
                                                != vlSelf->top_tb__DOT__dut__DOT__native__DOT__pending_token))))))))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                                      << 0x10U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x10U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x11U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x12U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x13U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x14U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x15U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x16U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x17U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x18U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x19U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x20U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x21U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x22U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x23U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x24U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x25U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x26U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x27U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x28U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x29U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x30U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x31U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x32U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x33U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x34U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x35U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x36U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x37U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x38U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x39U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x40U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x41U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x42U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x43U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x44U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x45U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x46U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x47U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x48U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x49U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x50U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x51U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x52U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x53U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x54U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x55U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x56U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x57U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x58U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x59U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x60U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x61U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x62U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x63U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x64U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x65U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x66U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x67U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x68U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x69U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x70U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x71U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x72U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x73U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x74U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x75U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x76U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x77U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x78U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x79U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x80U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x81U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x82U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x83U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x84U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x85U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x86U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x87U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x88U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x89U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x90U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x91U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x92U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x93U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x94U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x95U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x96U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x97U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x98U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x99U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xabU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xacU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xadU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xafU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbcU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbdU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbfU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xccU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xccU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcdU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xceU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xceU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcfU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdcU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xddU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xddU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdfU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xebU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xebU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xecU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xecU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xedU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xedU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xefU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xefU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfcU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfdU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xffU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xffU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xbU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xcU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xdU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xfU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x10U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x11U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x12U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x13U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x14U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x15U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x16U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x17U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x18U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x19U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x20U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x21U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x22U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x23U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x24U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x25U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x26U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x27U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x28U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x29U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x30U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x31U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x32U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x33U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x34U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x35U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x36U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x37U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x38U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x39U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x40U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x41U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x42U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x43U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x44U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x45U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x46U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x47U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x48U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x49U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x50U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x51U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x52U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x53U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x54U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x55U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x56U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x57U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x58U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x59U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x60U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x61U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x62U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x63U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x64U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x65U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x66U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x67U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x68U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x69U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x70U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x71U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x72U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x73U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x74U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x75U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x76U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x77U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x78U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x79U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x80U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x81U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x82U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x83U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x84U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x85U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x86U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x87U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x88U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x89U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x90U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x91U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x92U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x93U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x94U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x95U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x96U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x97U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x98U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x99U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9aU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9bU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9cU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9dU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9eU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9fU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa6U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa7U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa8U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa9U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaaU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xabU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xacU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xadU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaeU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xafU]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb0U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb1U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb2U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb3U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb4U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb5U]));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb6U]));
}
