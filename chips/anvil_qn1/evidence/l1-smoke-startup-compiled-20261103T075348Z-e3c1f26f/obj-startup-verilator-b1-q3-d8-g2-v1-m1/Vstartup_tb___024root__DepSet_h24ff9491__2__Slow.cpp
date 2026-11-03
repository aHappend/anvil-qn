// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__3(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__3\n"); );
    // Init
    IData/*16:0*/ __Vfunc_round_bf16__50__Vfuncout;
    __Vfunc_round_bf16__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__50__value;
    __Vfunc_round_bf16__50__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__50__rounded;
    __Vfunc_round_bf16__50__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__55__Vfuncout;
    __Vfunc_round_bf16__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__55__value;
    __Vfunc_round_bf16__55__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__55__rounded;
    __Vfunc_round_bf16__55__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__58__Vfuncout;
    __Vfunc_round_bf16__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__58__value;
    __Vfunc_round_bf16__58__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__58__rounded;
    __Vfunc_round_bf16__58__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__60__Vfuncout;
    __Vfunc_round_bf16__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__60__value;
    __Vfunc_round_bf16__60__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__60__rounded;
    __Vfunc_round_bf16__60__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__80__Vfuncout;
    __Vfunc_round_bf16__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__80__value;
    __Vfunc_round_bf16__80__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__80__rounded;
    __Vfunc_round_bf16__80__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__192__Vfuncout;
    __Vfunc_round_bf16__192__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__192__value;
    __Vfunc_round_bf16__192__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__192__rounded;
    __Vfunc_round_bf16__192__rounded = 0;
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6622__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6622__part 
                            = vlSelf->__Vfunc_leading_zero32__6622__value;
                        vlSelf->__Vfunc_leading_zero32__6622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6622__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6628__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6628__part 
                            = vlSelf->__Vfunc_leading_zero32__6628__value;
                        vlSelf->__Vfunc_leading_zero32__6628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6628__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6634__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6634__part 
                            = vlSelf->__Vfunc_leading_zero32__6634__value;
                        vlSelf->__Vfunc_leading_zero32__6634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6634__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6640__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6640__part 
                            = vlSelf->__Vfunc_leading_zero32__6640__value;
                        vlSelf->__Vfunc_leading_zero32__6640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6640__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6646__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6646__part 
                            = vlSelf->__Vfunc_leading_zero32__6646__value;
                        vlSelf->__Vfunc_leading_zero32__6646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6646__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6652__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6652__part 
                            = vlSelf->__Vfunc_leading_zero32__6652__value;
                        vlSelf->__Vfunc_leading_zero32__6652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6652__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6658__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6658__part 
                            = vlSelf->__Vfunc_leading_zero32__6658__value;
                        vlSelf->__Vfunc_leading_zero32__6658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6658__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6664__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6664__part 
                            = vlSelf->__Vfunc_leading_zero32__6664__value;
                        vlSelf->__Vfunc_leading_zero32__6664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6664__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6670__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6670__part 
                            = vlSelf->__Vfunc_leading_zero32__6670__value;
                        vlSelf->__Vfunc_leading_zero32__6670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6670__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6676__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6676__part 
                            = vlSelf->__Vfunc_leading_zero32__6676__value;
                        vlSelf->__Vfunc_leading_zero32__6676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6676__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6682__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6682__part 
                            = vlSelf->__Vfunc_leading_zero32__6682__value;
                        vlSelf->__Vfunc_leading_zero32__6682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6682__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6688__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6688__part 
                            = vlSelf->__Vfunc_leading_zero32__6688__value;
                        vlSelf->__Vfunc_leading_zero32__6688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6688__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6694__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6694__part 
                            = vlSelf->__Vfunc_leading_zero32__6694__value;
                        vlSelf->__Vfunc_leading_zero32__6694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6694__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6700__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6700__part 
                            = vlSelf->__Vfunc_leading_zero32__6700__value;
                        vlSelf->__Vfunc_leading_zero32__6700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6700__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6706__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6706__part 
                            = vlSelf->__Vfunc_leading_zero32__6706__value;
                        vlSelf->__Vfunc_leading_zero32__6706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6706__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6712__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6712__part 
                            = vlSelf->__Vfunc_leading_zero32__6712__value;
                        vlSelf->__Vfunc_leading_zero32__6712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6712__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6718__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6718__part 
                            = vlSelf->__Vfunc_leading_zero32__6718__value;
                        vlSelf->__Vfunc_leading_zero32__6718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6718__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6724__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6724__part 
                            = vlSelf->__Vfunc_leading_zero32__6724__value;
                        vlSelf->__Vfunc_leading_zero32__6724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6724__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6730__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6730__part 
                            = vlSelf->__Vfunc_leading_zero32__6730__value;
                        vlSelf->__Vfunc_leading_zero32__6730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6730__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6736__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6736__part 
                            = vlSelf->__Vfunc_leading_zero32__6736__value;
                        vlSelf->__Vfunc_leading_zero32__6736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6736__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6742__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6742__part 
                            = vlSelf->__Vfunc_leading_zero32__6742__value;
                        vlSelf->__Vfunc_leading_zero32__6742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6742__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6748__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6748__part 
                            = vlSelf->__Vfunc_leading_zero32__6748__value;
                        vlSelf->__Vfunc_leading_zero32__6748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6748__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6754__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6754__part 
                            = vlSelf->__Vfunc_leading_zero32__6754__value;
                        vlSelf->__Vfunc_leading_zero32__6754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6754__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6760__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6760__part 
                            = vlSelf->__Vfunc_leading_zero32__6760__value;
                        vlSelf->__Vfunc_leading_zero32__6760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6760__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6766__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6766__part 
                            = vlSelf->__Vfunc_leading_zero32__6766__value;
                        vlSelf->__Vfunc_leading_zero32__6766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6766__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6772__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6772__part 
                            = vlSelf->__Vfunc_leading_zero32__6772__value;
                        vlSelf->__Vfunc_leading_zero32__6772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6772__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6778__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6778__part 
                            = vlSelf->__Vfunc_leading_zero32__6778__value;
                        vlSelf->__Vfunc_leading_zero32__6778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6778__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6784__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6784__part 
                            = vlSelf->__Vfunc_leading_zero32__6784__value;
                        vlSelf->__Vfunc_leading_zero32__6784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6784__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6790__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6790__part 
                            = vlSelf->__Vfunc_leading_zero32__6790__value;
                        vlSelf->__Vfunc_leading_zero32__6790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6790__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6796__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6796__part 
                            = vlSelf->__Vfunc_leading_zero32__6796__value;
                        vlSelf->__Vfunc_leading_zero32__6796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6796__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6802__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6802__part 
                            = vlSelf->__Vfunc_leading_zero32__6802__value;
                        vlSelf->__Vfunc_leading_zero32__6802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6802__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6808__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6808__part 
                            = vlSelf->__Vfunc_leading_zero32__6808__value;
                        vlSelf->__Vfunc_leading_zero32__6808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6808__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6814__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6814__part 
                            = vlSelf->__Vfunc_leading_zero32__6814__value;
                        vlSelf->__Vfunc_leading_zero32__6814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6814__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6820__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6820__part 
                            = vlSelf->__Vfunc_leading_zero32__6820__value;
                        vlSelf->__Vfunc_leading_zero32__6820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6820__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6826__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6826__part 
                            = vlSelf->__Vfunc_leading_zero32__6826__value;
                        vlSelf->__Vfunc_leading_zero32__6826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6826__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6832__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6832__part 
                            = vlSelf->__Vfunc_leading_zero32__6832__value;
                        vlSelf->__Vfunc_leading_zero32__6832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6832__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6838__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6838__part 
                            = vlSelf->__Vfunc_leading_zero32__6838__value;
                        vlSelf->__Vfunc_leading_zero32__6838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6838__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6844__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6844__part 
                            = vlSelf->__Vfunc_leading_zero32__6844__value;
                        vlSelf->__Vfunc_leading_zero32__6844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6844__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6850__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6850__part 
                            = vlSelf->__Vfunc_leading_zero32__6850__value;
                        vlSelf->__Vfunc_leading_zero32__6850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6850__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6856__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6856__part 
                            = vlSelf->__Vfunc_leading_zero32__6856__value;
                        vlSelf->__Vfunc_leading_zero32__6856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6856__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6862__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6862__part 
                            = vlSelf->__Vfunc_leading_zero32__6862__value;
                        vlSelf->__Vfunc_leading_zero32__6862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6862__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6868__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6868__part 
                            = vlSelf->__Vfunc_leading_zero32__6868__value;
                        vlSelf->__Vfunc_leading_zero32__6868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6868__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6874__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6874__part 
                            = vlSelf->__Vfunc_leading_zero32__6874__value;
                        vlSelf->__Vfunc_leading_zero32__6874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6874__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6880__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6880__part 
                            = vlSelf->__Vfunc_leading_zero32__6880__value;
                        vlSelf->__Vfunc_leading_zero32__6880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6880__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6886__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6886__part 
                            = vlSelf->__Vfunc_leading_zero32__6886__value;
                        vlSelf->__Vfunc_leading_zero32__6886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6886__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6892__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6892__part 
                            = vlSelf->__Vfunc_leading_zero32__6892__value;
                        vlSelf->__Vfunc_leading_zero32__6892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6892__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6898__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6898__part 
                            = vlSelf->__Vfunc_leading_zero32__6898__value;
                        vlSelf->__Vfunc_leading_zero32__6898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6898__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6904__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6904__part 
                            = vlSelf->__Vfunc_leading_zero32__6904__value;
                        vlSelf->__Vfunc_leading_zero32__6904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6904__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6910__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6910__part 
                            = vlSelf->__Vfunc_leading_zero32__6910__value;
                        vlSelf->__Vfunc_leading_zero32__6910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6910__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6916__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6916__part 
                            = vlSelf->__Vfunc_leading_zero32__6916__value;
                        vlSelf->__Vfunc_leading_zero32__6916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6916__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6922__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6922__part 
                            = vlSelf->__Vfunc_leading_zero32__6922__value;
                        vlSelf->__Vfunc_leading_zero32__6922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6922__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6928__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6928__part 
                            = vlSelf->__Vfunc_leading_zero32__6928__value;
                        vlSelf->__Vfunc_leading_zero32__6928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6928__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6934__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6934__part 
                            = vlSelf->__Vfunc_leading_zero32__6934__value;
                        vlSelf->__Vfunc_leading_zero32__6934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6934__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6940__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6940__part 
                            = vlSelf->__Vfunc_leading_zero32__6940__value;
                        vlSelf->__Vfunc_leading_zero32__6940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6940__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6946__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6946__part 
                            = vlSelf->__Vfunc_leading_zero32__6946__value;
                        vlSelf->__Vfunc_leading_zero32__6946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6946__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6952__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6952__part 
                            = vlSelf->__Vfunc_leading_zero32__6952__value;
                        vlSelf->__Vfunc_leading_zero32__6952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6952__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6958__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6958__part 
                            = vlSelf->__Vfunc_leading_zero32__6958__value;
                        vlSelf->__Vfunc_leading_zero32__6958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6958__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6964__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6964__part 
                            = vlSelf->__Vfunc_leading_zero32__6964__value;
                        vlSelf->__Vfunc_leading_zero32__6964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6964__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6970__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6970__part 
                            = vlSelf->__Vfunc_leading_zero32__6970__value;
                        vlSelf->__Vfunc_leading_zero32__6970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6970__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6976__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6976__part 
                            = vlSelf->__Vfunc_leading_zero32__6976__value;
                        vlSelf->__Vfunc_leading_zero32__6976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6976__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6982__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6982__part 
                            = vlSelf->__Vfunc_leading_zero32__6982__value;
                        vlSelf->__Vfunc_leading_zero32__6982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6982__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6988__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6988__part 
                            = vlSelf->__Vfunc_leading_zero32__6988__value;
                        vlSelf->__Vfunc_leading_zero32__6988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6988__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6994__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6994__part 
                            = vlSelf->__Vfunc_leading_zero32__6994__value;
                        vlSelf->__Vfunc_leading_zero32__6994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6994__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7000__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7000__part 
                            = vlSelf->__Vfunc_leading_zero32__7000__value;
                        vlSelf->__Vfunc_leading_zero32__7000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7000__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7006__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7006__part 
                            = vlSelf->__Vfunc_leading_zero32__7006__value;
                        vlSelf->__Vfunc_leading_zero32__7006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7006__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7012__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7012__part 
                            = vlSelf->__Vfunc_leading_zero32__7012__value;
                        vlSelf->__Vfunc_leading_zero32__7012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7012__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7018__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7018__part 
                            = vlSelf->__Vfunc_leading_zero32__7018__value;
                        vlSelf->__Vfunc_leading_zero32__7018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7018__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7024__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7024__part 
                            = vlSelf->__Vfunc_leading_zero32__7024__value;
                        vlSelf->__Vfunc_leading_zero32__7024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7024__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7030__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7030__part 
                            = vlSelf->__Vfunc_leading_zero32__7030__value;
                        vlSelf->__Vfunc_leading_zero32__7030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7030__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7036__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7036__part 
                            = vlSelf->__Vfunc_leading_zero32__7036__value;
                        vlSelf->__Vfunc_leading_zero32__7036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7036__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7042__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7042__part 
                            = vlSelf->__Vfunc_leading_zero32__7042__value;
                        vlSelf->__Vfunc_leading_zero32__7042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7042__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7048__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7048__part 
                            = vlSelf->__Vfunc_leading_zero32__7048__value;
                        vlSelf->__Vfunc_leading_zero32__7048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7048__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7054__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7054__part 
                            = vlSelf->__Vfunc_leading_zero32__7054__value;
                        vlSelf->__Vfunc_leading_zero32__7054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7054__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7060__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7060__part 
                            = vlSelf->__Vfunc_leading_zero32__7060__value;
                        vlSelf->__Vfunc_leading_zero32__7060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7060__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7066__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7066__part 
                            = vlSelf->__Vfunc_leading_zero32__7066__value;
                        vlSelf->__Vfunc_leading_zero32__7066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7066__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7072__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7072__part 
                            = vlSelf->__Vfunc_leading_zero32__7072__value;
                        vlSelf->__Vfunc_leading_zero32__7072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7072__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7078__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7078__part 
                            = vlSelf->__Vfunc_leading_zero32__7078__value;
                        vlSelf->__Vfunc_leading_zero32__7078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7078__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7084__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7084__part 
                            = vlSelf->__Vfunc_leading_zero32__7084__value;
                        vlSelf->__Vfunc_leading_zero32__7084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7084__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7090__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7090__part 
                            = vlSelf->__Vfunc_leading_zero32__7090__value;
                        vlSelf->__Vfunc_leading_zero32__7090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7090__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7096__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7096__part 
                            = vlSelf->__Vfunc_leading_zero32__7096__value;
                        vlSelf->__Vfunc_leading_zero32__7096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7096__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7102__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7102__part 
                            = vlSelf->__Vfunc_leading_zero32__7102__value;
                        vlSelf->__Vfunc_leading_zero32__7102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7102__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7108__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7108__part 
                            = vlSelf->__Vfunc_leading_zero32__7108__value;
                        vlSelf->__Vfunc_leading_zero32__7108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7108__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7114__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7114__part 
                            = vlSelf->__Vfunc_leading_zero32__7114__value;
                        vlSelf->__Vfunc_leading_zero32__7114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7114__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7120__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7120__part 
                            = vlSelf->__Vfunc_leading_zero32__7120__value;
                        vlSelf->__Vfunc_leading_zero32__7120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7120__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7126__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7126__part 
                            = vlSelf->__Vfunc_leading_zero32__7126__value;
                        vlSelf->__Vfunc_leading_zero32__7126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7126__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7132__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7132__part 
                            = vlSelf->__Vfunc_leading_zero32__7132__value;
                        vlSelf->__Vfunc_leading_zero32__7132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7132__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7138__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7138__part 
                            = vlSelf->__Vfunc_leading_zero32__7138__value;
                        vlSelf->__Vfunc_leading_zero32__7138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7138__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7144__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7144__part 
                            = vlSelf->__Vfunc_leading_zero32__7144__value;
                        vlSelf->__Vfunc_leading_zero32__7144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7144__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7150__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7150__part 
                            = vlSelf->__Vfunc_leading_zero32__7150__value;
                        vlSelf->__Vfunc_leading_zero32__7150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7150__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7156__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7156__part 
                            = vlSelf->__Vfunc_leading_zero32__7156__value;
                        vlSelf->__Vfunc_leading_zero32__7156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7156__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7162__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7162__part 
                            = vlSelf->__Vfunc_leading_zero32__7162__value;
                        vlSelf->__Vfunc_leading_zero32__7162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7162__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7168__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7168__part 
                            = vlSelf->__Vfunc_leading_zero32__7168__value;
                        vlSelf->__Vfunc_leading_zero32__7168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7168__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7174__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7174__part 
                            = vlSelf->__Vfunc_leading_zero32__7174__value;
                        vlSelf->__Vfunc_leading_zero32__7174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7174__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7180__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7180__part 
                            = vlSelf->__Vfunc_leading_zero32__7180__value;
                        vlSelf->__Vfunc_leading_zero32__7180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7180__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7186__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7186__part 
                            = vlSelf->__Vfunc_leading_zero32__7186__value;
                        vlSelf->__Vfunc_leading_zero32__7186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7186__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7192__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7192__part 
                            = vlSelf->__Vfunc_leading_zero32__7192__value;
                        vlSelf->__Vfunc_leading_zero32__7192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7192__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7198__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7198__part 
                            = vlSelf->__Vfunc_leading_zero32__7198__value;
                        vlSelf->__Vfunc_leading_zero32__7198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7198__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7204__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7204__part 
                            = vlSelf->__Vfunc_leading_zero32__7204__value;
                        vlSelf->__Vfunc_leading_zero32__7204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7204__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7210__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7210__part 
                            = vlSelf->__Vfunc_leading_zero32__7210__value;
                        vlSelf->__Vfunc_leading_zero32__7210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7210__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7216__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7216__part 
                            = vlSelf->__Vfunc_leading_zero32__7216__value;
                        vlSelf->__Vfunc_leading_zero32__7216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7216__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7222__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7222__part 
                            = vlSelf->__Vfunc_leading_zero32__7222__value;
                        vlSelf->__Vfunc_leading_zero32__7222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7222__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7228__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7228__part 
                            = vlSelf->__Vfunc_leading_zero32__7228__value;
                        vlSelf->__Vfunc_leading_zero32__7228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7228__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7354__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7354__part 
                            = vlSelf->__Vfunc_leading_zero32__7354__value;
                        vlSelf->__Vfunc_leading_zero32__7354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7354__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7360__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7360__part 
                            = vlSelf->__Vfunc_leading_zero32__7360__value;
                        vlSelf->__Vfunc_leading_zero32__7360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7360__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7390__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7390__part 
                            = vlSelf->__Vfunc_leading_zero32__7390__value;
                        vlSelf->__Vfunc_leading_zero32__7390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7390__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7396__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7396__part 
                            = vlSelf->__Vfunc_leading_zero32__7396__value;
                        vlSelf->__Vfunc_leading_zero32__7396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7396__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7426__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7426__part 
                            = vlSelf->__Vfunc_leading_zero32__7426__value;
                        vlSelf->__Vfunc_leading_zero32__7426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7426__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7432__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7432__part 
                            = vlSelf->__Vfunc_leading_zero32__7432__value;
                        vlSelf->__Vfunc_leading_zero32__7432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7432__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7462__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7462__part 
                            = vlSelf->__Vfunc_leading_zero32__7462__value;
                        vlSelf->__Vfunc_leading_zero32__7462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7462__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7468__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7468__part 
                            = vlSelf->__Vfunc_leading_zero32__7468__value;
                        vlSelf->__Vfunc_leading_zero32__7468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7468__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_bf16__50__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product;
    __Vfunc_round_bf16__50__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__50__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__50__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__50__value)))))));
    __Vfunc_round_bf16__50__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__51__value 
                        = __Vfunc_round_bf16__50__value;
                    vlSelf->__Vfunc_fp32_invalid__51__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__51__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__51__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__50__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__50__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__50__Vfuncout;
    __Vfunc_round_bf16__55__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum;
    __Vfunc_round_bf16__55__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__55__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__55__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__55__value)))))));
    __Vfunc_round_bf16__55__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__56__value 
                        = __Vfunc_round_bf16__55__value;
                    vlSelf->__Vfunc_fp32_invalid__56__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__56__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__56__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__55__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__55__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__55__Vfuncout;
    __Vfunc_round_bf16__58__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product;
    __Vfunc_round_bf16__58__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__58__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__58__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__58__value)))))));
    __Vfunc_round_bf16__58__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__59__value 
                        = __Vfunc_round_bf16__58__value;
                    vlSelf->__Vfunc_fp32_invalid__59__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__59__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__59__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__58__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__58__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__58__Vfuncout;
    __Vfunc_round_bf16__60__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient;
    __Vfunc_round_bf16__60__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__60__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__60__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__60__value)))))));
    __Vfunc_round_bf16__60__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__61__value 
                        = __Vfunc_round_bf16__60__value;
                    vlSelf->__Vfunc_fp32_invalid__61__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__61__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__61__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__60__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__60__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
        = __Vfunc_round_bf16__60__Vfuncout;
    __Vfunc_round_bf16__80__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient;
    __Vfunc_round_bf16__80__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__80__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__80__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__80__value)))))));
    __Vfunc_round_bf16__80__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__81__value 
                        = __Vfunc_round_bf16__80__value;
                    vlSelf->__Vfunc_fp32_invalid__81__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__81__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__81__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__80__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__80__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__80__Vfuncout;
    __Vfunc_round_bf16__192__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
    __Vfunc_round_bf16__192__rounded = (0x1ffffU & 
                                        ((__Vfunc_round_bf16__192__value 
                                          >> 0x10U) 
                                         + (1U & ((__Vfunc_round_bf16__192__value 
                                                   >> 0xfU) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x17fffU 
                                                              & __Vfunc_round_bf16__192__value)))))));
    __Vfunc_round_bf16__192__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__193__value 
                        = __Vfunc_round_bf16__192__value;
                    vlSelf->__Vfunc_fp32_invalid__193__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__193__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__193__Vfuncout)) 
                                          | (0xffU 
                                             == (0xffU 
                                                 & (__Vfunc_round_bf16__192__rounded 
                                                    >> 7U))))
                                          ? 0x10000U
                                          : (0xffffU 
                                             & __Vfunc_round_bf16__192__rounded));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__192__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                                      << 0x10U)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x10U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x11U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x12U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x13U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x14U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x15U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x16U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x17U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x18U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x19U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x20U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x21U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x22U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x23U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x24U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x25U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x26U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x27U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x28U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x29U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x30U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x31U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x32U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x33U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x34U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x35U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x36U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x37U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x38U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x39U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x40U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x41U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x42U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x43U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x44U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x45U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x46U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x47U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x48U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x49U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x50U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x51U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x52U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x53U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x54U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x55U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x56U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x57U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x58U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x59U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x60U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x61U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x62U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x63U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x64U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x65U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x66U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x67U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x68U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x69U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x70U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x71U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x72U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x73U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x74U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x75U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x76U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x77U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x78U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x79U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x80U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x81U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x82U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x83U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x84U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x85U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x86U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x87U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x88U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x89U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x90U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x91U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x92U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x93U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x94U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x95U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x96U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x97U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x98U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x99U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xabU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xacU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xadU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xafU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbcU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbdU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbfU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xccU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xccU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcdU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xceU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xceU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcfU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdcU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xddU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xddU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdfU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xebU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xebU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xecU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xecU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xedU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xedU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xefU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xefU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfcU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfdU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xffU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xffU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xbU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xcU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xdU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xfU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x10U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x11U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x12U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x13U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x14U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x15U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x16U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x17U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x18U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x19U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x20U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x21U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x22U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x23U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x24U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x25U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x26U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x27U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x28U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x29U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x30U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x31U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x32U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x33U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x34U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x35U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x36U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x37U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x38U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x39U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x40U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x41U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x42U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x43U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x44U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x45U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x46U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x47U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x48U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x49U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x50U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x51U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x52U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x53U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x54U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x55U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x56U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x57U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x58U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x59U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x60U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x61U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x62U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x63U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x64U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x65U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x66U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x67U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x68U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x69U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x70U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x71U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x72U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x73U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x74U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x75U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x76U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x77U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x78U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x79U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x80U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x81U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x82U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x83U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x84U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x85U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x86U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x87U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x88U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x89U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x90U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x91U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x92U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x93U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x94U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x95U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x96U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x97U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x98U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x99U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9aU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9bU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9cU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9dU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9eU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x9fU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa3U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa4U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa5U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa6U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa7U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa8U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xa9U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaaU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xabU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xacU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xadU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaeU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xafU]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb0U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb1U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb2U]));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xb3U]));
}
