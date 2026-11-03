// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb__Syms.h"
#include "Vcontrol_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ control_tb__DOT__fd;
    control_tb__DOT__fd = 0;
    IData/*31:0*/ control_tb__DOT__rc;
    control_tb__DOT__rc = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->control_tb__DOT__csr_valid = 0U;
    vlSelf->control_tb__DOT__csr_write = 0U;
    vlSelf->control_tb__DOT__csr_addr = 0U;
    vlSelf->control_tb__DOT__csr_wdata = 0U;
    vlSelf->control_tb__DOT__csr_wstrb = 0U;
    vlSelf->control_tb__DOT__csr_rsp_ready = 0U;
    vlSelf->control_tb__DOT__busy = 0U;
    vlSelf->control_tb__DOT__think_active = 0U;
    vlSelf->control_tb__DOT__qk_busy = 0U;
    vlSelf->control_tb__DOT__qk_blocked = 0U;
    vlSelf->control_tb__DOT__arith_error = 0U;
    vlSelf->control_tb__DOT__mem_error = 0U;
    vlSelf->control_tb__DOT__sequence_done = 0U;
    vlSelf->control_tb__DOT__direct_tokens = 0U;
    vlSelf->control_tb__DOT__think_tokens = 0U;
    vlSelf->control_tb__DOT__draft_nodes = 0U;
    vlSelf->control_tb__DOT__verified_nodes = 0U;
    vlSelf->control_tb__DOT__accepted_nodes = 0U;
    vlSelf->control_tb__DOT__rejected_nodes = 0U;
    vlSelf->control_tb__DOT__score_valid = 0U;
    vlSelf->control_tb__DOT__score_fp32 = 0U;
    vlSelf->control_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                       47);
    if (VL_UNLIKELY((0ULL != (((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                               << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                                  ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                                  : 0U))) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                    & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->control_tb__DOT__mode_value))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:40: Assertion failed in %Ncontrol_tb.reset_outputs: CONTROL_RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 40, "");
    }
    __Vtemp_1[0U] = 0x733d2573U;
    __Vtemp_1[1U] = 0x63746f72U;
    __Vtemp_1[2U] = 0x7665U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INW(4096, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                            vlSelf->control_tb__DOT__filename)))) {
        VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:48: Assertion failed in %Ncontrol_tb: NO_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 48, "");
    }
    control_tb__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(128, vlSelf->control_tb__DOT__filename)
                                      , std::string{"r"});
    ;
    if (VL_UNLIKELY((1U & (~ (IData)((0U != control_tb__DOT__fd)))))) {
        VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:49: Assertion failed in %Ncontrol_tb: OPEN_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 49, "");
    }
    control_tb__DOT__rc = VL_FSCANF_IX(control_tb__DOT__fd,"%x %x %x\n",
                                       110,&(vlSelf->control_tb__DOT__stimulus),
                                       37,&(vlSelf->control_tb__DOT__expected_before),
                                       37,&(vlSelf->control_tb__DOT__expected_after)) ;
    while ((3U == control_tb__DOT__rc)) {
        co_await vlSelf->__VtrigSched_h9e28a70d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge control_tb.clk)", 
                                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                                           52);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                           53);
        vlSelf->control_tb__DOT__rst_n = (1U & (vlSelf->control_tb__DOT__stimulus[3U] 
                                                >> 0xdU));
        vlSelf->control_tb__DOT__csr_valid = (1U & 
                                              (vlSelf->control_tb__DOT__stimulus[3U] 
                                               >> 0xcU));
        vlSelf->control_tb__DOT__csr_write = (1U & 
                                              (vlSelf->control_tb__DOT__stimulus[3U] 
                                               >> 0xbU));
        vlSelf->control_tb__DOT__csr_addr = (0xfffU 
                                             & ((vlSelf->control_tb__DOT__stimulus[3U] 
                                                 << 1U) 
                                                | (vlSelf->control_tb__DOT__stimulus[2U] 
                                                   >> 0x1fU)));
        vlSelf->control_tb__DOT__csr_wdata = ((vlSelf->control_tb__DOT__stimulus[2U] 
                                               << 1U) 
                                              | (vlSelf->control_tb__DOT__stimulus[1U] 
                                                 >> 0x1fU));
        vlSelf->control_tb__DOT__csr_wstrb = (0xfU 
                                              & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                 >> 0x1bU));
        vlSelf->control_tb__DOT__csr_rsp_ready = (1U 
                                                  & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                     >> 0x1aU));
        vlSelf->control_tb__DOT__busy = (1U & (vlSelf->control_tb__DOT__stimulus[1U] 
                                               >> 0x19U));
        vlSelf->control_tb__DOT__think_active = (1U 
                                                 & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                    >> 0x18U));
        vlSelf->control_tb__DOT__qk_busy = (1U & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                  >> 0x17U));
        vlSelf->control_tb__DOT__qk_blocked = (1U & 
                                               (vlSelf->control_tb__DOT__stimulus[1U] 
                                                >> 0x16U));
        vlSelf->control_tb__DOT__arith_error = (1U 
                                                & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                   >> 0x15U));
        vlSelf->control_tb__DOT__mem_error = (1U & 
                                              (vlSelf->control_tb__DOT__stimulus[1U] 
                                               >> 0x14U));
        vlSelf->control_tb__DOT__sequence_done = (1U 
                                                  & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                     >> 0x13U));
        vlSelf->control_tb__DOT__direct_tokens = (7U 
                                                  & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                     >> 0x10U));
        vlSelf->control_tb__DOT__think_tokens = (7U 
                                                 & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                    >> 0xdU));
        vlSelf->control_tb__DOT__draft_nodes = (7U 
                                                & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                   >> 0xaU));
        vlSelf->control_tb__DOT__verified_nodes = (7U 
                                                   & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                      >> 7U));
        vlSelf->control_tb__DOT__accepted_nodes = (7U 
                                                   & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                      >> 4U));
        vlSelf->control_tb__DOT__rejected_nodes = (7U 
                                                   & (vlSelf->control_tb__DOT__stimulus[1U] 
                                                      >> 1U));
        vlSelf->control_tb__DOT__score_valid = (1U 
                                                & vlSelf->control_tb__DOT__stimulus[1U]);
        vlSelf->control_tb__DOT__score_fp32 = vlSelf->control_tb__DOT__stimulus[0U];
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                           54);
        if (VL_UNLIKELY(((((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))) 
                         != vlSelf->control_tb__DOT__expected_before))) {
            VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:56: Assertion failed in %Ncontrol_tb: CONTROL_PRE_COMPARE edge=%0d got=%x expected=%x\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->control_tb__DOT__count,
                      37,(((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))),
                      37,vlSelf->control_tb__DOT__expected_before);
            VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 56, "");
        }
        co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge control_tb.clk)", 
                                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                                           58);
        if (VL_UNLIKELY(((((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))) 
                         != vlSelf->control_tb__DOT__expected_before))) {
            VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:60: Assertion failed in %Ncontrol_tb: CONTROL_ACTIVE_COMPARE edge=%0d got=%x expected=%x\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->control_tb__DOT__count,
                      37,(((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))),
                      37,vlSelf->control_tb__DOT__expected_before);
            VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 60, "");
        }
        if (((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
             & (IData)(vlSelf->control_tb__DOT__csr_rsp_ready))) {
            vlSelf->control_tb__DOT__responses = ((IData)(1U) 
                                                  + vlSelf->control_tb__DOT__responses);
            if (((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                 & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error))) {
                vlSelf->control_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->control_tb__DOT__errors);
            }
        }
        if (((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
             & (~ (IData)(vlSelf->control_tb__DOT__csr_rsp_ready)))) {
            vlSelf->control_tb__DOT__stalls = ((IData)(1U) 
                                               + vlSelf->control_tb__DOT__stalls);
        }
        if (vlSelf->control_tb__DOT__mode_valid) {
            vlSelf->control_tb__DOT__modes = ((IData)(1U) 
                                              + vlSelf->control_tb__DOT__modes);
        }
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                           67);
        if (VL_UNLIKELY(((((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))) 
                         != vlSelf->control_tb__DOT__expected_after))) {
            VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:69: Assertion failed in %Ncontrol_tb: CONTROL_POST_COMPARE edge=%0d got=%x expected=%x\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->control_tb__DOT__count,
                      37,(((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                           << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                              ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                              : 0U))) 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->control_tb__DOT__mode_valid) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->control_tb__DOT__mode_value)))))))),
                      37,vlSelf->control_tb__DOT__expected_after);
            VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 69, "");
        }
        vlSelf->control_tb__DOT__count = ((IData)(1U) 
                                          + vlSelf->control_tb__DOT__count);
        control_tb__DOT__rc = VL_FSCANF_IX(control_tb__DOT__fd,"%x %x %x\n",
                                           110,&(vlSelf->control_tb__DOT__stimulus),
                                           37,&(vlSelf->control_tb__DOT__expected_before),
                                           37,&(vlSelf->control_tb__DOT__expected_after)) ;
    }
    if (VL_UNLIKELY(((0U != control_tb__DOT__rc) & 
                     (0xffffffffU != control_tb__DOT__rc)))) {
        VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:74: Assertion failed in %Ncontrol_tb: MALFORMED_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 74, "");
    }
    VL_WRITEF("SUMMARY edges=%0d responses=%0d errors=%0d modes=%0d stalls=%0d\n",
              32,vlSelf->control_tb__DOT__count,32,
              vlSelf->control_tb__DOT__responses,32,
              vlSelf->control_tb__DOT__errors,32,vlSelf->control_tb__DOT__modes,
              32,vlSelf->control_tb__DOT__stalls);
    VL_FINISH_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 77, "");
}

VL_INLINE_OPT VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ control_tb__DOT____Vrepeat0;
    control_tb__DOT____Vrepeat0 = 0;
    // Body
    control_tb__DOT____Vrepeat0 = 0x7a120U;
    while (VL_LTS_III(32, 0U, control_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge control_tb.clk)", 
                                                           "evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 
                                                           79);
        control_tb__DOT____Vrepeat0 = (control_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:79: Assertion failed in %Ncontrol_tb: CYCLE_BOUND\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 79, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_tb___024root___eval_triggers__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->control_tb__DOT__clk) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->control_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->control_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->control_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->control_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0 
        = vlSelf->control_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst_n__0 
        = vlSelf->control_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__1(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__rst_n)))) {
        if (VL_UNLIKELY((0ULL != (((QData)((IData)(vlSelf->control_tb__DOT__csr_ready)) 
                                   << 0x24U) | (((QData)((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->control_tb__DOT__csr_rsp_valid)
                                                                      ? vlSelf->control_tb__DOT__dut__DOT__response_data
                                                                      : 0U))) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->control_tb__DOT__csr_rsp_valid) 
                                                                        & (IData)(vlSelf->control_tb__DOT__dut__DOT__response_error)) 
                                                                       << 2U) 
                                                                      | ((((IData)(vlSelf->control_tb__DOT__dut__DOT__mode_pulse) 
                                                                           & (IData)(vlSelf->control_tb__DOT__rst_n)) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->control_tb__DOT__mode_value))))))))))) {
            VL_WRITEF("[%0t] %%Fatal: csr-verilator_tb.sv:40: Assertion failed in %Ncontrol_tb.reset_outputs: CONTROL_RESET_XZ_OR_NONZERO\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 40, "");
        }
    }
}
