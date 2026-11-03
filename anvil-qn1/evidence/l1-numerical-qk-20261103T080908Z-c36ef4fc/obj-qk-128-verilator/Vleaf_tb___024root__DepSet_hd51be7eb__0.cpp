// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb__Syms.h"
#include "Vleaf_tb___024root.h"

extern const VlWide<64>/*2047:0*/ Vleaf_tb__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<67>/*2143:0*/ Vleaf_tb__ConstPool__CONST_h8b259bed_0;

VL_INLINE_OPT VlCoroutine Vleaf_tb___024root___eval_initial__TOP__Vtiming__0(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ leaf_tb__DOT__fd;
    leaf_tb__DOT__fd = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ leaf_tb__DOT__rc;
    leaf_tb__DOT__rc = 0;
    IData/*31:0*/ leaf_tb__DOT____Vrepeat3;
    leaf_tb__DOT____Vrepeat3 = 0;
    VlWide<64>/*2047:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    VlWide<67>/*2143:0*/ __Vtemp_3;
    VlWide<67>/*2143:0*/ __Vtemp_4;
    VlWide<67>/*2143:0*/ __Vtemp_5;
    VlWide<67>/*2143:0*/ __Vtemp_6;
    VlWide<67>/*2143:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<64>/*2047:0*/ __Vtemp_11;
    VlWide<64>/*2047:0*/ __Vtemp_16;
    VlWide<66>/*2111:0*/ __Vtemp_17;
    VlWide<67>/*2143:0*/ __Vtemp_18;
    VlWide<67>/*2143:0*/ __Vtemp_19;
    VlWide<67>/*2143:0*/ __Vtemp_20;
    VlWide<67>/*2143:0*/ __Vtemp_21;
    VlWide<67>/*2143:0*/ __Vtemp_22;
    VlWide<64>/*2047:0*/ __Vtemp_23;
    VlWide<66>/*2111:0*/ __Vtemp_24;
    VlWide<67>/*2143:0*/ __Vtemp_25;
    VlWide<67>/*2143:0*/ __Vtemp_26;
    VlWide<67>/*2143:0*/ __Vtemp_27;
    VlWide<67>/*2143:0*/ __Vtemp_28;
    VlWide<67>/*2143:0*/ __Vtemp_29;
    // Body
    vlSelf->leaf_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       35);
    if (vlSelf->leaf_tb__DOT__out_valid) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_1[__Vilp] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_1[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    VL_CONCAT_WQW(2112,64,2048, __Vtemp_2, (((QData)((IData)(
                                                             ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                               ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                : 0U)))), __Vtemp_1);
    VL_CONCAT_WIW(2118,6,2112, __Vtemp_3, ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                            ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                            : 0U), __Vtemp_2);
    VL_CONCAT_WIW(2119,1,2118, __Vtemp_4, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                           & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)), __Vtemp_3);
    VL_CONCAT_WIW(2120,1,2119, __Vtemp_5, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                           & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)), __Vtemp_4);
    VL_CONCAT_WIW(2121,1,2120, __Vtemp_6, (IData)(vlSelf->leaf_tb__DOT__out_valid), __Vtemp_5);
    VL_CONCAT_WIW(2122,1,2121, __Vtemp_7, (IData)(vlSelf->leaf_tb__DOT__in_ready), __Vtemp_6);
    if (VL_UNLIKELY((0U != ((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((Vleaf_tb__ConstPool__CONST_h8b259bed_0[0U] 
                                                                                ^ 
                                                                                __Vtemp_7[0U]) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[1U] 
                                                                                ^ 
                                                                                __Vtemp_7[1U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[2U] 
                                                                                ^ 
                                                                                __Vtemp_7[2U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[3U] 
                                                                                ^ 
                                                                                __Vtemp_7[3U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[4U] 
                                                                                ^ 
                                                                                __Vtemp_7[4U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[5U] 
                                                                                ^ 
                                                                                __Vtemp_7[5U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[6U] 
                                                                                ^ 
                                                                                __Vtemp_7[6U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[7U] 
                                                                                ^ 
                                                                                __Vtemp_7[7U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[8U] 
                                                                                ^ 
                                                                                __Vtemp_7[8U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[9U] 
                                                                                ^ 
                                                                                __Vtemp_7[9U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xaU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xaU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xbU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xbU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xcU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xcU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xdU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xdU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xeU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xeU])) 
                                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xfU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xfU])) 
                                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x10U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x10U])) 
                                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x11U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x11U])) 
                                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x12U] 
                                                                               ^ 
                                                                               __Vtemp_7[0x12U])) 
                                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x13U] 
                                                                              ^ 
                                                                              __Vtemp_7[0x13U])) 
                                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x14U] 
                                                                             ^ 
                                                                             __Vtemp_7[0x14U])) 
                                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x15U] 
                                                                            ^ 
                                                                            __Vtemp_7[0x15U])) 
                                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x16U] 
                                                                           ^ 
                                                                           __Vtemp_7[0x16U])) 
                                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x17U] 
                                                                          ^ 
                                                                          __Vtemp_7[0x17U])) 
                                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x18U] 
                                                                         ^ 
                                                                         __Vtemp_7[0x18U])) 
                                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x19U] 
                                                                        ^ 
                                                                        __Vtemp_7[0x19U])) 
                                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1aU] 
                                                                       ^ 
                                                                       __Vtemp_7[0x1aU])) 
                                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1bU] 
                                                                      ^ 
                                                                      __Vtemp_7[0x1bU])) 
                                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1cU] 
                                                                     ^ 
                                                                     __Vtemp_7[0x1cU])) 
                                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1dU] 
                                                                    ^ 
                                                                    __Vtemp_7[0x1dU])) 
                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1eU] 
                                                                   ^ 
                                                                   __Vtemp_7[0x1eU])) 
                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1fU] 
                                                                  ^ 
                                                                  __Vtemp_7[0x1fU])) 
                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x20U] 
                                                                 ^ 
                                                                 __Vtemp_7[0x20U])) 
                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x21U] 
                                                                ^ 
                                                                __Vtemp_7[0x21U])) 
                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x22U] 
                                                               ^ 
                                                               __Vtemp_7[0x22U])) 
                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x23U] 
                                                              ^ 
                                                              __Vtemp_7[0x23U])) 
                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x24U] 
                                                             ^ 
                                                             __Vtemp_7[0x24U])) 
                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x25U] 
                                                            ^ 
                                                            __Vtemp_7[0x25U])) 
                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x26U] 
                                                           ^ 
                                                           __Vtemp_7[0x26U])) 
                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x27U] 
                                                          ^ 
                                                          __Vtemp_7[0x27U])) 
                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x28U] 
                                                         ^ 
                                                         __Vtemp_7[0x28U])) 
                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x29U] 
                                                        ^ 
                                                        __Vtemp_7[0x29U])) 
                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2aU] 
                                                       ^ 
                                                       __Vtemp_7[0x2aU])) 
                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2bU] 
                                                      ^ 
                                                      __Vtemp_7[0x2bU])) 
                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2cU] 
                                                     ^ 
                                                     __Vtemp_7[0x2cU])) 
                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2dU] 
                                                    ^ 
                                                    __Vtemp_7[0x2dU])) 
                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2eU] 
                                                   ^ 
                                                   __Vtemp_7[0x2eU])) 
                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2fU] 
                                                  ^ 
                                                  __Vtemp_7[0x2fU])) 
                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x30U] 
                                                 ^ 
                                                 __Vtemp_7[0x30U])) 
                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x31U] 
                                                ^ __Vtemp_7[0x31U])) 
                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x32U] 
                                               ^ __Vtemp_7[0x32U])) 
                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x33U] 
                                              ^ __Vtemp_7[0x33U])) 
                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x34U] 
                                             ^ __Vtemp_7[0x34U])) 
                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x35U] 
                                            ^ __Vtemp_7[0x35U])) 
                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x36U] 
                                           ^ __Vtemp_7[0x36U])) 
                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x37U] 
                                          ^ __Vtemp_7[0x37U])) 
                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x38U] 
                                         ^ __Vtemp_7[0x38U])) 
                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x39U] 
                                        ^ __Vtemp_7[0x39U])) 
                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3aU] 
                                       ^ __Vtemp_7[0x3aU])) 
                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3bU] 
                                      ^ __Vtemp_7[0x3bU])) 
                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3cU] 
                                     ^ __Vtemp_7[0x3cU])) 
                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3dU] 
                                    ^ __Vtemp_7[0x3dU])) 
                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3eU] 
                                   ^ __Vtemp_7[0x3eU])) 
                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3fU] 
                                  ^ __Vtemp_7[0x3fU])) 
                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x40U] 
                                 ^ __Vtemp_7[0x40U])) 
                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x41U] 
                                ^ __Vtemp_7[0x41U])) 
                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x42U] 
                               ^ __Vtemp_7[0x42U]))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       36);
    vlSelf->leaf_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       37);
    __Vtemp_8[0U] = 0x733d2573U;
    __Vtemp_8[1U] = 0x63746f72U;
    __Vtemp_8[2U] = 0x7665U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INW(4096, VL_CVT_PACK_STR_NW(3, __Vtemp_8), 
                                            vlSelf->leaf_tb__DOT__filename)))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:38: Assertion failed in %Nleaf_tb: MISSING_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 38, "");
    }
    leaf_tb__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(128, vlSelf->leaf_tb__DOT__filename)
                                   , std::string{"r"});
    ;
    if (VL_UNLIKELY((1U & (~ (IData)((0U != leaf_tb__DOT__fd)))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:40: Assertion failed in %Nleaf_tb: OPEN_VECTORS\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 40, "");
    }
    leaf_tb__DOT__rc = VL_FSCANF_IX(leaf_tb__DOT__fd,"%# %# %# %# %x %x %x %x %# %x\n",
                                    32,&(vlSelf->leaf_tb__DOT__key_value),
                                    32,&(vlSelf->leaf_tb__DOT__head_value),
                                    32,&(vlSelf->leaf_tb__DOT__layer_value),
                                    32,&(vlSelf->leaf_tb__DOT__position_value),
                                    2048,&(vlSelf->leaf_tb__DOT__in_data),
                                    2048,&(vlSelf->leaf_tb__DOT__in_gamma),
                                    1024,&(vlSelf->leaf_tb__DOT__in_cos),
                                    1024,&(vlSelf->leaf_tb__DOT__in_sin),
                                    32,&(vlSelf->leaf_tb__DOT__expected_error),
                                    2048,&(vlSelf->leaf_tb__DOT__expected)) ;
    while ((0xaU == leaf_tb__DOT__rc)) {
        if (VL_LTS_III(32, 0U, vlSelf->leaf_tb__DOT__case_id)) {
            co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge leaf_tb.clk)", 
                                                               "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                               45);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->leaf_tb__DOT__in_ready)) 
                               | (IData)(vlSelf->leaf_tb__DOT__out_valid))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:46: Assertion failed in %Nleaf_tb: IDLE_NOT_READY case=%0d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->leaf_tb__DOT__case_id);
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 46, "");
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
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           49);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           49);
        if (VL_UNLIKELY(((IData)(vlSelf->leaf_tb__DOT__in_ready) 
                         | (IData)(vlSelf->leaf_tb__DOT__out_valid)))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:50: Assertion failed in %Nleaf_tb: ACCEPT_OWNERSHIP\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 50, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           51);
        vlSelf->leaf_tb__DOT__in_valid = 0U;
        vlSelf->leaf_tb__DOT__age = 1U;
        while (VL_GTES_III(32, 0x85U, vlSelf->leaf_tb__DOT__age)) {
            co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge leaf_tb.clk)", 
                                                               "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                               53);
            co_await vlSelf->__VdlySched.delay(1ULL, 
                                               nullptr, 
                                               "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                               53);
            if (VL_UNLIKELY((VL_GTS_III(32, 0x85U, vlSelf->leaf_tb__DOT__age) 
                             & (IData)(vlSelf->leaf_tb__DOT__out_valid)))) {
                VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:55: Assertion failed in %Nleaf_tb: EARLY_QK_RESULT case=%0d age=%0d\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,vlSelf->leaf_tb__DOT__case_id,
                          32,vlSelf->leaf_tb__DOT__age);
                VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 55, "");
            }
            if (VL_UNLIKELY(vlSelf->leaf_tb__DOT__in_ready)) {
                VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:56: Assertion failed in %Nleaf_tb: OVERLAPPING_QK_ACCEPTANCE\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 56, "");
            }
            vlSelf->leaf_tb__DOT__age = ((IData)(1U) 
                                         + vlSelf->leaf_tb__DOT__age);
        }
        if (VL_UNLIKELY((1U & (((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                        & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)) 
                                       != (1U & vlSelf->leaf_tb__DOT__expected_error))) 
                                   | (0U != (((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0U]) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[1U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[1U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[2U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[2U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[3U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[3U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[4U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[4U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[4U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[5U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[5U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[5U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[6U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[6U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[6U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[7U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[7U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[7U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[8U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[8U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[8U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[9U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[9U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[9U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xaU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xaU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xaU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xbU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xbU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xbU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xcU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xcU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xcU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xdU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xdU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xdU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xeU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xeU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xeU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xfU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xfU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xfU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x10U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x10U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x10U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x11U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x11U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x11U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x12U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x12U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x12U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x13U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x13U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x13U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x14U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x14U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x14U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x15U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x15U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x15U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x16U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x16U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x16U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x17U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x17U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x17U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x18U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x18U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x18U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x19U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x19U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x19U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1aU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1aU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1aU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1bU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1bU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1bU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1cU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1cU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1cU])) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1dU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1dU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1dU])) 
                                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1eU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1eU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1eU])) 
                                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1fU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1fU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1fU])) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x20U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x20U]) 
                                                                               ^ 
                                                                               vlSelf->leaf_tb__DOT__expected[0x20U])) 
                                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                ? 
                                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x21U]
                                                                                : 
                                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x21U]) 
                                                                              ^ 
                                                                              vlSelf->leaf_tb__DOT__expected[0x21U])) 
                                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                               ? 
                                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x22U]
                                                                               : 
                                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x22U]) 
                                                                             ^ 
                                                                             vlSelf->leaf_tb__DOT__expected[0x22U])) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                              ? 
                                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x23U]
                                                                              : 
                                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x23U]) 
                                                                            ^ 
                                                                            vlSelf->leaf_tb__DOT__expected[0x23U])) 
                                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                             ? 
                                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x24U]
                                                                             : 
                                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x24U]) 
                                                                           ^ 
                                                                           vlSelf->leaf_tb__DOT__expected[0x24U])) 
                                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                            ? 
                                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x25U]
                                                                            : 
                                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x25U]) 
                                                                          ^ 
                                                                          vlSelf->leaf_tb__DOT__expected[0x25U])) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                           ? 
                                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x26U]
                                                                           : 
                                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x26U]) 
                                                                         ^ 
                                                                         vlSelf->leaf_tb__DOT__expected[0x26U])) 
                                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                          ? 
                                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x27U]
                                                                          : 
                                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x27U]) 
                                                                        ^ 
                                                                        vlSelf->leaf_tb__DOT__expected[0x27U])) 
                                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                         ? 
                                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x28U]
                                                                         : 
                                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x28U]) 
                                                                       ^ 
                                                                       vlSelf->leaf_tb__DOT__expected[0x28U])) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                        ? 
                                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x29U]
                                                                        : 
                                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x29U]) 
                                                                      ^ 
                                                                      vlSelf->leaf_tb__DOT__expected[0x29U])) 
                                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                       ? 
                                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2aU]
                                                                       : 
                                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2aU]) 
                                                                     ^ 
                                                                     vlSelf->leaf_tb__DOT__expected[0x2aU])) 
                                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                      ? 
                                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2bU]
                                                                      : 
                                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2bU]) 
                                                                    ^ 
                                                                    vlSelf->leaf_tb__DOT__expected[0x2bU])) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                     ? 
                                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2cU]
                                                                     : 
                                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2cU]) 
                                                                   ^ 
                                                                   vlSelf->leaf_tb__DOT__expected[0x2cU])) 
                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                    ? 
                                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2dU]
                                                                    : 
                                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2dU]) 
                                                                  ^ 
                                                                  vlSelf->leaf_tb__DOT__expected[0x2dU])) 
                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                   ? 
                                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2eU]
                                                                   : 
                                                                  Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2eU]) 
                                                                 ^ 
                                                                 vlSelf->leaf_tb__DOT__expected[0x2eU])) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                  ? 
                                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2fU]
                                                                  : 
                                                                 Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2fU]) 
                                                                ^ 
                                                                vlSelf->leaf_tb__DOT__expected[0x2fU])) 
                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? 
                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x30U]
                                                                 : 
                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x30U]) 
                                                               ^ 
                                                               vlSelf->leaf_tb__DOT__expected[0x30U])) 
                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? 
                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x31U]
                                                                : 
                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x31U]) 
                                                              ^ 
                                                              vlSelf->leaf_tb__DOT__expected[0x31U])) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                               ? 
                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x32U]
                                                               : 
                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x32U]) 
                                                             ^ 
                                                             vlSelf->leaf_tb__DOT__expected[0x32U])) 
                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                              ? 
                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x33U]
                                                              : 
                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x33U]) 
                                                            ^ 
                                                            vlSelf->leaf_tb__DOT__expected[0x33U])) 
                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? 
                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x34U]
                                                             : 
                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x34U]) 
                                                           ^ 
                                                           vlSelf->leaf_tb__DOT__expected[0x34U])) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? 
                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x35U]
                                                            : 
                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x35U]) 
                                                          ^ 
                                                          vlSelf->leaf_tb__DOT__expected[0x35U])) 
                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                           ? 
                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x36U]
                                                           : 
                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x36U]) 
                                                         ^ 
                                                         vlSelf->leaf_tb__DOT__expected[0x36U])) 
                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                          ? 
                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x37U]
                                                          : 
                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x37U]) 
                                                        ^ 
                                                        vlSelf->leaf_tb__DOT__expected[0x37U])) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                         ? 
                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x38U]
                                                         : 
                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x38U]) 
                                                       ^ 
                                                       vlSelf->leaf_tb__DOT__expected[0x38U])) 
                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                        ? 
                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x39U]
                                                        : 
                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x39U]) 
                                                      ^ 
                                                      vlSelf->leaf_tb__DOT__expected[0x39U])) 
                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                       ? 
                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3aU]
                                                       : 
                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3aU]) 
                                                     ^ 
                                                     vlSelf->leaf_tb__DOT__expected[0x3aU])) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3bU]
                                                      : 
                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3bU]) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[0x3bU])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3cU]
                                                     : 
                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3cU]) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[0x3cU])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3dU]
                                                    : 
                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3dU]) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0x3dU])) 
                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                   ? 
                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3eU]
                                                   : 
                                                  Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3eU]) 
                                                 ^ 
                                                 vlSelf->leaf_tb__DOT__expected[0x3eU])) 
                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                  ? 
                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3fU]
                                                  : 
                                                 Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3fU]) 
                                                ^ vlSelf->leaf_tb__DOT__expected[0x3fU])))) 
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
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    __Vtemp_11[__Vilp] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            } else {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    __Vtemp_11[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:61: Assertion failed in %Nleaf_tb: QK_COMPARE case=%0d age=133 valid=%b error=%b expected_error=%b data=%x expected=%x\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->leaf_tb__DOT__case_id,
                      1,(IData)(vlSelf->leaf_tb__DOT__out_valid),
                      1,((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                         & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)),
                      1,(1U & vlSelf->leaf_tb__DOT__expected_error),
                      2048,__Vtemp_11.data(),2048,vlSelf->leaf_tb__DOT__expected.data());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 61, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != (((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0U]) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[1U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[1U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[2U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[2U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[3U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[3U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[4U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[4U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[4U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[5U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[5U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[5U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[6U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[6U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[6U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[7U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[7U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[7U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[8U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[8U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[8U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[9U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[9U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[9U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xaU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xaU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xaU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xbU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xbU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xbU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xcU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xcU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xcU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xdU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xdU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xdU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xeU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xeU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xeU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xfU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xfU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xfU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x10U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x10U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x10U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x11U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x11U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x11U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x12U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x12U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x12U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x13U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x13U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x13U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x14U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x14U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x14U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x15U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x15U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x15U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x16U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x16U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x16U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x17U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x17U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x17U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x18U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x18U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x18U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x19U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x19U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x19U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1aU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1aU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1aU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1bU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1bU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1bU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1cU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1cU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1cU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1dU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1dU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1dU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1eU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1eU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1eU])) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1fU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1fU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1fU])) 
                                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x20U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x20U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x20U])) 
                                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x21U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x21U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x21U])) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x22U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x22U]) 
                                                                               ^ 
                                                                               vlSelf->leaf_tb__DOT__expected[0x22U])) 
                                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                ? 
                                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x23U]
                                                                                : 
                                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x23U]) 
                                                                              ^ 
                                                                              vlSelf->leaf_tb__DOT__expected[0x23U])) 
                                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                               ? 
                                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x24U]
                                                                               : 
                                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x24U]) 
                                                                             ^ 
                                                                             vlSelf->leaf_tb__DOT__expected[0x24U])) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                              ? 
                                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x25U]
                                                                              : 
                                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x25U]) 
                                                                            ^ 
                                                                            vlSelf->leaf_tb__DOT__expected[0x25U])) 
                                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                             ? 
                                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x26U]
                                                                             : 
                                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x26U]) 
                                                                           ^ 
                                                                           vlSelf->leaf_tb__DOT__expected[0x26U])) 
                                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                            ? 
                                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x27U]
                                                                            : 
                                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x27U]) 
                                                                          ^ 
                                                                          vlSelf->leaf_tb__DOT__expected[0x27U])) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                           ? 
                                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x28U]
                                                                           : 
                                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x28U]) 
                                                                         ^ 
                                                                         vlSelf->leaf_tb__DOT__expected[0x28U])) 
                                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                          ? 
                                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x29U]
                                                                          : 
                                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x29U]) 
                                                                        ^ 
                                                                        vlSelf->leaf_tb__DOT__expected[0x29U])) 
                                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                         ? 
                                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2aU]
                                                                         : 
                                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2aU]) 
                                                                       ^ 
                                                                       vlSelf->leaf_tb__DOT__expected[0x2aU])) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                        ? 
                                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2bU]
                                                                        : 
                                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2bU]) 
                                                                      ^ 
                                                                      vlSelf->leaf_tb__DOT__expected[0x2bU])) 
                                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                       ? 
                                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2cU]
                                                                       : 
                                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2cU]) 
                                                                     ^ 
                                                                     vlSelf->leaf_tb__DOT__expected[0x2cU])) 
                                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                      ? 
                                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2dU]
                                                                      : 
                                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2dU]) 
                                                                    ^ 
                                                                    vlSelf->leaf_tb__DOT__expected[0x2dU])) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                     ? 
                                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2eU]
                                                                     : 
                                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2eU]) 
                                                                   ^ 
                                                                   vlSelf->leaf_tb__DOT__expected[0x2eU])) 
                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                    ? 
                                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2fU]
                                                                    : 
                                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2fU]) 
                                                                  ^ 
                                                                  vlSelf->leaf_tb__DOT__expected[0x2fU])) 
                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                   ? 
                                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x30U]
                                                                   : 
                                                                  Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x30U]) 
                                                                 ^ 
                                                                 vlSelf->leaf_tb__DOT__expected[0x30U])) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                  ? 
                                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x31U]
                                                                  : 
                                                                 Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x31U]) 
                                                                ^ 
                                                                vlSelf->leaf_tb__DOT__expected[0x31U])) 
                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? 
                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x32U]
                                                                 : 
                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x32U]) 
                                                               ^ 
                                                               vlSelf->leaf_tb__DOT__expected[0x32U])) 
                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? 
                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x33U]
                                                                : 
                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x33U]) 
                                                              ^ 
                                                              vlSelf->leaf_tb__DOT__expected[0x33U])) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                               ? 
                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x34U]
                                                               : 
                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x34U]) 
                                                             ^ 
                                                             vlSelf->leaf_tb__DOT__expected[0x34U])) 
                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                              ? 
                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x35U]
                                                              : 
                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x35U]) 
                                                            ^ 
                                                            vlSelf->leaf_tb__DOT__expected[0x35U])) 
                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? 
                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x36U]
                                                             : 
                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x36U]) 
                                                           ^ 
                                                           vlSelf->leaf_tb__DOT__expected[0x36U])) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? 
                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x37U]
                                                            : 
                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x37U]) 
                                                          ^ 
                                                          vlSelf->leaf_tb__DOT__expected[0x37U])) 
                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                           ? 
                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x38U]
                                                           : 
                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x38U]) 
                                                         ^ 
                                                         vlSelf->leaf_tb__DOT__expected[0x38U])) 
                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                          ? 
                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x39U]
                                                          : 
                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x39U]) 
                                                        ^ 
                                                        vlSelf->leaf_tb__DOT__expected[0x39U])) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                         ? 
                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3aU]
                                                         : 
                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3aU]) 
                                                       ^ 
                                                       vlSelf->leaf_tb__DOT__expected[0x3aU])) 
                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                        ? 
                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3bU]
                                                        : 
                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3bU]) 
                                                      ^ 
                                                      vlSelf->leaf_tb__DOT__expected[0x3bU])) 
                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                       ? 
                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3cU]
                                                       : 
                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3cU]) 
                                                     ^ 
                                                     vlSelf->leaf_tb__DOT__expected[0x3cU])) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3dU]
                                                      : 
                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3dU]) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[0x3dU])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3eU]
                                                     : 
                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3eU]) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[0x3eU])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3fU]
                                                    : 
                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3fU]) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0x3fU])))) 
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
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != (((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0U]) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[1U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[1U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[2U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[2U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[3U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[3U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[4U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[4U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[4U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[5U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[5U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[5U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[6U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[6U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[6U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[7U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[7U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[7U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[8U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[8U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[8U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[9U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[9U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[9U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xaU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xaU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xaU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xbU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xbU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xbU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xcU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xcU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xcU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xdU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xdU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xdU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xeU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xeU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xeU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xfU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xfU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xfU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x10U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x10U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x10U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x11U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x11U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x11U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x12U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x12U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x12U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x13U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x13U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x13U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x14U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x14U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x14U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x15U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x15U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x15U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x16U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x16U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x16U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x17U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x17U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x17U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x18U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x18U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x18U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x19U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x19U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x19U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1aU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1aU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1aU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1bU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1bU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1bU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1cU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1cU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1cU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1dU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1dU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1dU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1eU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1eU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1eU])) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1fU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1fU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1fU])) 
                                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x20U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x20U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x20U])) 
                                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x21U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x21U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x21U])) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x22U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x22U]) 
                                                                               ^ 
                                                                               vlSelf->leaf_tb__DOT__expected[0x22U])) 
                                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                ? 
                                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x23U]
                                                                                : 
                                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x23U]) 
                                                                              ^ 
                                                                              vlSelf->leaf_tb__DOT__expected[0x23U])) 
                                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                               ? 
                                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x24U]
                                                                               : 
                                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x24U]) 
                                                                             ^ 
                                                                             vlSelf->leaf_tb__DOT__expected[0x24U])) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                              ? 
                                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x25U]
                                                                              : 
                                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x25U]) 
                                                                            ^ 
                                                                            vlSelf->leaf_tb__DOT__expected[0x25U])) 
                                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                             ? 
                                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x26U]
                                                                             : 
                                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x26U]) 
                                                                           ^ 
                                                                           vlSelf->leaf_tb__DOT__expected[0x26U])) 
                                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                            ? 
                                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x27U]
                                                                            : 
                                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x27U]) 
                                                                          ^ 
                                                                          vlSelf->leaf_tb__DOT__expected[0x27U])) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                           ? 
                                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x28U]
                                                                           : 
                                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x28U]) 
                                                                         ^ 
                                                                         vlSelf->leaf_tb__DOT__expected[0x28U])) 
                                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                          ? 
                                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x29U]
                                                                          : 
                                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x29U]) 
                                                                        ^ 
                                                                        vlSelf->leaf_tb__DOT__expected[0x29U])) 
                                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                         ? 
                                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2aU]
                                                                         : 
                                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2aU]) 
                                                                       ^ 
                                                                       vlSelf->leaf_tb__DOT__expected[0x2aU])) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                        ? 
                                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2bU]
                                                                        : 
                                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2bU]) 
                                                                      ^ 
                                                                      vlSelf->leaf_tb__DOT__expected[0x2bU])) 
                                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                       ? 
                                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2cU]
                                                                       : 
                                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2cU]) 
                                                                     ^ 
                                                                     vlSelf->leaf_tb__DOT__expected[0x2cU])) 
                                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                      ? 
                                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2dU]
                                                                      : 
                                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2dU]) 
                                                                    ^ 
                                                                    vlSelf->leaf_tb__DOT__expected[0x2dU])) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                     ? 
                                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2eU]
                                                                     : 
                                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2eU]) 
                                                                   ^ 
                                                                   vlSelf->leaf_tb__DOT__expected[0x2eU])) 
                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                    ? 
                                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2fU]
                                                                    : 
                                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2fU]) 
                                                                  ^ 
                                                                  vlSelf->leaf_tb__DOT__expected[0x2fU])) 
                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                   ? 
                                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x30U]
                                                                   : 
                                                                  Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x30U]) 
                                                                 ^ 
                                                                 vlSelf->leaf_tb__DOT__expected[0x30U])) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                  ? 
                                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x31U]
                                                                  : 
                                                                 Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x31U]) 
                                                                ^ 
                                                                vlSelf->leaf_tb__DOT__expected[0x31U])) 
                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? 
                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x32U]
                                                                 : 
                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x32U]) 
                                                               ^ 
                                                               vlSelf->leaf_tb__DOT__expected[0x32U])) 
                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? 
                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x33U]
                                                                : 
                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x33U]) 
                                                              ^ 
                                                              vlSelf->leaf_tb__DOT__expected[0x33U])) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                               ? 
                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x34U]
                                                               : 
                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x34U]) 
                                                             ^ 
                                                             vlSelf->leaf_tb__DOT__expected[0x34U])) 
                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                              ? 
                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x35U]
                                                              : 
                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x35U]) 
                                                            ^ 
                                                            vlSelf->leaf_tb__DOT__expected[0x35U])) 
                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? 
                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x36U]
                                                             : 
                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x36U]) 
                                                           ^ 
                                                           vlSelf->leaf_tb__DOT__expected[0x36U])) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? 
                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x37U]
                                                            : 
                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x37U]) 
                                                          ^ 
                                                          vlSelf->leaf_tb__DOT__expected[0x37U])) 
                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                           ? 
                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x38U]
                                                           : 
                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x38U]) 
                                                         ^ 
                                                         vlSelf->leaf_tb__DOT__expected[0x38U])) 
                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                          ? 
                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x39U]
                                                          : 
                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x39U]) 
                                                        ^ 
                                                        vlSelf->leaf_tb__DOT__expected[0x39U])) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                         ? 
                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3aU]
                                                         : 
                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3aU]) 
                                                       ^ 
                                                       vlSelf->leaf_tb__DOT__expected[0x3aU])) 
                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                        ? 
                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3bU]
                                                        : 
                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3bU]) 
                                                      ^ 
                                                      vlSelf->leaf_tb__DOT__expected[0x3bU])) 
                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                       ? 
                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3cU]
                                                       : 
                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3cU]) 
                                                     ^ 
                                                     vlSelf->leaf_tb__DOT__expected[0x3cU])) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3dU]
                                                      : 
                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3dU]) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[0x3dU])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3eU]
                                                     : 
                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3eU]) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[0x3eU])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3fU]
                                                    : 
                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3fU]) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0x3fU])))) 
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
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           64);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           64);
        if (VL_UNLIKELY((1U & ((((((((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                                     | (0U != (((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0U]) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[1U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[1U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[1U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[2U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[2U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[2U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[3U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[3U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[3U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[4U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[4U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[4U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[5U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[5U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[5U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[6U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[6U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[6U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[7U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[7U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[7U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[8U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[8U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[8U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[9U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[9U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[9U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xaU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xaU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xaU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xbU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xbU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xbU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xcU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xcU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xcU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xdU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xdU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xdU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xeU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xeU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xeU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0xfU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0xfU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0xfU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x10U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x10U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x10U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x11U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x11U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x11U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x12U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x12U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x12U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x13U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x13U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x13U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x14U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x14U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x14U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x15U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x15U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x15U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x16U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x16U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x16U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x17U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x17U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x17U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x18U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x18U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x18U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x19U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x19U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x19U])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1aU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1aU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1aU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1bU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1bU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1bU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1cU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1cU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1cU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1dU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1dU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1dU])) 
                                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1eU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1eU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1eU])) 
                                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x1fU]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x1fU]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x1fU])) 
                                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x20U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x20U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x20U])) 
                                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x21U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x21U]) 
                                                                                ^ 
                                                                                vlSelf->leaf_tb__DOT__expected[0x21U])) 
                                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                 ? 
                                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x22U]
                                                                                 : 
                                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x22U]) 
                                                                               ^ 
                                                                               vlSelf->leaf_tb__DOT__expected[0x22U])) 
                                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                                ? 
                                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x23U]
                                                                                : 
                                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x23U]) 
                                                                              ^ 
                                                                              vlSelf->leaf_tb__DOT__expected[0x23U])) 
                                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                               ? 
                                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x24U]
                                                                               : 
                                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x24U]) 
                                                                             ^ 
                                                                             vlSelf->leaf_tb__DOT__expected[0x24U])) 
                                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                              ? 
                                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x25U]
                                                                              : 
                                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x25U]) 
                                                                            ^ 
                                                                            vlSelf->leaf_tb__DOT__expected[0x25U])) 
                                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                             ? 
                                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x26U]
                                                                             : 
                                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x26U]) 
                                                                           ^ 
                                                                           vlSelf->leaf_tb__DOT__expected[0x26U])) 
                                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                            ? 
                                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x27U]
                                                                            : 
                                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x27U]) 
                                                                          ^ 
                                                                          vlSelf->leaf_tb__DOT__expected[0x27U])) 
                                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                           ? 
                                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x28U]
                                                                           : 
                                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x28U]) 
                                                                         ^ 
                                                                         vlSelf->leaf_tb__DOT__expected[0x28U])) 
                                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                          ? 
                                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x29U]
                                                                          : 
                                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x29U]) 
                                                                        ^ 
                                                                        vlSelf->leaf_tb__DOT__expected[0x29U])) 
                                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                         ? 
                                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2aU]
                                                                         : 
                                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2aU]) 
                                                                       ^ 
                                                                       vlSelf->leaf_tb__DOT__expected[0x2aU])) 
                                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                        ? 
                                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2bU]
                                                                        : 
                                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2bU]) 
                                                                      ^ 
                                                                      vlSelf->leaf_tb__DOT__expected[0x2bU])) 
                                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                       ? 
                                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2cU]
                                                                       : 
                                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2cU]) 
                                                                     ^ 
                                                                     vlSelf->leaf_tb__DOT__expected[0x2cU])) 
                                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                      ? 
                                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2dU]
                                                                      : 
                                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2dU]) 
                                                                    ^ 
                                                                    vlSelf->leaf_tb__DOT__expected[0x2dU])) 
                                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                     ? 
                                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2eU]
                                                                     : 
                                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2eU]) 
                                                                   ^ 
                                                                   vlSelf->leaf_tb__DOT__expected[0x2eU])) 
                                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                    ? 
                                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x2fU]
                                                                    : 
                                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x2fU]) 
                                                                  ^ 
                                                                  vlSelf->leaf_tb__DOT__expected[0x2fU])) 
                                                              | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                   ? 
                                                                  vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x30U]
                                                                   : 
                                                                  Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x30U]) 
                                                                 ^ 
                                                                 vlSelf->leaf_tb__DOT__expected[0x30U])) 
                                                             | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                  ? 
                                                                 vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x31U]
                                                                  : 
                                                                 Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x31U]) 
                                                                ^ 
                                                                vlSelf->leaf_tb__DOT__expected[0x31U])) 
                                                            | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? 
                                                                vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x32U]
                                                                 : 
                                                                Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x32U]) 
                                                               ^ 
                                                               vlSelf->leaf_tb__DOT__expected[0x32U])) 
                                                           | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? 
                                                               vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x33U]
                                                                : 
                                                               Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x33U]) 
                                                              ^ 
                                                              vlSelf->leaf_tb__DOT__expected[0x33U])) 
                                                          | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                               ? 
                                                              vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x34U]
                                                               : 
                                                              Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x34U]) 
                                                             ^ 
                                                             vlSelf->leaf_tb__DOT__expected[0x34U])) 
                                                         | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                              ? 
                                                             vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x35U]
                                                              : 
                                                             Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x35U]) 
                                                            ^ 
                                                            vlSelf->leaf_tb__DOT__expected[0x35U])) 
                                                        | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                             ? 
                                                            vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x36U]
                                                             : 
                                                            Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x36U]) 
                                                           ^ 
                                                           vlSelf->leaf_tb__DOT__expected[0x36U])) 
                                                       | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                            ? 
                                                           vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x37U]
                                                            : 
                                                           Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x37U]) 
                                                          ^ 
                                                          vlSelf->leaf_tb__DOT__expected[0x37U])) 
                                                      | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                           ? 
                                                          vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x38U]
                                                           : 
                                                          Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x38U]) 
                                                         ^ 
                                                         vlSelf->leaf_tb__DOT__expected[0x38U])) 
                                                     | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                          ? 
                                                         vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x39U]
                                                          : 
                                                         Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x39U]) 
                                                        ^ 
                                                        vlSelf->leaf_tb__DOT__expected[0x39U])) 
                                                    | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                         ? 
                                                        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3aU]
                                                         : 
                                                        Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3aU]) 
                                                       ^ 
                                                       vlSelf->leaf_tb__DOT__expected[0x3aU])) 
                                                   | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                        ? 
                                                       vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3bU]
                                                        : 
                                                       Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3bU]) 
                                                      ^ 
                                                      vlSelf->leaf_tb__DOT__expected[0x3bU])) 
                                                  | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                       ? 
                                                      vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3cU]
                                                       : 
                                                      Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3cU]) 
                                                     ^ 
                                                     vlSelf->leaf_tb__DOT__expected[0x3cU])) 
                                                 | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                      ? 
                                                     vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3dU]
                                                      : 
                                                     Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3dU]) 
                                                    ^ 
                                                    vlSelf->leaf_tb__DOT__expected[0x3dU])) 
                                                | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                     ? 
                                                    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3eU]
                                                     : 
                                                    Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3eU]) 
                                                   ^ 
                                                   vlSelf->leaf_tb__DOT__expected[0x3eU])) 
                                               | (((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                    ? 
                                                   vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[0x3fU]
                                                    : 
                                                   Vleaf_tb__ConstPool__CONST_h6be9aa18_0[0x3fU]) 
                                                  ^ 
                                                  vlSelf->leaf_tb__DOT__expected[0x3fU])))) 
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
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 67, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           69);
        vlSelf->leaf_tb__DOT__out_ready = 1U;
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           70);
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->leaf_tb__DOT__out_valid)) 
                               | (IData)(vlSelf->leaf_tb__DOT__in_ready))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:71: Assertion failed in %Nleaf_tb: RETIRE_PREEDGE\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 71, "");
        }
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           72);
        if (VL_UNLIKELY((1U & ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                               | (~ (IData)(vlSelf->leaf_tb__DOT__in_ready)))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:73: Assertion failed in %Nleaf_tb: RETIRE_OWNERSHIP\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 73, "");
        }
        co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           74);
        vlSelf->leaf_tb__DOT__out_ready = 0U;
        vlSelf->leaf_tb__DOT__case_id = ((IData)(1U) 
                                         + vlSelf->leaf_tb__DOT__case_id);
        leaf_tb__DOT__rc = VL_FSCANF_IX(leaf_tb__DOT__fd,"%# %# %# %# %x %x %x %x %# %x\n",
                                        32,&(vlSelf->leaf_tb__DOT__key_value),
                                        32,&(vlSelf->leaf_tb__DOT__head_value),
                                        32,&(vlSelf->leaf_tb__DOT__layer_value),
                                        32,&(vlSelf->leaf_tb__DOT__position_value),
                                        2048,&(vlSelf->leaf_tb__DOT__in_data),
                                        2048,&(vlSelf->leaf_tb__DOT__in_gamma),
                                        1024,&(vlSelf->leaf_tb__DOT__in_cos),
                                        1024,&(vlSelf->leaf_tb__DOT__in_sin),
                                        32,&(vlSelf->leaf_tb__DOT__expected_error),
                                        2048,&(vlSelf->leaf_tb__DOT__expected)) ;
    }
    if (VL_UNLIKELY(((0U != leaf_tb__DOT__rc) & (0xffffffffU 
                                                 != leaf_tb__DOT__rc)))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:80: Assertion failed in %Nleaf_tb: MALFORMED_VECTOR rc=%0d\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  32,leaf_tb__DOT__rc);
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 80, "");
    }
    if (VL_UNLIKELY((0U == vlSelf->leaf_tb__DOT__case_id))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:81: Assertion failed in %Nleaf_tb: EMPTY_COMPARISON\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 81, "");
    }
    VL_FCLOSE_I(leaf_tb__DOT__fd); co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge leaf_tb.clk)", 
                                                                                "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                                                83);
    vlSelf->leaf_tb__DOT__in_valid = 1U;
    vlSelf->leaf_tb__DOT__in_pos = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       84);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       84);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       85);
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       86);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       87);
    vlSelf->leaf_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       88);
    if (vlSelf->leaf_tb__DOT__out_valid) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_16[__Vilp] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_16[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    VL_CONCAT_WQW(2112,64,2048, __Vtemp_17, (((QData)((IData)(
                                                              ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                 : 0U)))), __Vtemp_16);
    VL_CONCAT_WIW(2118,6,2112, __Vtemp_18, ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                             ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                             : 0U), __Vtemp_17);
    VL_CONCAT_WIW(2119,1,2118, __Vtemp_19, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                            & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)), __Vtemp_18);
    VL_CONCAT_WIW(2120,1,2119, __Vtemp_20, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                            & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)), __Vtemp_19);
    VL_CONCAT_WIW(2121,1,2120, __Vtemp_21, (IData)(vlSelf->leaf_tb__DOT__out_valid), __Vtemp_20);
    VL_CONCAT_WIW(2122,1,2121, __Vtemp_22, (IData)(vlSelf->leaf_tb__DOT__in_ready), __Vtemp_21);
    if (VL_UNLIKELY((0U != ((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((Vleaf_tb__ConstPool__CONST_h8b259bed_0[0U] 
                                                                                ^ 
                                                                                __Vtemp_22[0U]) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[1U] 
                                                                                ^ 
                                                                                __Vtemp_22[1U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[2U] 
                                                                                ^ 
                                                                                __Vtemp_22[2U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[3U] 
                                                                                ^ 
                                                                                __Vtemp_22[3U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[4U] 
                                                                                ^ 
                                                                                __Vtemp_22[4U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[5U] 
                                                                                ^ 
                                                                                __Vtemp_22[5U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[6U] 
                                                                                ^ 
                                                                                __Vtemp_22[6U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[7U] 
                                                                                ^ 
                                                                                __Vtemp_22[7U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[8U] 
                                                                                ^ 
                                                                                __Vtemp_22[8U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[9U] 
                                                                                ^ 
                                                                                __Vtemp_22[9U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xaU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xaU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xbU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xbU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xcU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xcU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xdU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xdU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xeU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xeU])) 
                                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xfU] 
                                                                                ^ 
                                                                                __Vtemp_22[0xfU])) 
                                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x10U] 
                                                                                ^ 
                                                                                __Vtemp_22[0x10U])) 
                                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x11U] 
                                                                                ^ 
                                                                                __Vtemp_22[0x11U])) 
                                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x12U] 
                                                                               ^ 
                                                                               __Vtemp_22[0x12U])) 
                                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x13U] 
                                                                              ^ 
                                                                              __Vtemp_22[0x13U])) 
                                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x14U] 
                                                                             ^ 
                                                                             __Vtemp_22[0x14U])) 
                                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x15U] 
                                                                            ^ 
                                                                            __Vtemp_22[0x15U])) 
                                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x16U] 
                                                                           ^ 
                                                                           __Vtemp_22[0x16U])) 
                                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x17U] 
                                                                          ^ 
                                                                          __Vtemp_22[0x17U])) 
                                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x18U] 
                                                                         ^ 
                                                                         __Vtemp_22[0x18U])) 
                                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x19U] 
                                                                        ^ 
                                                                        __Vtemp_22[0x19U])) 
                                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1aU] 
                                                                       ^ 
                                                                       __Vtemp_22[0x1aU])) 
                                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1bU] 
                                                                      ^ 
                                                                      __Vtemp_22[0x1bU])) 
                                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1cU] 
                                                                     ^ 
                                                                     __Vtemp_22[0x1cU])) 
                                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1dU] 
                                                                    ^ 
                                                                    __Vtemp_22[0x1dU])) 
                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1eU] 
                                                                   ^ 
                                                                   __Vtemp_22[0x1eU])) 
                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1fU] 
                                                                  ^ 
                                                                  __Vtemp_22[0x1fU])) 
                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x20U] 
                                                                 ^ 
                                                                 __Vtemp_22[0x20U])) 
                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x21U] 
                                                                ^ 
                                                                __Vtemp_22[0x21U])) 
                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x22U] 
                                                               ^ 
                                                               __Vtemp_22[0x22U])) 
                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x23U] 
                                                              ^ 
                                                              __Vtemp_22[0x23U])) 
                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x24U] 
                                                             ^ 
                                                             __Vtemp_22[0x24U])) 
                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x25U] 
                                                            ^ 
                                                            __Vtemp_22[0x25U])) 
                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x26U] 
                                                           ^ 
                                                           __Vtemp_22[0x26U])) 
                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x27U] 
                                                          ^ 
                                                          __Vtemp_22[0x27U])) 
                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x28U] 
                                                         ^ 
                                                         __Vtemp_22[0x28U])) 
                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x29U] 
                                                        ^ 
                                                        __Vtemp_22[0x29U])) 
                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2aU] 
                                                       ^ 
                                                       __Vtemp_22[0x2aU])) 
                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2bU] 
                                                      ^ 
                                                      __Vtemp_22[0x2bU])) 
                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2cU] 
                                                     ^ 
                                                     __Vtemp_22[0x2cU])) 
                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2dU] 
                                                    ^ 
                                                    __Vtemp_22[0x2dU])) 
                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2eU] 
                                                   ^ 
                                                   __Vtemp_22[0x2eU])) 
                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2fU] 
                                                  ^ 
                                                  __Vtemp_22[0x2fU])) 
                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x30U] 
                                                 ^ 
                                                 __Vtemp_22[0x30U])) 
                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x31U] 
                                                ^ __Vtemp_22[0x31U])) 
                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x32U] 
                                               ^ __Vtemp_22[0x32U])) 
                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x33U] 
                                              ^ __Vtemp_22[0x33U])) 
                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x34U] 
                                             ^ __Vtemp_22[0x34U])) 
                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x35U] 
                                            ^ __Vtemp_22[0x35U])) 
                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x36U] 
                                           ^ __Vtemp_22[0x36U])) 
                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x37U] 
                                          ^ __Vtemp_22[0x37U])) 
                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x38U] 
                                         ^ __Vtemp_22[0x38U])) 
                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x39U] 
                                        ^ __Vtemp_22[0x39U])) 
                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3aU] 
                                       ^ __Vtemp_22[0x3aU])) 
                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3bU] 
                                      ^ __Vtemp_22[0x3bU])) 
                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3cU] 
                                     ^ __Vtemp_22[0x3cU])) 
                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3dU] 
                                    ^ __Vtemp_22[0x3dU])) 
                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3eU] 
                                   ^ __Vtemp_22[0x3eU])) 
                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3fU] 
                                  ^ __Vtemp_22[0x3fU])) 
                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x40U] 
                                 ^ __Vtemp_22[0x40U])) 
                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x41U] 
                                ^ __Vtemp_22[0x41U])) 
                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x42U] 
                               ^ __Vtemp_22[0x42U]))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       89);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       89);
    vlSelf->leaf_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       91);
    vlSelf->leaf_tb__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       92);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       92);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       93);
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       94);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       95);
    vlSelf->leaf_tb__DOT__flush = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       96);
    if (vlSelf->leaf_tb__DOT__out_valid) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_23[__Vilp] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_23[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    VL_CONCAT_WQW(2112,64,2048, __Vtemp_24, (((QData)((IData)(
                                                              ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                 ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                 : 0U)))), __Vtemp_23);
    VL_CONCAT_WIW(2118,6,2112, __Vtemp_25, ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                             ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                             : 0U), __Vtemp_24);
    VL_CONCAT_WIW(2119,1,2118, __Vtemp_26, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                            & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)), __Vtemp_25);
    VL_CONCAT_WIW(2120,1,2119, __Vtemp_27, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                            & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)), __Vtemp_26);
    VL_CONCAT_WIW(2121,1,2120, __Vtemp_28, (IData)(vlSelf->leaf_tb__DOT__out_valid), __Vtemp_27);
    VL_CONCAT_WIW(2122,1,2121, __Vtemp_29, (IData)(vlSelf->leaf_tb__DOT__in_ready), __Vtemp_28);
    if (VL_UNLIKELY((0U != ((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((Vleaf_tb__ConstPool__CONST_h8b259bed_0[0U] 
                                                                                ^ 
                                                                                __Vtemp_29[0U]) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[1U] 
                                                                                ^ 
                                                                                __Vtemp_29[1U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[2U] 
                                                                                ^ 
                                                                                __Vtemp_29[2U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[3U] 
                                                                                ^ 
                                                                                __Vtemp_29[3U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[4U] 
                                                                                ^ 
                                                                                __Vtemp_29[4U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[5U] 
                                                                                ^ 
                                                                                __Vtemp_29[5U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[6U] 
                                                                                ^ 
                                                                                __Vtemp_29[6U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[7U] 
                                                                                ^ 
                                                                                __Vtemp_29[7U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[8U] 
                                                                                ^ 
                                                                                __Vtemp_29[8U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[9U] 
                                                                                ^ 
                                                                                __Vtemp_29[9U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xaU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xaU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xbU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xbU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xcU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xcU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xdU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xdU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xeU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xeU])) 
                                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xfU] 
                                                                                ^ 
                                                                                __Vtemp_29[0xfU])) 
                                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x10U] 
                                                                                ^ 
                                                                                __Vtemp_29[0x10U])) 
                                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x11U] 
                                                                                ^ 
                                                                                __Vtemp_29[0x11U])) 
                                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x12U] 
                                                                               ^ 
                                                                               __Vtemp_29[0x12U])) 
                                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x13U] 
                                                                              ^ 
                                                                              __Vtemp_29[0x13U])) 
                                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x14U] 
                                                                             ^ 
                                                                             __Vtemp_29[0x14U])) 
                                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x15U] 
                                                                            ^ 
                                                                            __Vtemp_29[0x15U])) 
                                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x16U] 
                                                                           ^ 
                                                                           __Vtemp_29[0x16U])) 
                                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x17U] 
                                                                          ^ 
                                                                          __Vtemp_29[0x17U])) 
                                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x18U] 
                                                                         ^ 
                                                                         __Vtemp_29[0x18U])) 
                                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x19U] 
                                                                        ^ 
                                                                        __Vtemp_29[0x19U])) 
                                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1aU] 
                                                                       ^ 
                                                                       __Vtemp_29[0x1aU])) 
                                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1bU] 
                                                                      ^ 
                                                                      __Vtemp_29[0x1bU])) 
                                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1cU] 
                                                                     ^ 
                                                                     __Vtemp_29[0x1cU])) 
                                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1dU] 
                                                                    ^ 
                                                                    __Vtemp_29[0x1dU])) 
                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1eU] 
                                                                   ^ 
                                                                   __Vtemp_29[0x1eU])) 
                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1fU] 
                                                                  ^ 
                                                                  __Vtemp_29[0x1fU])) 
                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x20U] 
                                                                 ^ 
                                                                 __Vtemp_29[0x20U])) 
                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x21U] 
                                                                ^ 
                                                                __Vtemp_29[0x21U])) 
                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x22U] 
                                                               ^ 
                                                               __Vtemp_29[0x22U])) 
                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x23U] 
                                                              ^ 
                                                              __Vtemp_29[0x23U])) 
                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x24U] 
                                                             ^ 
                                                             __Vtemp_29[0x24U])) 
                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x25U] 
                                                            ^ 
                                                            __Vtemp_29[0x25U])) 
                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x26U] 
                                                           ^ 
                                                           __Vtemp_29[0x26U])) 
                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x27U] 
                                                          ^ 
                                                          __Vtemp_29[0x27U])) 
                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x28U] 
                                                         ^ 
                                                         __Vtemp_29[0x28U])) 
                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x29U] 
                                                        ^ 
                                                        __Vtemp_29[0x29U])) 
                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2aU] 
                                                       ^ 
                                                       __Vtemp_29[0x2aU])) 
                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2bU] 
                                                      ^ 
                                                      __Vtemp_29[0x2bU])) 
                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2cU] 
                                                     ^ 
                                                     __Vtemp_29[0x2cU])) 
                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2dU] 
                                                    ^ 
                                                    __Vtemp_29[0x2dU])) 
                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2eU] 
                                                   ^ 
                                                   __Vtemp_29[0x2eU])) 
                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2fU] 
                                                  ^ 
                                                  __Vtemp_29[0x2fU])) 
                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x30U] 
                                                 ^ 
                                                 __Vtemp_29[0x30U])) 
                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x31U] 
                                                ^ __Vtemp_29[0x31U])) 
                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x32U] 
                                               ^ __Vtemp_29[0x32U])) 
                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x33U] 
                                              ^ __Vtemp_29[0x33U])) 
                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x34U] 
                                             ^ __Vtemp_29[0x34U])) 
                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x35U] 
                                            ^ __Vtemp_29[0x35U])) 
                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x36U] 
                                           ^ __Vtemp_29[0x36U])) 
                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x37U] 
                                          ^ __Vtemp_29[0x37U])) 
                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x38U] 
                                         ^ __Vtemp_29[0x38U])) 
                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x39U] 
                                        ^ __Vtemp_29[0x39U])) 
                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3aU] 
                                       ^ __Vtemp_29[0x3aU])) 
                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3bU] 
                                      ^ __Vtemp_29[0x3bU])) 
                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3cU] 
                                     ^ __Vtemp_29[0x3cU])) 
                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3dU] 
                                    ^ __Vtemp_29[0x3dU])) 
                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3eU] 
                                   ^ __Vtemp_29[0x3eU])) 
                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3fU] 
                                  ^ __Vtemp_29[0x3fU])) 
                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x40U] 
                                 ^ __Vtemp_29[0x40U])) 
                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x41U] 
                                ^ __Vtemp_29[0x41U])) 
                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x42U] 
                               ^ __Vtemp_29[0x42U]))))) {
        VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 29, "");
    }
    co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       97);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                       97);
    co_await vlSelf->__VtrigSched_h625605a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge leaf_tb.clk)", 
                                                       "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                       98);
    vlSelf->leaf_tb__DOT__flush = 0U;
    leaf_tb__DOT____Vrepeat3 = 0x8cU;
    while (VL_LTS_III(32, 0U, leaf_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h625605e3__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge leaf_tb.clk)", 
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           100);
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                           100);
        if (VL_UNLIKELY(vlSelf->leaf_tb__DOT__out_valid)) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:101: Assertion failed in %Nleaf_tb: FLUSH_LEAK\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 101, "");
        }
        leaf_tb__DOT____Vrepeat3 = (leaf_tb__DOT____Vrepeat3 
                                    - (IData)(1U));
    }
    VL_WRITEF("SUMMARY qk_cases=%0d elements=%0d latency=133 stall_cycles=%0d reset_during_work=1 flush_during_work=1\n",
              32,vlSelf->leaf_tb__DOT__case_id,32,VL_MULS_III(32, (IData)(0x80U), vlSelf->leaf_tb__DOT__case_id),
              32,VL_MULS_III(32, (IData)(3U), vlSelf->leaf_tb__DOT__case_id));
    VL_FINISH_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 105, "");
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
                                                           "evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 
                                                           108);
        leaf_tb__DOT____Vrepeat4 = (leaf_tb__DOT____Vrepeat4 
                                    - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:109: Assertion failed in %Nleaf_tb: CYCLE_BOUND\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 109, "");
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

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__34(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__34\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    VlWide<67>/*2143:0*/ __Vtemp_3;
    VlWide<67>/*2143:0*/ __Vtemp_4;
    VlWide<67>/*2143:0*/ __Vtemp_5;
    VlWide<67>/*2143:0*/ __Vtemp_6;
    VlWide<67>/*2143:0*/ __Vtemp_7;
    // Body
    if ((1U & (~ (IData)(vlSelf->leaf_tb__DOT__rst_n)))) {
        if (vlSelf->leaf_tb__DOT__out_valid) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                __Vtemp_1[__Vilp] = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_data[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        } else {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                __Vtemp_1[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
        VL_CONCAT_WQW(2112,64,2048, __Vtemp_2, (((QData)((IData)(
                                                                 ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                   ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__layer
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                                    ? vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__position
                                                                    : 0U)))), __Vtemp_1);
        VL_CONCAT_WIW(2118,6,2112, __Vtemp_3, ((IData)(vlSelf->leaf_tb__DOT__out_valid)
                                                ? (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__head)
                                                : 0U), __Vtemp_2);
        VL_CONCAT_WIW(2119,1,2118, __Vtemp_4, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                               & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__key_vector)), __Vtemp_3);
        VL_CONCAT_WIW(2120,1,2119, __Vtemp_5, ((IData)(vlSelf->leaf_tb__DOT__out_valid) 
                                               & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__result_failed)), __Vtemp_4);
        VL_CONCAT_WIW(2121,1,2120, __Vtemp_6, (IData)(vlSelf->leaf_tb__DOT__out_valid), __Vtemp_5);
        VL_CONCAT_WIW(2122,1,2121, __Vtemp_7, (IData)(vlSelf->leaf_tb__DOT__in_ready), __Vtemp_6);
        if (VL_UNLIKELY((0U != ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((Vleaf_tb__ConstPool__CONST_h8b259bed_0[0U] 
                                                                                ^ 
                                                                                __Vtemp_7[0U]) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[1U] 
                                                                                ^ 
                                                                                __Vtemp_7[1U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[2U] 
                                                                                ^ 
                                                                                __Vtemp_7[2U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[3U] 
                                                                                ^ 
                                                                                __Vtemp_7[3U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[4U] 
                                                                                ^ 
                                                                                __Vtemp_7[4U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[5U] 
                                                                                ^ 
                                                                                __Vtemp_7[5U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[6U] 
                                                                                ^ 
                                                                                __Vtemp_7[6U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[7U] 
                                                                                ^ 
                                                                                __Vtemp_7[7U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[8U] 
                                                                                ^ 
                                                                                __Vtemp_7[8U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[9U] 
                                                                                ^ 
                                                                                __Vtemp_7[9U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xaU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xaU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xbU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xbU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xcU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xcU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xdU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xdU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xeU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xeU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0xfU] 
                                                                                ^ 
                                                                                __Vtemp_7[0xfU])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x10U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x10U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x11U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x11U])) 
                                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x12U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x12U])) 
                                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x13U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x13U])) 
                                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x14U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x14U])) 
                                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x15U] 
                                                                                ^ 
                                                                                __Vtemp_7[0x15U])) 
                                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x16U] 
                                                                               ^ 
                                                                               __Vtemp_7[0x16U])) 
                                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x17U] 
                                                                              ^ 
                                                                              __Vtemp_7[0x17U])) 
                                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x18U] 
                                                                             ^ 
                                                                             __Vtemp_7[0x18U])) 
                                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x19U] 
                                                                            ^ 
                                                                            __Vtemp_7[0x19U])) 
                                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1aU] 
                                                                           ^ 
                                                                           __Vtemp_7[0x1aU])) 
                                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1bU] 
                                                                          ^ 
                                                                          __Vtemp_7[0x1bU])) 
                                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1cU] 
                                                                         ^ 
                                                                         __Vtemp_7[0x1cU])) 
                                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1dU] 
                                                                        ^ 
                                                                        __Vtemp_7[0x1dU])) 
                                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1eU] 
                                                                       ^ 
                                                                       __Vtemp_7[0x1eU])) 
                                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x1fU] 
                                                                      ^ 
                                                                      __Vtemp_7[0x1fU])) 
                                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x20U] 
                                                                     ^ 
                                                                     __Vtemp_7[0x20U])) 
                                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x21U] 
                                                                    ^ 
                                                                    __Vtemp_7[0x21U])) 
                                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x22U] 
                                                                   ^ 
                                                                   __Vtemp_7[0x22U])) 
                                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x23U] 
                                                                  ^ 
                                                                  __Vtemp_7[0x23U])) 
                                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x24U] 
                                                                 ^ 
                                                                 __Vtemp_7[0x24U])) 
                                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x25U] 
                                                                ^ 
                                                                __Vtemp_7[0x25U])) 
                                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x26U] 
                                                               ^ 
                                                               __Vtemp_7[0x26U])) 
                                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x27U] 
                                                              ^ 
                                                              __Vtemp_7[0x27U])) 
                                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x28U] 
                                                             ^ 
                                                             __Vtemp_7[0x28U])) 
                                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x29U] 
                                                            ^ 
                                                            __Vtemp_7[0x29U])) 
                                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2aU] 
                                                           ^ 
                                                           __Vtemp_7[0x2aU])) 
                                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2bU] 
                                                          ^ 
                                                          __Vtemp_7[0x2bU])) 
                                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2cU] 
                                                         ^ 
                                                         __Vtemp_7[0x2cU])) 
                                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2dU] 
                                                        ^ 
                                                        __Vtemp_7[0x2dU])) 
                                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2eU] 
                                                       ^ 
                                                       __Vtemp_7[0x2eU])) 
                                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x2fU] 
                                                      ^ 
                                                      __Vtemp_7[0x2fU])) 
                                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x30U] 
                                                     ^ 
                                                     __Vtemp_7[0x30U])) 
                                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x31U] 
                                                    ^ 
                                                    __Vtemp_7[0x31U])) 
                                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x32U] 
                                                   ^ 
                                                   __Vtemp_7[0x32U])) 
                                               | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x33U] 
                                                  ^ 
                                                  __Vtemp_7[0x33U])) 
                                              | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x34U] 
                                                 ^ 
                                                 __Vtemp_7[0x34U])) 
                                             | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x35U] 
                                                ^ __Vtemp_7[0x35U])) 
                                            | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x36U] 
                                               ^ __Vtemp_7[0x36U])) 
                                           | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x37U] 
                                              ^ __Vtemp_7[0x37U])) 
                                          | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x38U] 
                                             ^ __Vtemp_7[0x38U])) 
                                         | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x39U] 
                                            ^ __Vtemp_7[0x39U])) 
                                        | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3aU] 
                                           ^ __Vtemp_7[0x3aU])) 
                                       | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3bU] 
                                          ^ __Vtemp_7[0x3bU])) 
                                      | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3cU] 
                                         ^ __Vtemp_7[0x3cU])) 
                                     | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3dU] 
                                        ^ __Vtemp_7[0x3dU])) 
                                    | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3eU] 
                                       ^ __Vtemp_7[0x3eU])) 
                                   | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x3fU] 
                                      ^ __Vtemp_7[0x3fU])) 
                                  | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x40U] 
                                     ^ __Vtemp_7[0x40U])) 
                                 | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x41U] 
                                    ^ __Vtemp_7[0x41U])) 
                                | (Vleaf_tb__ConstPool__CONST_h8b259bed_0[0x42U] 
                                   ^ __Vtemp_7[0x42U]))))) {
            VL_WRITEF("[%0t] %%Fatal: qk_tb.sv:29: Assertion failed in %Nleaf_tb.reset_outputs: RESET_XZ_OR_NONZERO\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 29, "");
        }
    }
}
