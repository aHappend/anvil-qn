// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscalar_tb.h for the primary calling header

#include "Vscalar_tb__pch.h"
#include "Vscalar_tb__Syms.h"
#include "Vscalar_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__0(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ scalar_tb__DOT__fd;
    scalar_tb__DOT__fd = 0;
    IData/*31:0*/ scalar_tb__DOT__rc;
    scalar_tb__DOT__rc = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->scalar_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                       24);
    if (VL_UNLIKELY((0ULL != (((QData)((IData)(vlSelf->scalar_tb__DOT__in_ready)) 
                               << 0x22U) | (((QData)((IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->scalar_tb__DOT__out_valid)
                                                                  ? vlSelf->scalar_tb__DOT__dut__DOT__data
                                                                  : 0U))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                                                                  & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:19: Assertion failed in %Nscalar_tb.reset_outputs: SCALAR_RESET\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 19, "");
    }
    co_await vlSelf->__VtrigSched_he0636b2e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge scalar_tb.clk)", 
                                                       "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                       25);
    vlSelf->scalar_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                       25);
    __Vtemp_1[0U] = 0x733d2573U;
    __Vtemp_1[1U] = 0x63746f72U;
    __Vtemp_1[2U] = 0x7665U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INW(4096, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                            vlSelf->scalar_tb__DOT__filename)))) {
        VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:26: Assertion failed in %Nscalar_tb: NO_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 26, "");
    }
    scalar_tb__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(128, vlSelf->scalar_tb__DOT__filename)
                                     , std::string{"r"});
    ;
    if (VL_UNLIKELY((1U & (~ (IData)((0U != scalar_tb__DOT__fd)))))) {
        VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:27: Assertion failed in %Nscalar_tb: OPEN_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 27, "");
    }
    scalar_tb__DOT__rc = VL_FSCANF_IX(scalar_tb__DOT__fd,"%# %x %x %# %x %#\n",
                                      32,&(vlSelf->scalar_tb__DOT__operation),
                                      32,&(vlSelf->scalar_tb__DOT__in_a),
                                      32,&(vlSelf->scalar_tb__DOT__in_b),
                                      32,&(vlSelf->scalar_tb__DOT__error_value),
                                      32,&(vlSelf->scalar_tb__DOT__expected),
                                      32,&(vlSelf->scalar_tb__DOT__expected_error)) ;
    while ((6U == scalar_tb__DOT__rc)) {
        co_await vlSelf->__VtrigSched_he0636b2e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           31);
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->scalar_tb__DOT__in_ready)) 
                               | (IData)(vlSelf->scalar_tb__DOT__out_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:32: Assertion failed in %Nscalar_tb: SCALAR_NOT_READY\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 32, "");
        }
        vlSelf->scalar_tb__DOT__in_op = (7U & vlSelf->scalar_tb__DOT__operation);
        vlSelf->scalar_tb__DOT__in_error = (1U & vlSelf->scalar_tb__DOT__error_value);
        vlSelf->scalar_tb__DOT__in_valid = 1U;
        vlSelf->scalar_tb__DOT__out_ready = 0U;
        co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           34);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                           34);
        if (VL_UNLIKELY(((IData)(vlSelf->scalar_tb__DOT__in_ready) 
                         | (IData)(vlSelf->scalar_tb__DOT__out_valid)))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:35: Assertion failed in %Nscalar_tb: SCALAR_ACCEPT\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 35, "");
        }
        co_await vlSelf->__VtrigSched_he0636b2e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           36);
        vlSelf->scalar_tb__DOT__in_valid = 0U;
        vlSelf->scalar_tb__DOT__cycles = 0U;
        while (((~ (IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->scalar_tb__DOT__cycles))) {
            co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge scalar_tb.clk)", 
                                                               "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                               38);
            co_await vlSelf->__VdlySched.delay(1ULL, 
                                               nullptr, 
                                               "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                               38);
            vlSelf->scalar_tb__DOT__cycles = ((IData)(1U) 
                                              + vlSelf->scalar_tb__DOT__cycles);
        }
        if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                                | (((IData)(vlSelf->scalar_tb__DOT__out_valid)
                                     ? vlSelf->scalar_tb__DOT__dut__DOT__data
                                     : 0U) != vlSelf->scalar_tb__DOT__expected)) 
                               | (((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                                   & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)) 
                                  != (1U & vlSelf->scalar_tb__DOT__expected_error)))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:41: Assertion failed in %Nscalar_tb: SCALAR_COMPARE case=%0d op=%0d a=%x b=%x got=%x expected=%x error=%b expected_error=%b cycles=%0d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->scalar_tb__DOT__count,
                      32,vlSelf->scalar_tb__DOT__operation,
                      32,vlSelf->scalar_tb__DOT__in_a,
                      32,vlSelf->scalar_tb__DOT__in_b,
                      32,((IData)(vlSelf->scalar_tb__DOT__out_valid)
                           ? vlSelf->scalar_tb__DOT__dut__DOT__data
                           : 0U),32,vlSelf->scalar_tb__DOT__expected,
                      1,((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                         & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)),
                      1,(1U & vlSelf->scalar_tb__DOT__expected_error),
                      32,vlSelf->scalar_tb__DOT__cycles);
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 41, "");
        }
        co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           44);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                           44);
        if (VL_UNLIKELY((1U & ((((~ (IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                                 | (((IData)(vlSelf->scalar_tb__DOT__out_valid)
                                      ? vlSelf->scalar_tb__DOT__dut__DOT__data
                                      : 0U) != vlSelf->scalar_tb__DOT__expected)) 
                                | (((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                                    & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)) 
                                   != (1U & vlSelf->scalar_tb__DOT__expected_error))) 
                               | (IData)(vlSelf->scalar_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:46: Assertion failed in %Nscalar_tb: SCALAR_STALL\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 46, "");
        }
        co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           44);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                           44);
        if (VL_UNLIKELY((1U & ((((~ (IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                                 | (((IData)(vlSelf->scalar_tb__DOT__out_valid)
                                      ? vlSelf->scalar_tb__DOT__dut__DOT__data
                                      : 0U) != vlSelf->scalar_tb__DOT__expected)) 
                                | (((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                                    & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)) 
                                   != (1U & vlSelf->scalar_tb__DOT__expected_error))) 
                               | (IData)(vlSelf->scalar_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:46: Assertion failed in %Nscalar_tb: SCALAR_STALL\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 46, "");
        }
        co_await vlSelf->__VtrigSched_he0636b2e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           48);
        vlSelf->scalar_tb__DOT__out_ready = 1U;
        co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           49);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                           49);
        if (VL_UNLIKELY((1U & ((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                               | (~ (IData)(vlSelf->scalar_tb__DOT__in_ready)))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:50: Assertion failed in %Nscalar_tb: SCALAR_RETIRE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 50, "");
        }
        co_await vlSelf->__VtrigSched_he0636b2e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           51);
        vlSelf->scalar_tb__DOT__out_ready = 0U;
        vlSelf->scalar_tb__DOT__count = ((IData)(1U) 
                                         + vlSelf->scalar_tb__DOT__count);
        scalar_tb__DOT__rc = VL_FSCANF_IX(scalar_tb__DOT__fd,"%# %x %x %# %x %#\n",
                                          32,&(vlSelf->scalar_tb__DOT__operation),
                                          32,&(vlSelf->scalar_tb__DOT__in_a),
                                          32,&(vlSelf->scalar_tb__DOT__in_b),
                                          32,&(vlSelf->scalar_tb__DOT__error_value),
                                          32,&(vlSelf->scalar_tb__DOT__expected),
                                          32,&(vlSelf->scalar_tb__DOT__expected_error)) ;
    }
    if (VL_UNLIKELY(((0U != scalar_tb__DOT__rc) & (0xffffffffU 
                                                   != scalar_tb__DOT__rc)))) {
        VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:55: Assertion failed in %Nscalar_tb: MALFORMED_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 55, "");
    }
    if (VL_UNLIKELY((0U == vlSelf->scalar_tb__DOT__count))) {
        VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:56: Assertion failed in %Nscalar_tb: NO_COMPARISONS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 56, "");
    }
    VL_FCLOSE_I(scalar_tb__DOT__fd); VL_WRITEF("SUMMARY scalar_cases=%0d stalled_outputs=%0d\n",
                                               32,vlSelf->scalar_tb__DOT__count,
                                               32,vlSelf->scalar_tb__DOT__count);
    VL_FINISH_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 59, "");
}

VL_INLINE_OPT VlCoroutine Vscalar_tb___024root___eval_initial__TOP__Vtiming__1(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ scalar_tb__DOT____Vrepeat0;
    scalar_tb__DOT____Vrepeat0 = 0;
    // Body
    scalar_tb__DOT____Vrepeat0 = 0x7a120U;
    while (VL_LTS_III(32, 0U, scalar_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_he063696b__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge scalar_tb.clk)", 
                                                           "evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 
                                                           61);
        scalar_tb__DOT____Vrepeat0 = (scalar_tb__DOT____Vrepeat0 
                                      - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:61: Assertion failed in %Nscalar_tb: CYCLE_BOUND\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 61, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscalar_tb___024root___dump_triggers__act(Vscalar_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vscalar_tb___024root___eval_triggers__act(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->scalar_tb__DOT__clk) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->scalar_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->scalar_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->scalar_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->scalar_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0 
        = vlSelf->scalar_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__scalar_tb__DOT__rst_n__0 
        = vlSelf->scalar_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscalar_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vscalar_tb___024root___nba_sequent__TOP__1(Vscalar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscalar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscalar_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->scalar_tb__DOT__rst_n)))) {
        if (VL_UNLIKELY((0ULL != (((QData)((IData)(
                                                   ((IData)(vlSelf->scalar_tb__DOT__rst_n) 
                                                    & (0U 
                                                       == (IData)(vlSelf->scalar_tb__DOT__dut__DOT__state))))) 
                                   << 0x22U) | (((QData)((IData)(vlSelf->scalar_tb__DOT__out_valid)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->scalar_tb__DOT__out_valid)
                                                                      ? vlSelf->scalar_tb__DOT__dut__DOT__data
                                                                      : 0U))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->scalar_tb__DOT__out_valid) 
                                                                      & (IData)(vlSelf->scalar_tb__DOT__dut__DOT__result_failed)))))))))) {
            VL_WRITEF("[%0t] %%Fatal: scalar_tb.sv:19: Assertion failed in %Nscalar_tb.reset_outputs: SCALAR_RESET\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-scalar-verilator-20261103T062958Z-7c1b8784/scalar_tb.sv", 19, "");
        }
    }
}
