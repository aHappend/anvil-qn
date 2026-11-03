// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb__Syms.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vleaf_tb___024root___eval_initial__TOP__Vtiming__0(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ leaf_tb__DOT__fd;
    leaf_tb__DOT__fd = 0;
    IData/*31:0*/ leaf_tb__DOT__rc;
    leaf_tb__DOT__rc = 0;
    IData/*31:0*/ leaf_tb__DOT____Vrepeat3;
    leaf_tb__DOT____Vrepeat3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_15;
    // Body
    vlSelf->leaf_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       35);
    if (VL_UNLIKELY((0U != ((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                   ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                   : 0U) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                             : 0U)) 
                                | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                    ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                    : 0U)) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                               ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                               : 0U)) 
                              | (IData)((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))))) 
                             | (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))) 
                                        >> 0x20U))) 
                            | (((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                                << 9U) | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                            << 7U) 
                                           | ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                               << 6U) 
                                              | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                                  : 0U))))))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       36);
    vlSelf->leaf_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       37);
    __Vtemp_10[0U] = 0x733d2573U;
    __Vtemp_10[1U] = 0x63746f72U;
    __Vtemp_10[2U] = 0x7665U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INW(4096, VL_CVT_PACK_STR_NW(3, __Vtemp_10), 
                                            vlSelf->leaf_tb__DOT__filename)))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:38: Assertion failed in %Nleaf_tb: MISSING_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 38, "");
    }
    leaf_tb__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(128, vlSelf->leaf_tb__DOT__filename)
                                   , std::string{"r"});
    ;
    if (VL_UNLIKELY((1U & (~ (IData)((0U != leaf_tb__DOT__fd)))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:40: Assertion failed in %Nleaf_tb: OPEN_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 40, "");
    }
    leaf_tb__DOT__rc = VL_FSCANF_IX(leaf_tb__DOT__fd,"%# %# %# %# %x %x %x %x %# %x\n",
                                    32,&(vlSelf->leaf_tb__DOT__key_value),
                                    32,&(vlSelf->leaf_tb__DOT__head_value),
                                    32,&(vlSelf->leaf_tb__DOT__layer_value),
                                    32,&(vlSelf->leaf_tb__DOT__position_value),
                                    128,&(vlSelf->leaf_tb__DOT__in_data),
                                    128,&(vlSelf->leaf_tb__DOT__in_gamma),
                                    64,&(vlSelf->leaf_tb__DOT__in_cos),
                                    64,&(vlSelf->leaf_tb__DOT__in_sin),
                                    32,&(vlSelf->leaf_tb__DOT__expected_error),
                                    128,&(vlSelf->leaf_tb__DOT__expected)) ;
    while ((0xaU == leaf_tb__DOT__rc)) {
        if (VL_LTS_III(32, 0U, vlSelf->leaf_tb__DOT__case_id)) {
            co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge leaf_tb.clk)", 
                                                               "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                               45);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->leaf_tb__DOT__in_ready)) 
                               | (IData)(vlSelf->leaf_tb__DOT__out_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:46: Assertion failed in %Nleaf_tb: IDLE_NOT_READY case=%0d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->leaf_tb__DOT__case_id);
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 46, "");
        }
        vlSelf->leaf_tb__DOT__in_is_key = (1U & vlSelf->leaf_tb__DOT__key_value);
        vlSelf->leaf_tb__DOT__in_head = (0x3fU & vlSelf->leaf_tb__DOT__head_value);
        vlSelf->leaf_tb__DOT__in_layer = vlSelf->leaf_tb__DOT__layer_value;
        vlSelf->leaf_tb__DOT__in_pos = vlSelf->leaf_tb__DOT__position_value;
        vlSelf->leaf_tb__DOT__in_valid = 1U;
        vlSelf->leaf_tb__DOT__out_ready = 0U;
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           49);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           49);
        if (VL_UNLIKELY(((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                         | (IData)(vlSelf->leaf_tb__DOT__out_valid)))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:50: Assertion failed in %Nleaf_tb: ACCEPT_OWNERSHIP\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 50, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           51);
        vlSelf->leaf_tb__DOT__in_valid = 0U;
        vlSelf->leaf_tb__DOT__age = 1U;
        while (VL_GTES_III(32, 0x85U, vlSelf->leaf_tb__DOT__age)) {
            co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge leaf_tb.clk)", 
                                                               "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                               53);
            co_await vlSelf->__VdlySched.delay(1ULL, 
                                               nullptr, 
                                               "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                               53);
            if (VL_UNLIKELY((VL_GTS_III(32, 0x85U, vlSelf->leaf_tb__DOT__age) 
                             & (IData)(vlSelf->leaf_tb__DOT__out_valid)))) {
                VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:55: Assertion failed in %Nleaf_tb: EARLY_QK_RESULT case=%0d age=%0d\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->leaf_tb__DOT__case_id,
                          32,vlSelf->leaf_tb__DOT__age);
                VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 55, "");
            }
            if (VL_UNLIKELY(vlSelf->leaf_tb__DOT__in_ready)) {
                VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:56: Assertion failed in %Nleaf_tb: OVERLAPPING_QK_ACCEPTANCE\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 56, "");
            }
            vlSelf->leaf_tb__DOT__age = ((IData)(1U) 
                                         + vlSelf->leaf_tb__DOT__age);
        }
        if (VL_UNLIKELY((1U & (((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                       != (1U & vlSelf->leaf_tb__DOT__expected_error))) 
                                   | (0U != ((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? 
                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                  : 0U) 
                                                ^ vlSelf->leaf_tb__DOT__expected[0U]) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[1U])) 
                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                   ? 
                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                   : 0U) 
                                                 ^ 
                                                 vlSelf->leaf_tb__DOT__expected[2U])) 
                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? 
                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                  : 0U) 
                                                ^ vlSelf->leaf_tb__DOT__expected[3U])))) 
                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                      & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                     != (IData)(vlSelf->leaf_tb__DOT__in_is_key))) 
                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                      ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                      : 0U) != (IData)(vlSelf->leaf_tb__DOT__in_head))) 
                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                     ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                     : 0U) != vlSelf->leaf_tb__DOT__in_layer)) 
                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                    ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                    : 0U) != vlSelf->leaf_tb__DOT__in_pos))))) {
            if (vlSelf->leaf_tb__DOT__out_valid) {
                __Vtemp_15[0U] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U];
                __Vtemp_15[1U] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U];
                __Vtemp_15[2U] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U];
                __Vtemp_15[3U] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U];
            } else {
                __Vtemp_15[0U] = 0U;
                __Vtemp_15[1U] = 0U;
                __Vtemp_15[2U] = 0U;
                __Vtemp_15[3U] = 0U;
            }
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:61: Assertion failed in %Nleaf_tb: QK_COMPARE case=%0d age=133 valid=%b error=%b expected_error=%b data=%x expected=%x\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->leaf_tb__DOT__case_id,
                      1,(IData)(vlSelf->leaf_tb__DOT__out_valid),
                      1,((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                         & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)),
                      1,(1U & vlSelf->leaf_tb__DOT__expected_error),
                      128,__Vtemp_15.data(),128,vlSelf->leaf_tb__DOT__expected.data());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 61, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != ((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0U]) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                      : 0U) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[1U])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                     : 0U) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[2U])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[3U])))) 
                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                       != (1U & vlSelf->leaf_tb__DOT__expected_error))) 
                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                      != (IData)(vlSelf->leaf_tb__DOT__in_is_key))) 
                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                       ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                       : 0U) != (IData)(vlSelf->leaf_tb__DOT__in_head))) 
                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                      : 0U) != vlSelf->leaf_tb__DOT__in_layer)) 
                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                     ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                     : 0U) != vlSelf->leaf_tb__DOT__in_pos)) 
                               | (IData)(vlSelf->leaf_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:67: Assertion failed in %Nleaf_tb: QK_STALL_UNSTABLE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != ((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0U]) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                      : 0U) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[1U])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                     : 0U) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[2U])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[3U])))) 
                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                       != (1U & vlSelf->leaf_tb__DOT__expected_error))) 
                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                      != (IData)(vlSelf->leaf_tb__DOT__in_is_key))) 
                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                       ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                       : 0U) != (IData)(vlSelf->leaf_tb__DOT__in_head))) 
                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                      : 0U) != vlSelf->leaf_tb__DOT__in_layer)) 
                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                     ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                     : 0U) != vlSelf->leaf_tb__DOT__in_pos)) 
                               | (IData)(vlSelf->leaf_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:67: Assertion failed in %Nleaf_tb: QK_STALL_UNSTABLE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != ((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0U]) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                      : 0U) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[1U])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                     : 0U) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[2U])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                    : 0U) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[3U])))) 
                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                       != (1U & vlSelf->leaf_tb__DOT__expected_error))) 
                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                       & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                      != (IData)(vlSelf->leaf_tb__DOT__in_is_key))) 
                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                       ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                       : 0U) != (IData)(vlSelf->leaf_tb__DOT__in_head))) 
                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                      ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                      : 0U) != vlSelf->leaf_tb__DOT__in_layer)) 
                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                     ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                     : 0U) != vlSelf->leaf_tb__DOT__in_pos)) 
                               | (IData)(vlSelf->leaf_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:67: Assertion failed in %Nleaf_tb: QK_STALL_UNSTABLE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           69);
        vlSelf->leaf_tb__DOT__out_ready = 1U;
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           70);
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                               | (IData)(vlSelf->leaf_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:71: Assertion failed in %Nleaf_tb: RETIRE_PREEDGE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 71, "");
        }
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           72);
        if (VL_UNLIKELY((1U & ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                               | (~ (IData)(vlSelf->leaf_tb__DOT__in_ready)))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:73: Assertion failed in %Nleaf_tb: RETIRE_OWNERSHIP\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 73, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           74);
        vlSelf->leaf_tb__DOT__out_ready = 0U;
        vlSelf->leaf_tb__DOT__case_id = ((IData)(1U) 
                                         + vlSelf->leaf_tb__DOT__case_id);
        leaf_tb__DOT__rc = VL_FSCANF_IX(leaf_tb__DOT__fd,"%# %# %# %# %x %x %x %x %# %x\n",
                                        32,&(vlSelf->leaf_tb__DOT__key_value),
                                        32,&(vlSelf->leaf_tb__DOT__head_value),
                                        32,&(vlSelf->leaf_tb__DOT__layer_value),
                                        32,&(vlSelf->leaf_tb__DOT__position_value),
                                        128,&(vlSelf->leaf_tb__DOT__in_data),
                                        128,&(vlSelf->leaf_tb__DOT__in_gamma),
                                        64,&(vlSelf->leaf_tb__DOT__in_cos),
                                        64,&(vlSelf->leaf_tb__DOT__in_sin),
                                        32,&(vlSelf->leaf_tb__DOT__expected_error),
                                        128,&(vlSelf->leaf_tb__DOT__expected)) ;
    }
    if (VL_UNLIKELY(((0U != leaf_tb__DOT__rc) & (0xffffffffU 
                                                 != leaf_tb__DOT__rc)))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:80: Assertion failed in %Nleaf_tb: MALFORMED_VECTOR rc=%0d\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  32,leaf_tb__DOT__rc);
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 80, "");
    }
    if (VL_UNLIKELY((0U == vlSelf->leaf_tb__DOT__case_id))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:81: Assertion failed in %Nleaf_tb: EMPTY_COMPARISON\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 81, "");
    }
    VL_FCLOSE_I(leaf_tb__DOT__fd); co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge leaf_tb.clk)", 
                                                                                "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                                                83);
    vlSelf->leaf_tb__DOT__in_valid = 1U;
    vlSelf->leaf_tb__DOT__in_pos = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       84);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       84);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       85);
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       87);
    vlSelf->leaf_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       88);
    if (VL_UNLIKELY((0U != ((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                   ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                   : 0U) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                             : 0U)) 
                                | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                    ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                    : 0U)) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                               ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                               : 0U)) 
                              | (IData)((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))))) 
                             | (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))) 
                                        >> 0x20U))) 
                            | (((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                                << 9U) | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                            << 7U) 
                                           | ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                               << 6U) 
                                              | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                                  : 0U))))))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       89);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       89);
    vlSelf->leaf_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       91);
    vlSelf->leaf_tb__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       92);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       92);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       93);
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       95);
    vlSelf->leaf_tb__DOT__flush = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       96);
    if (VL_UNLIKELY((0U != ((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                   ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                   : 0U) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                             : 0U)) 
                                | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                    ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                    : 0U)) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                               ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                               : 0U)) 
                              | (IData)((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))))) 
                             | (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                             : 0U)))) 
                                        >> 0x20U))) 
                            | (((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                                << 9U) | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                             & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                            << 7U) 
                                           | ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                                & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                               << 6U) 
                                              | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                                  : 0U))))))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       97);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                       97);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                       98);
    vlSelf->leaf_tb__DOT__flush = 0U;
    leaf_tb__DOT____Vrepeat3 = 0x8cU;
    while (VL_LTS_III(32, 0U, leaf_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           100);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                           100);
        if (VL_UNLIKELY(vlSelf->leaf_tb__DOT__out_valid)) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:101: Assertion failed in %Nleaf_tb: FLUSH_LEAK\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 101, "");
        }
        leaf_tb__DOT____Vrepeat3 = (leaf_tb__DOT____Vrepeat3 
                                    - (IData)(1U));
    }
    VL_WRITEF("SUMMARY qk_cases=%0d elements=%0d latency=133 stall_cycles=%0d reset_during_work=1 flush_during_work=1\n",
              32,vlSelf->leaf_tb__DOT__case_id,32,VL_MULS_III(32, (IData)(8U), vlSelf->leaf_tb__DOT__case_id),
              32,VL_MULS_III(32, (IData)(3U), vlSelf->leaf_tb__DOT__case_id));
    VL_FINISH_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 105, "");
}

VL_INLINE_OPT VlCoroutine Vleaf_tb___024root___eval_initial__TOP__Vtiming__1(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ leaf_tb__DOT____Vrepeat4;
    leaf_tb__DOT____Vrepeat4 = 0;
    // Body
    leaf_tb__DOT____Vrepeat4 = 0x7a120U;
    while (VL_LTS_III(32, 0U, leaf_tb__DOT____Vrepeat4)) {
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 
                                                           108);
        leaf_tb__DOT____Vrepeat4 = (leaf_tb__DOT____Vrepeat4 
                                    - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:109: Assertion failed in %Nleaf_tb: CYCLE_BOUND\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 109, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__act(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vleaf_tb___024root___eval_triggers__act(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->leaf_tb__DOT__clk) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->leaf_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->leaf_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->leaf_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->leaf_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__clk__0 
        = vlSelf->leaf_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__leaf_tb__DOT__rst_n__0 
        = vlSelf->leaf_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vleaf_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__7(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__7\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->leaf_tb__DOT__rst_n)))) {
        if (VL_UNLIKELY((0U != ((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                       ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                       : 0U) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                 ? 
                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                 : 0U)) 
                                    | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                        ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                        : 0U)) | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                   ? 
                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                   : 0U)) 
                                  | (IData)((((QData)((IData)(
                                                              ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                 : 0U)))))) 
                                 | (IData)(((((QData)((IData)(
                                                              ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                 : 0U)))) 
                                            >> 0x20U))) 
                                | (((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                                    << 9U) | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                               << 8U) 
                                              | ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                                   & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                                  << 7U) 
                                                 | ((((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                                      & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                        ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                                        : 0U))))))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-smoke-qk-verilator-20261103T063004Z-a4e9053b/qk_tb.sv", 29, "");
        }
    }
}
