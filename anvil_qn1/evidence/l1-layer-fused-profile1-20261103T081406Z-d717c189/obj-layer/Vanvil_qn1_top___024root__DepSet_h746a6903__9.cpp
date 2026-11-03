// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

extern const VlWide<32>/*1023:0*/ Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vanvil_qn1_top___024root___ico_comb__TOP__5(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___ico_comb__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2851__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x64U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2851__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2852__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2851__value;
                            vlSelf->__Vfunc_bf16_invalid__2852__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2852__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2852__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2851__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2851__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2851__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2853__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x64U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2853__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2853__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2853__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2856__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x65U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2856__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2857__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2856__value;
                            vlSelf->__Vfunc_bf16_invalid__2857__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2857__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2857__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2856__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2856__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2856__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2858__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x65U]);
                vlSelf->__Vfunc_bf16_invalid__2858__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2858__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2858__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2861__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x65U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2861__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2862__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2861__value;
                            vlSelf->__Vfunc_bf16_invalid__2862__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2862__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2862__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2861__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2861__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2861__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2863__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x65U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2863__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2863__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2863__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2866__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x66U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2866__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2867__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2866__value;
                            vlSelf->__Vfunc_bf16_invalid__2867__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2867__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2867__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2866__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2866__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2866__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2868__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x66U]);
                vlSelf->__Vfunc_bf16_invalid__2868__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2868__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2868__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2871__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x66U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2871__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2872__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2871__value;
                            vlSelf->__Vfunc_bf16_invalid__2872__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2872__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2872__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2871__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2871__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2871__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2873__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x66U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2873__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2873__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2873__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2876__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x67U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2876__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2877__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2876__value;
                            vlSelf->__Vfunc_bf16_invalid__2877__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2877__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2877__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2876__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2876__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2876__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2878__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x67U]);
                vlSelf->__Vfunc_bf16_invalid__2878__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2878__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2878__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2881__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x67U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2881__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2882__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2881__value;
                            vlSelf->__Vfunc_bf16_invalid__2882__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2882__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2882__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2881__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2881__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2881__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2883__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x67U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2883__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2883__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2883__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2886__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x68U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2886__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2887__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2886__value;
                            vlSelf->__Vfunc_bf16_invalid__2887__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2887__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2887__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2886__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2886__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2886__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2888__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x68U]);
                vlSelf->__Vfunc_bf16_invalid__2888__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2888__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2888__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2891__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x68U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2891__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2892__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2891__value;
                            vlSelf->__Vfunc_bf16_invalid__2892__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2892__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2892__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2891__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2891__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2891__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2893__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x68U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2893__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2893__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2893__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2896__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x69U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2896__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2897__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2896__value;
                            vlSelf->__Vfunc_bf16_invalid__2897__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2897__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2897__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2896__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2896__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2896__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2898__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x69U]);
                vlSelf->__Vfunc_bf16_invalid__2898__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2898__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2898__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2901__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x69U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2901__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2902__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2901__value;
                            vlSelf->__Vfunc_bf16_invalid__2902__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2902__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2902__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2901__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2901__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2901__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2903__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x69U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2903__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2903__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2903__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2906__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6aU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2906__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2907__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2906__value;
                            vlSelf->__Vfunc_bf16_invalid__2907__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2907__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2907__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2906__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2906__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2906__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2908__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6aU]);
                vlSelf->__Vfunc_bf16_invalid__2908__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2908__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2908__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2911__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6aU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2911__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2912__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2911__value;
                            vlSelf->__Vfunc_bf16_invalid__2912__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2912__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2912__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2911__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2911__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2911__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2913__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6aU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2913__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2913__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2913__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2916__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6bU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2916__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2917__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2916__value;
                            vlSelf->__Vfunc_bf16_invalid__2917__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2917__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2917__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2916__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2916__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2916__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2918__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6bU]);
                vlSelf->__Vfunc_bf16_invalid__2918__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2918__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2918__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2921__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6bU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2921__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2922__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2921__value;
                            vlSelf->__Vfunc_bf16_invalid__2922__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2922__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2922__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2921__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2921__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2921__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2923__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6bU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2923__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2923__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2923__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2926__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6cU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2926__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2927__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2926__value;
                            vlSelf->__Vfunc_bf16_invalid__2927__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2927__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2927__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2926__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2926__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2926__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2928__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6cU]);
                vlSelf->__Vfunc_bf16_invalid__2928__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2928__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2928__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2931__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6cU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2931__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2932__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2931__value;
                            vlSelf->__Vfunc_bf16_invalid__2932__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2932__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2932__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2931__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2931__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2931__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2933__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6cU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2933__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2933__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2933__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2936__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6dU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2936__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2937__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2936__value;
                            vlSelf->__Vfunc_bf16_invalid__2937__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2937__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2937__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2936__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2936__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2936__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2938__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6dU]);
                vlSelf->__Vfunc_bf16_invalid__2938__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2938__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2938__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2941__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6dU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2941__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2942__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2941__value;
                            vlSelf->__Vfunc_bf16_invalid__2942__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2942__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2942__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2941__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2941__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2941__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2943__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6dU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2943__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2943__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2943__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2946__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6eU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2946__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2947__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2946__value;
                            vlSelf->__Vfunc_bf16_invalid__2947__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2947__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2947__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2946__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2946__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2946__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2948__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6eU]);
                vlSelf->__Vfunc_bf16_invalid__2948__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2948__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2948__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2951__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6eU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2951__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2952__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2951__value;
                            vlSelf->__Vfunc_bf16_invalid__2952__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2952__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2952__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2951__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2951__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2951__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2953__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6eU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2953__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2953__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2953__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2956__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6fU]);
                vlSelf->__Vfunc_bf16_scale_invalid__2956__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2957__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2956__value;
                            vlSelf->__Vfunc_bf16_invalid__2957__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2957__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2957__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2956__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2956__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2956__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2958__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6fU]);
                vlSelf->__Vfunc_bf16_invalid__2958__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2958__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2958__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2961__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x6fU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2961__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2962__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2961__value;
                            vlSelf->__Vfunc_bf16_invalid__2962__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2962__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2962__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2961__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2961__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2961__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2963__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x6fU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2963__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2963__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2963__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2966__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x70U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2966__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2967__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2966__value;
                            vlSelf->__Vfunc_bf16_invalid__2967__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2967__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2967__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2966__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2966__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2966__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2968__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x70U]);
                vlSelf->__Vfunc_bf16_invalid__2968__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2968__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2968__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2971__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x70U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2971__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2972__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2971__value;
                            vlSelf->__Vfunc_bf16_invalid__2972__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2972__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2972__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2971__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2971__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2971__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2973__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x70U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2973__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2973__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2973__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2976__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x71U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2976__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2977__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2976__value;
                            vlSelf->__Vfunc_bf16_invalid__2977__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2977__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2977__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2976__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2976__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2976__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2978__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x71U]);
                vlSelf->__Vfunc_bf16_invalid__2978__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2978__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2978__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2981__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x71U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2981__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2982__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2981__value;
                            vlSelf->__Vfunc_bf16_invalid__2982__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2982__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2982__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2981__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2981__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2981__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2983__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x71U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2983__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2983__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2983__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2986__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x72U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2986__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2987__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2986__value;
                            vlSelf->__Vfunc_bf16_invalid__2987__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2987__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2987__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2986__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2986__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2986__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2988__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x72U]);
                vlSelf->__Vfunc_bf16_invalid__2988__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2988__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2988__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2991__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x72U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__2991__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2992__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2991__value;
                            vlSelf->__Vfunc_bf16_invalid__2992__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2992__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2992__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2991__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2991__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2991__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2993__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x72U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__2993__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2993__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2993__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__2996__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x73U]);
                vlSelf->__Vfunc_bf16_scale_invalid__2996__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2997__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__2996__value;
                            vlSelf->__Vfunc_bf16_invalid__2997__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2997__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2997__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__2996__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2996__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__2996__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__2998__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x73U]);
                vlSelf->__Vfunc_bf16_invalid__2998__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__2998__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2998__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3001__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x73U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3001__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3002__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3001__value;
                            vlSelf->__Vfunc_bf16_invalid__3002__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3002__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3002__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3001__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3001__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3001__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3003__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x73U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3003__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3003__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3003__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3006__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x74U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3006__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3007__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3006__value;
                            vlSelf->__Vfunc_bf16_invalid__3007__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3007__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3007__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3006__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3006__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3006__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3008__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x74U]);
                vlSelf->__Vfunc_bf16_invalid__3008__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3008__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3008__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3011__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x74U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3011__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3012__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3011__value;
                            vlSelf->__Vfunc_bf16_invalid__3012__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3012__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3012__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3011__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3011__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3011__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3013__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x74U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3013__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3013__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3013__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3016__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x75U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3016__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3017__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3016__value;
                            vlSelf->__Vfunc_bf16_invalid__3017__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3017__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3017__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3016__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3016__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3016__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3018__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x75U]);
                vlSelf->__Vfunc_bf16_invalid__3018__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3018__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3018__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3021__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x75U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3021__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3022__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3021__value;
                            vlSelf->__Vfunc_bf16_invalid__3022__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3022__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3022__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3021__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3021__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3021__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3023__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x75U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3023__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3023__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3023__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3026__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x76U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3026__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3027__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3026__value;
                            vlSelf->__Vfunc_bf16_invalid__3027__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3027__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3027__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3026__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3026__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3026__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3028__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x76U]);
                vlSelf->__Vfunc_bf16_invalid__3028__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3028__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3028__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3031__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x76U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3031__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3032__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3031__value;
                            vlSelf->__Vfunc_bf16_invalid__3032__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3032__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3032__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3031__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3031__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3031__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3033__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x76U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3033__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3033__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3033__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3036__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x77U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3036__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3037__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3036__value;
                            vlSelf->__Vfunc_bf16_invalid__3037__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3037__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3037__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3036__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3036__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3036__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3038__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x77U]);
                vlSelf->__Vfunc_bf16_invalid__3038__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3038__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3038__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3041__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x77U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3041__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3042__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3041__value;
                            vlSelf->__Vfunc_bf16_invalid__3042__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3042__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3042__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3041__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3041__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3041__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3043__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x77U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3043__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3043__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3043__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3046__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x78U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3046__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3047__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3046__value;
                            vlSelf->__Vfunc_bf16_invalid__3047__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3047__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3047__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3046__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3046__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3046__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3048__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x78U]);
                vlSelf->__Vfunc_bf16_invalid__3048__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3048__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3048__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3051__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x78U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3051__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3052__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3051__value;
                            vlSelf->__Vfunc_bf16_invalid__3052__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3052__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3052__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3051__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3051__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3051__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3053__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x78U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3053__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3053__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3053__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3056__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x79U]);
                vlSelf->__Vfunc_bf16_scale_invalid__3056__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3057__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3056__value;
                            vlSelf->__Vfunc_bf16_invalid__3057__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3057__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3057__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3056__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3056__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3056__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3058__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x79U]);
                vlSelf->__Vfunc_bf16_invalid__3058__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3058__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3058__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3061__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x79U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3061__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3062__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3061__value;
                            vlSelf->__Vfunc_bf16_invalid__3062__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3062__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3062__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3061__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3061__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3061__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3063__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x79U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3063__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3063__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3063__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3066__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7aU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3066__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3067__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3066__value;
                            vlSelf->__Vfunc_bf16_invalid__3067__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3067__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3067__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3066__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3066__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3066__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3068__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7aU]);
                vlSelf->__Vfunc_bf16_invalid__3068__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3068__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3068__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3071__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7aU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3071__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3072__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3071__value;
                            vlSelf->__Vfunc_bf16_invalid__3072__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3072__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3072__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3071__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3071__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3071__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3073__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7aU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3073__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3073__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3073__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3076__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7bU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3076__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3077__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3076__value;
                            vlSelf->__Vfunc_bf16_invalid__3077__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3077__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3077__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3076__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3076__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3076__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3078__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7bU]);
                vlSelf->__Vfunc_bf16_invalid__3078__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3078__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3078__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3081__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7bU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3081__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3082__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3081__value;
                            vlSelf->__Vfunc_bf16_invalid__3082__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3082__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3082__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3081__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3081__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3081__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3083__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7bU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3083__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3083__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3083__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3086__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7cU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3086__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3087__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3086__value;
                            vlSelf->__Vfunc_bf16_invalid__3087__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3087__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3087__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3086__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3086__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3086__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3088__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7cU]);
                vlSelf->__Vfunc_bf16_invalid__3088__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3088__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3088__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3091__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7cU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3091__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3092__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3091__value;
                            vlSelf->__Vfunc_bf16_invalid__3092__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3092__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3092__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3091__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3091__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3091__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3093__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7cU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3093__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3093__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3093__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3096__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7dU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3096__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3097__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3096__value;
                            vlSelf->__Vfunc_bf16_invalid__3097__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3097__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3097__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3096__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3096__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3096__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3098__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7dU]);
                vlSelf->__Vfunc_bf16_invalid__3098__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3098__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3098__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3101__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7dU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3101__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3102__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3101__value;
                            vlSelf->__Vfunc_bf16_invalid__3102__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3102__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3102__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3101__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3101__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3101__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3103__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7dU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3103__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3103__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3103__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3106__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7eU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3106__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3107__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3106__value;
                            vlSelf->__Vfunc_bf16_invalid__3107__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3107__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3107__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3106__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3106__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3106__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3108__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7eU]);
                vlSelf->__Vfunc_bf16_invalid__3108__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3108__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3108__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3111__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7eU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3111__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3112__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3111__value;
                            vlSelf->__Vfunc_bf16_invalid__3112__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3112__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3112__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3111__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3111__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3111__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3113__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7eU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3113__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3113__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3113__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3116__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7fU]);
                vlSelf->__Vfunc_bf16_scale_invalid__3116__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3117__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3116__value;
                            vlSelf->__Vfunc_bf16_invalid__3117__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3117__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3117__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3116__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3116__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3116__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3118__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7fU]);
                vlSelf->__Vfunc_bf16_invalid__3118__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3118__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3118__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__invalid_weight 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tw4)
            ? ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__3121__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__ts[0x7fU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_scale_invalid__3121__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__3122__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__3121__value;
                            vlSelf->__Vfunc_bf16_invalid__3122__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__3122__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3122__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__3121__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3121__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__3121__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_bf16_invalid__3123__value 
                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tb[0x7fU] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__3123__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__3123__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__3123__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT____VdfgTmp_hb23043da__0) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__malformed)) 
              & (2U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__state
                 [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot])));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_key 
            = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__keys) 
                     >> (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot)));
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_head 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__indices
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_layer 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__layers
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_pos 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__positions
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[1U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[2U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[3U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[4U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[5U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[6U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[7U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[8U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[9U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xaU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xbU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xcU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xdU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xeU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xfU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x10U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x11U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x12U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x13U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x14U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x15U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x16U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x17U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x18U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x19U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[1U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[2U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[3U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[4U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[5U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[6U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[7U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[8U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[9U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xaU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xbU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xcU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xdU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xeU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xfU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x10U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x11U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x12U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x13U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x14U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x15U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x16U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x17U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x18U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x19U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sines
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[1U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[2U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[3U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[4U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[5U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[6U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[7U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[8U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[9U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xaU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xbU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xcU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xdU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xeU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xfU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x10U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x11U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x12U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x13U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x14U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x15U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x16U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x17U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x18U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x19U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x20U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x20U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x21U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x21U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x22U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x22U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x23U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x23U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x24U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x24U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x25U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x25U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x26U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x26U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x27U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x27U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x28U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x28U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x29U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x29U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x30U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x30U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x31U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x31U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x32U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x32U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x33U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x33U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x34U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x34U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x35U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x35U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x36U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x36U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x37U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x37U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x38U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x38U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x39U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x39U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__data
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[1U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[2U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[3U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[4U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[5U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[6U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[7U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[8U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[9U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xaU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xbU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xcU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xdU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xeU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xfU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x10U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x11U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x12U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x13U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x14U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x15U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x16U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x17U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x18U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x19U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x20U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x20U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x21U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x21U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x22U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x22U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x23U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x23U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x24U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x24U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x25U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x25U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x26U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x26U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x27U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x27U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x28U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x28U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x29U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x29U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x2fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x30U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x30U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x31U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x31U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x32U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x32U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x33U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x33U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x34U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x34U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x35U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x35U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x36U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x36U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x37U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x37U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x38U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x38U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x39U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x39U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3aU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3bU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3cU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3dU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3eU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3fU] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gammas
            [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__drain_slot][0x3fU];
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_key = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_head = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_layer = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_pos = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[1U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[2U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[3U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[4U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[5U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[6U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[7U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[8U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[9U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xaU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xbU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xcU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xdU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xeU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xfU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x10U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x11U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x12U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x13U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x14U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x15U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x16U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x17U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x18U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x19U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1aU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1bU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1cU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1dU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1eU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1fU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[1U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[2U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[3U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[4U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[5U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[6U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[7U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[8U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[9U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xaU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xbU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xcU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xdU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xeU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xfU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x10U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x11U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x12U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x13U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x14U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x15U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x16U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x17U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x18U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x19U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1aU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1bU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1cU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1dU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1eU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1fU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[6U] 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_ready)) 
               & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid)) 
              | ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fused_ready)) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fused_valid))));
    VL_ASSIGNBIT_QI(0U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8497__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0U]);
                    vlSelf->__Vfunc_bf16_invalid__8497__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8497__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8497__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8498__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0U]);
                    vlSelf->__Vfunc_bf16_invalid__8498__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8498__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8498__Vfuncout))));
    VL_ASSIGNBIT_QI(1U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8503__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8503__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8503__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8503__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8504__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8504__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8504__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8504__Vfuncout))));
    VL_ASSIGNBIT_QI(2U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8509__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[1U]);
                    vlSelf->__Vfunc_bf16_invalid__8509__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8509__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8509__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8510__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[1U]);
                    vlSelf->__Vfunc_bf16_invalid__8510__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8510__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8510__Vfuncout))));
    VL_ASSIGNBIT_QI(3U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8515__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[1U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8515__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8515__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8515__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8516__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[1U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8516__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8516__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8516__Vfuncout))));
    VL_ASSIGNBIT_QI(4U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8521__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[2U]);
                    vlSelf->__Vfunc_bf16_invalid__8521__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8521__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8521__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8522__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[2U]);
                    vlSelf->__Vfunc_bf16_invalid__8522__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8522__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8522__Vfuncout))));
    VL_ASSIGNBIT_QI(5U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8527__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[2U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8527__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8527__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8527__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8528__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[2U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8528__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8528__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8528__Vfuncout))));
    VL_ASSIGNBIT_QI(6U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8533__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[3U]);
                    vlSelf->__Vfunc_bf16_invalid__8533__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8533__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8533__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8534__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[3U]);
                    vlSelf->__Vfunc_bf16_invalid__8534__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8534__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8534__Vfuncout))));
    VL_ASSIGNBIT_QI(7U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8539__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[3U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8539__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8539__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8539__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8540__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[3U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8540__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8540__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8540__Vfuncout))));
    VL_ASSIGNBIT_QI(8U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8545__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[4U]);
                    vlSelf->__Vfunc_bf16_invalid__8545__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8545__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8545__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8546__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[4U]);
                    vlSelf->__Vfunc_bf16_invalid__8546__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8546__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8546__Vfuncout))));
    VL_ASSIGNBIT_QI(9U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8551__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[4U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8551__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8551__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8551__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8552__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[4U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8552__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8552__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8552__Vfuncout))));
    VL_ASSIGNBIT_QI(0xaU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8557__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[5U]);
                    vlSelf->__Vfunc_bf16_invalid__8557__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8557__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8557__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8558__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[5U]);
                    vlSelf->__Vfunc_bf16_invalid__8558__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8558__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8558__Vfuncout))));
    VL_ASSIGNBIT_QI(0xbU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8563__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[5U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8563__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8563__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8563__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8564__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[5U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8564__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8564__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8564__Vfuncout))));
    VL_ASSIGNBIT_QI(0xcU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8569__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[6U]);
                    vlSelf->__Vfunc_bf16_invalid__8569__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8569__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8569__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8570__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[6U]);
                    vlSelf->__Vfunc_bf16_invalid__8570__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8570__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8570__Vfuncout))));
    VL_ASSIGNBIT_QI(0xdU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8575__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[6U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8575__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8575__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8575__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8576__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[6U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8576__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8576__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8576__Vfuncout))));
    VL_ASSIGNBIT_QI(0xeU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8581__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[7U]);
                    vlSelf->__Vfunc_bf16_invalid__8581__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8581__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8581__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8582__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[7U]);
                    vlSelf->__Vfunc_bf16_invalid__8582__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8582__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8582__Vfuncout))));
    VL_ASSIGNBIT_QI(0xfU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8587__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[7U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8587__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8587__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8587__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8588__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[7U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8588__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8588__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8588__Vfuncout))));
    VL_ASSIGNBIT_QI(0x10U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8593__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[8U]);
                    vlSelf->__Vfunc_bf16_invalid__8593__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8593__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8593__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8594__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[8U]);
                    vlSelf->__Vfunc_bf16_invalid__8594__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8594__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8594__Vfuncout))));
    VL_ASSIGNBIT_QI(0x11U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8599__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[8U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8599__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8599__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8599__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8600__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[8U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8600__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8600__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8600__Vfuncout))));
    VL_ASSIGNBIT_QI(0x12U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8605__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[9U]);
                    vlSelf->__Vfunc_bf16_invalid__8605__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8605__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8605__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8606__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[9U]);
                    vlSelf->__Vfunc_bf16_invalid__8606__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8606__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8606__Vfuncout))));
    VL_ASSIGNBIT_QI(0x13U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8611__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[9U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8611__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8611__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8611__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8612__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[9U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8612__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8612__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8612__Vfuncout))));
    VL_ASSIGNBIT_QI(0x14U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8617__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xaU]);
                    vlSelf->__Vfunc_bf16_invalid__8617__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8617__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8617__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8618__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xaU]);
                    vlSelf->__Vfunc_bf16_invalid__8618__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8618__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8618__Vfuncout))));
    VL_ASSIGNBIT_QI(0x15U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8623__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xaU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8623__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8623__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8623__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8624__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xaU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8624__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8624__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8624__Vfuncout))));
    VL_ASSIGNBIT_QI(0x16U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8629__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xbU]);
                    vlSelf->__Vfunc_bf16_invalid__8629__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8629__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8629__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8630__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xbU]);
                    vlSelf->__Vfunc_bf16_invalid__8630__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8630__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8630__Vfuncout))));
    VL_ASSIGNBIT_QI(0x17U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8635__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xbU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8635__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8635__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8635__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8636__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xbU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8636__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8636__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8636__Vfuncout))));
    VL_ASSIGNBIT_QI(0x18U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8641__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xcU]);
                    vlSelf->__Vfunc_bf16_invalid__8641__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8641__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8641__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8642__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xcU]);
                    vlSelf->__Vfunc_bf16_invalid__8642__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8642__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8642__Vfuncout))));
    VL_ASSIGNBIT_QI(0x19U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8647__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xcU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8647__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8647__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8647__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8648__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xcU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8648__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8648__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8648__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8653__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xdU]);
                    vlSelf->__Vfunc_bf16_invalid__8653__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8653__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8653__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8654__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xdU]);
                    vlSelf->__Vfunc_bf16_invalid__8654__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8654__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8654__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8659__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xdU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8659__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8659__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8659__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8660__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xdU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8660__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8660__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8660__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8665__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xeU]);
                    vlSelf->__Vfunc_bf16_invalid__8665__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8665__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8665__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8666__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xeU]);
                    vlSelf->__Vfunc_bf16_invalid__8666__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8666__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8666__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8671__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xeU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8671__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8671__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8671__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8672__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xeU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8672__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8672__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8672__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8677__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xfU]);
                    vlSelf->__Vfunc_bf16_invalid__8677__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8677__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8677__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8678__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xfU]);
                    vlSelf->__Vfunc_bf16_invalid__8678__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8678__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8678__Vfuncout))));
    VL_ASSIGNBIT_QI(0x1fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8683__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0xfU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8683__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8683__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8683__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8684__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0xfU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8684__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8684__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8684__Vfuncout))));
    VL_ASSIGNBIT_QI(0x20U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8689__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x10U]);
                    vlSelf->__Vfunc_bf16_invalid__8689__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8689__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8689__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8690__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x10U]);
                    vlSelf->__Vfunc_bf16_invalid__8690__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8690__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8690__Vfuncout))));
    VL_ASSIGNBIT_QI(0x21U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8695__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x10U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8695__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8695__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8695__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8696__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x10U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8696__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8696__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8696__Vfuncout))));
    VL_ASSIGNBIT_QI(0x22U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8701__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x11U]);
                    vlSelf->__Vfunc_bf16_invalid__8701__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8701__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8701__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8702__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x11U]);
                    vlSelf->__Vfunc_bf16_invalid__8702__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8702__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8702__Vfuncout))));
    VL_ASSIGNBIT_QI(0x23U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8707__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x11U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8707__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8707__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8707__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8708__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x11U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8708__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8708__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8708__Vfuncout))));
    VL_ASSIGNBIT_QI(0x24U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8713__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x12U]);
                    vlSelf->__Vfunc_bf16_invalid__8713__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8713__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8713__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8714__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x12U]);
                    vlSelf->__Vfunc_bf16_invalid__8714__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8714__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8714__Vfuncout))));
    VL_ASSIGNBIT_QI(0x25U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8719__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x12U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8719__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8719__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8719__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8720__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x12U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8720__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8720__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8720__Vfuncout))));
    VL_ASSIGNBIT_QI(0x26U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8725__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x13U]);
                    vlSelf->__Vfunc_bf16_invalid__8725__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8725__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8725__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8726__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x13U]);
                    vlSelf->__Vfunc_bf16_invalid__8726__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8726__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8726__Vfuncout))));
    VL_ASSIGNBIT_QI(0x27U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8731__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x13U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8731__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8731__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8731__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8732__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x13U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8732__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8732__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8732__Vfuncout))));
    VL_ASSIGNBIT_QI(0x28U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8737__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x14U]);
                    vlSelf->__Vfunc_bf16_invalid__8737__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8737__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8737__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8738__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x14U]);
                    vlSelf->__Vfunc_bf16_invalid__8738__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8738__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8738__Vfuncout))));
    VL_ASSIGNBIT_QI(0x29U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8743__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x14U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8743__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8743__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8743__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8744__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x14U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8744__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8744__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8744__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8749__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x15U]);
                    vlSelf->__Vfunc_bf16_invalid__8749__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8749__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8749__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8750__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x15U]);
                    vlSelf->__Vfunc_bf16_invalid__8750__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8750__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8750__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8755__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x15U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8755__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8755__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8755__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8756__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x15U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8756__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8756__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8756__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8761__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x16U]);
                    vlSelf->__Vfunc_bf16_invalid__8761__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8761__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8761__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8762__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x16U]);
                    vlSelf->__Vfunc_bf16_invalid__8762__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8762__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8762__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8767__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x16U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8767__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8767__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8767__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8768__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x16U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8768__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8768__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8768__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8773__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x17U]);
                    vlSelf->__Vfunc_bf16_invalid__8773__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8773__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8773__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8774__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x17U]);
                    vlSelf->__Vfunc_bf16_invalid__8774__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8774__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8774__Vfuncout))));
    VL_ASSIGNBIT_QI(0x2fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8779__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x17U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8779__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8779__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8779__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8780__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x17U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8780__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8780__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8780__Vfuncout))));
    VL_ASSIGNBIT_QI(0x30U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8785__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x18U]);
                    vlSelf->__Vfunc_bf16_invalid__8785__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8785__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8785__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8786__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x18U]);
                    vlSelf->__Vfunc_bf16_invalid__8786__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8786__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8786__Vfuncout))));
    VL_ASSIGNBIT_QI(0x31U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8791__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x18U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8791__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8791__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8791__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8792__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x18U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8792__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8792__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8792__Vfuncout))));
    VL_ASSIGNBIT_QI(0x32U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8797__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x19U]);
                    vlSelf->__Vfunc_bf16_invalid__8797__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8797__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8797__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8798__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x19U]);
                    vlSelf->__Vfunc_bf16_invalid__8798__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8798__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8798__Vfuncout))));
    VL_ASSIGNBIT_QI(0x33U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8803__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x19U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8803__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8803__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8803__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8804__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x19U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8804__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8804__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8804__Vfuncout))));
    VL_ASSIGNBIT_QI(0x34U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8809__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1aU]);
                    vlSelf->__Vfunc_bf16_invalid__8809__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8809__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8809__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8810__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1aU]);
                    vlSelf->__Vfunc_bf16_invalid__8810__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8810__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8810__Vfuncout))));
    VL_ASSIGNBIT_QI(0x35U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8815__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8815__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8815__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8815__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8816__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8816__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8816__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8816__Vfuncout))));
    VL_ASSIGNBIT_QI(0x36U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8821__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1bU]);
                    vlSelf->__Vfunc_bf16_invalid__8821__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8821__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8821__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8822__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1bU]);
                    vlSelf->__Vfunc_bf16_invalid__8822__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8822__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8822__Vfuncout))));
    VL_ASSIGNBIT_QI(0x37U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8827__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8827__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8827__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8827__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8828__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8828__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8828__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8828__Vfuncout))));
    VL_ASSIGNBIT_QI(0x38U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8833__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1cU]);
                    vlSelf->__Vfunc_bf16_invalid__8833__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8833__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8833__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8834__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1cU]);
                    vlSelf->__Vfunc_bf16_invalid__8834__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8834__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8834__Vfuncout))));
    VL_ASSIGNBIT_QI(0x39U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8839__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8839__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8839__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8839__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8840__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8840__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8840__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8840__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8845__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1dU]);
                    vlSelf->__Vfunc_bf16_invalid__8845__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8845__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8845__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8846__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1dU]);
                    vlSelf->__Vfunc_bf16_invalid__8846__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8846__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8846__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8851__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8851__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8851__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8851__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8852__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8852__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8852__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8852__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8857__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1eU]);
                    vlSelf->__Vfunc_bf16_invalid__8857__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8857__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8857__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8858__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1eU]);
                    vlSelf->__Vfunc_bf16_invalid__8858__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8858__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8858__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8863__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8863__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8863__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8863__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8864__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8864__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8864__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8864__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8869__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1fU]);
                    vlSelf->__Vfunc_bf16_invalid__8869__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8869__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8869__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8870__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1fU]);
                    vlSelf->__Vfunc_bf16_invalid__8870__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8870__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8870__Vfuncout))));
    VL_ASSIGNBIT_QI(0x3fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8875__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_cos[0x1fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8875__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8875__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8875__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__8876__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_sin[0x1fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__8876__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__8876__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__8876__Vfuncout))));
    VL_ASSIGNBIT_WI(0U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7729__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0U]);
                    vlSelf->__Vfunc_bf16_invalid__7729__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7729__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7729__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7730__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0U]);
                    vlSelf->__Vfunc_bf16_invalid__7730__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7730__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7730__Vfuncout))));
    VL_ASSIGNBIT_WI(1U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7731__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7731__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7731__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7731__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7732__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7732__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7732__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7732__Vfuncout))));
    VL_ASSIGNBIT_WI(2U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7733__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[1U]);
                    vlSelf->__Vfunc_bf16_invalid__7733__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7733__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7733__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7734__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[1U]);
                    vlSelf->__Vfunc_bf16_invalid__7734__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7734__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7734__Vfuncout))));
    VL_ASSIGNBIT_WI(3U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7735__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[1U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7735__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7735__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7735__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7736__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[1U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7736__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7736__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7736__Vfuncout))));
    VL_ASSIGNBIT_WI(4U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7737__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[2U]);
                    vlSelf->__Vfunc_bf16_invalid__7737__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7737__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7737__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7738__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[2U]);
                    vlSelf->__Vfunc_bf16_invalid__7738__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7738__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7738__Vfuncout))));
    VL_ASSIGNBIT_WI(5U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7739__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[2U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7739__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7739__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7739__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7740__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[2U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7740__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7740__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7740__Vfuncout))));
    VL_ASSIGNBIT_WI(6U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7741__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[3U]);
                    vlSelf->__Vfunc_bf16_invalid__7741__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7741__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7741__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7742__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[3U]);
                    vlSelf->__Vfunc_bf16_invalid__7742__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7742__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7742__Vfuncout))));
    VL_ASSIGNBIT_WI(7U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7743__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[3U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7743__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7743__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7743__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7744__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[3U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7744__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7744__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7744__Vfuncout))));
    VL_ASSIGNBIT_WI(8U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7745__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[4U]);
                    vlSelf->__Vfunc_bf16_invalid__7745__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7745__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7745__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7746__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[4U]);
                    vlSelf->__Vfunc_bf16_invalid__7746__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7746__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7746__Vfuncout))));
    VL_ASSIGNBIT_WI(9U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7747__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[4U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7747__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7747__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7747__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7748__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[4U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7748__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7748__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7748__Vfuncout))));
    VL_ASSIGNBIT_WI(0xaU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7749__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[5U]);
                    vlSelf->__Vfunc_bf16_invalid__7749__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7749__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7749__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7750__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[5U]);
                    vlSelf->__Vfunc_bf16_invalid__7750__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7750__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7750__Vfuncout))));
    VL_ASSIGNBIT_WI(0xbU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7751__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[5U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7751__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7751__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7751__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7752__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[5U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7752__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7752__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7752__Vfuncout))));
    VL_ASSIGNBIT_WI(0xcU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7753__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[6U]);
                    vlSelf->__Vfunc_bf16_invalid__7753__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7753__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7753__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7754__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[6U]);
                    vlSelf->__Vfunc_bf16_invalid__7754__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7754__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7754__Vfuncout))));
    VL_ASSIGNBIT_WI(0xdU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7755__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[6U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7755__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7755__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7755__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7756__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[6U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7756__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7756__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7756__Vfuncout))));
    VL_ASSIGNBIT_WI(0xeU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7757__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[7U]);
                    vlSelf->__Vfunc_bf16_invalid__7757__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7757__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7757__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7758__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[7U]);
                    vlSelf->__Vfunc_bf16_invalid__7758__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7758__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7758__Vfuncout))));
    VL_ASSIGNBIT_WI(0xfU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7759__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[7U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7759__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7759__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7759__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7760__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[7U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7760__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7760__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7760__Vfuncout))));
    VL_ASSIGNBIT_WI(0x10U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7761__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[8U]);
                    vlSelf->__Vfunc_bf16_invalid__7761__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7761__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7761__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7762__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[8U]);
                    vlSelf->__Vfunc_bf16_invalid__7762__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7762__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7762__Vfuncout))));
    VL_ASSIGNBIT_WI(0x11U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7763__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[8U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7763__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7763__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7763__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7764__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[8U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7764__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7764__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7764__Vfuncout))));
    VL_ASSIGNBIT_WI(0x12U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7765__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[9U]);
                    vlSelf->__Vfunc_bf16_invalid__7765__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7765__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7765__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7766__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[9U]);
                    vlSelf->__Vfunc_bf16_invalid__7766__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7766__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7766__Vfuncout))));
    VL_ASSIGNBIT_WI(0x13U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7767__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[9U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7767__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7767__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7767__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7768__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[9U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7768__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7768__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7768__Vfuncout))));
    VL_ASSIGNBIT_WI(0x14U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7769__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xaU]);
                    vlSelf->__Vfunc_bf16_invalid__7769__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7769__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7769__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7770__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xaU]);
                    vlSelf->__Vfunc_bf16_invalid__7770__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7770__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7770__Vfuncout))));
    VL_ASSIGNBIT_WI(0x15U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7771__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xaU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7771__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7771__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7771__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7772__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xaU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7772__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7772__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7772__Vfuncout))));
    VL_ASSIGNBIT_WI(0x16U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7773__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xbU]);
                    vlSelf->__Vfunc_bf16_invalid__7773__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7773__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7773__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7774__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xbU]);
                    vlSelf->__Vfunc_bf16_invalid__7774__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7774__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7774__Vfuncout))));
    VL_ASSIGNBIT_WI(0x17U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7775__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xbU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7775__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7775__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7775__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7776__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xbU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7776__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7776__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7776__Vfuncout))));
    VL_ASSIGNBIT_WI(0x18U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7777__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xcU]);
                    vlSelf->__Vfunc_bf16_invalid__7777__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7777__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7777__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7778__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xcU]);
                    vlSelf->__Vfunc_bf16_invalid__7778__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7778__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7778__Vfuncout))));
    VL_ASSIGNBIT_WI(0x19U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7779__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xcU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7779__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7779__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7779__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7780__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xcU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7780__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7780__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7780__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7781__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xdU]);
                    vlSelf->__Vfunc_bf16_invalid__7781__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7781__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7781__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7782__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xdU]);
                    vlSelf->__Vfunc_bf16_invalid__7782__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7782__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7782__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7783__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xdU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7783__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7783__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7783__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7784__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xdU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7784__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7784__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7784__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7785__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xeU]);
                    vlSelf->__Vfunc_bf16_invalid__7785__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7785__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7785__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7786__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xeU]);
                    vlSelf->__Vfunc_bf16_invalid__7786__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7786__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7786__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7787__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xeU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7787__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7787__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7787__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7788__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xeU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7788__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7788__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7788__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7789__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xfU]);
                    vlSelf->__Vfunc_bf16_invalid__7789__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7789__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7789__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7790__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xfU]);
                    vlSelf->__Vfunc_bf16_invalid__7790__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7790__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7790__Vfuncout))));
    VL_ASSIGNBIT_WI(0x1fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7791__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0xfU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7791__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7791__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7791__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7792__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0xfU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7792__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7792__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7792__Vfuncout))));
    VL_ASSIGNBIT_WI(0x20U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7793__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x10U]);
                    vlSelf->__Vfunc_bf16_invalid__7793__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7793__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7793__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7794__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x10U]);
                    vlSelf->__Vfunc_bf16_invalid__7794__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7794__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7794__Vfuncout))));
    VL_ASSIGNBIT_WI(0x21U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7795__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x10U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7795__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7795__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7795__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7796__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x10U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7796__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7796__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7796__Vfuncout))));
    VL_ASSIGNBIT_WI(0x22U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7797__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x11U]);
                    vlSelf->__Vfunc_bf16_invalid__7797__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7797__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7797__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7798__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x11U]);
                    vlSelf->__Vfunc_bf16_invalid__7798__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7798__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7798__Vfuncout))));
    VL_ASSIGNBIT_WI(0x23U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7799__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x11U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7799__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7799__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7799__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7800__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x11U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7800__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7800__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7800__Vfuncout))));
    VL_ASSIGNBIT_WI(0x24U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7801__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x12U]);
                    vlSelf->__Vfunc_bf16_invalid__7801__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7801__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7801__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7802__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x12U]);
                    vlSelf->__Vfunc_bf16_invalid__7802__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7802__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7802__Vfuncout))));
    VL_ASSIGNBIT_WI(0x25U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7803__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x12U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7803__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7803__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7803__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7804__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x12U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7804__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7804__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7804__Vfuncout))));
    VL_ASSIGNBIT_WI(0x26U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7805__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x13U]);
                    vlSelf->__Vfunc_bf16_invalid__7805__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7805__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7805__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7806__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x13U]);
                    vlSelf->__Vfunc_bf16_invalid__7806__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7806__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7806__Vfuncout))));
    VL_ASSIGNBIT_WI(0x27U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7807__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x13U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7807__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7807__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7807__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7808__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x13U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7808__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7808__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7808__Vfuncout))));
    VL_ASSIGNBIT_WI(0x28U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7809__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x14U]);
                    vlSelf->__Vfunc_bf16_invalid__7809__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7809__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7809__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7810__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x14U]);
                    vlSelf->__Vfunc_bf16_invalid__7810__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7810__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7810__Vfuncout))));
    VL_ASSIGNBIT_WI(0x29U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7811__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x14U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7811__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7811__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7811__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7812__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x14U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7812__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7812__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7812__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7813__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x15U]);
                    vlSelf->__Vfunc_bf16_invalid__7813__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7813__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7813__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7814__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x15U]);
                    vlSelf->__Vfunc_bf16_invalid__7814__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7814__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7814__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7815__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x15U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7815__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7815__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7815__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7816__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x15U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7816__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7816__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7816__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7817__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x16U]);
                    vlSelf->__Vfunc_bf16_invalid__7817__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7817__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7817__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7818__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x16U]);
                    vlSelf->__Vfunc_bf16_invalid__7818__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7818__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7818__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7819__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x16U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7819__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7819__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7819__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7820__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x16U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7820__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7820__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7820__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7821__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x17U]);
                    vlSelf->__Vfunc_bf16_invalid__7821__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7821__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7821__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7822__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x17U]);
                    vlSelf->__Vfunc_bf16_invalid__7822__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7822__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7822__Vfuncout))));
    VL_ASSIGNBIT_WI(0x2fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7823__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x17U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7823__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7823__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7823__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7824__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x17U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7824__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7824__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7824__Vfuncout))));
    VL_ASSIGNBIT_WI(0x30U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7825__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x18U]);
                    vlSelf->__Vfunc_bf16_invalid__7825__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7825__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7825__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7826__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x18U]);
                    vlSelf->__Vfunc_bf16_invalid__7826__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7826__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7826__Vfuncout))));
    VL_ASSIGNBIT_WI(0x31U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7827__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x18U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7827__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7827__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7827__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7828__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x18U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7828__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7828__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7828__Vfuncout))));
    VL_ASSIGNBIT_WI(0x32U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7829__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x19U]);
                    vlSelf->__Vfunc_bf16_invalid__7829__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7829__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7829__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7830__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x19U]);
                    vlSelf->__Vfunc_bf16_invalid__7830__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7830__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7830__Vfuncout))));
    VL_ASSIGNBIT_WI(0x33U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7831__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x19U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7831__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7831__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7831__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7832__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x19U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7832__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7832__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7832__Vfuncout))));
    VL_ASSIGNBIT_WI(0x34U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7833__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1aU]);
                    vlSelf->__Vfunc_bf16_invalid__7833__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7833__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7833__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7834__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1aU]);
                    vlSelf->__Vfunc_bf16_invalid__7834__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7834__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7834__Vfuncout))));
    VL_ASSIGNBIT_WI(0x35U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7835__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7835__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7835__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7835__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7836__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7836__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7836__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7836__Vfuncout))));
    VL_ASSIGNBIT_WI(0x36U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7837__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1bU]);
                    vlSelf->__Vfunc_bf16_invalid__7837__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7837__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7837__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7838__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1bU]);
                    vlSelf->__Vfunc_bf16_invalid__7838__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7838__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7838__Vfuncout))));
    VL_ASSIGNBIT_WI(0x37U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7839__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7839__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7839__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7839__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7840__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7840__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7840__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7840__Vfuncout))));
    VL_ASSIGNBIT_WI(0x38U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7841__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1cU]);
                    vlSelf->__Vfunc_bf16_invalid__7841__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7841__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7841__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7842__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1cU]);
                    vlSelf->__Vfunc_bf16_invalid__7842__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7842__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7842__Vfuncout))));
    VL_ASSIGNBIT_WI(0x39U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7843__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7843__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7843__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7843__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7844__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7844__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7844__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7844__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7845__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1dU]);
                    vlSelf->__Vfunc_bf16_invalid__7845__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7845__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7845__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7846__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1dU]);
                    vlSelf->__Vfunc_bf16_invalid__7846__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7846__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7846__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7847__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7847__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7847__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7847__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7848__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7848__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7848__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7848__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7849__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1eU]);
                    vlSelf->__Vfunc_bf16_invalid__7849__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7849__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7849__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7850__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1eU]);
                    vlSelf->__Vfunc_bf16_invalid__7850__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7850__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7850__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7851__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7851__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7851__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7851__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7852__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7852__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7852__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7852__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7853__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1fU]);
                    vlSelf->__Vfunc_bf16_invalid__7853__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7853__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7853__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7854__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1fU]);
                    vlSelf->__Vfunc_bf16_invalid__7854__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7854__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7854__Vfuncout))));
    VL_ASSIGNBIT_WI(0x3fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7855__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x1fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7855__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7855__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7855__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7856__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x1fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7856__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7856__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7856__Vfuncout))));
    VL_ASSIGNBIT_WI(0x40U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7857__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x20U]);
                    vlSelf->__Vfunc_bf16_invalid__7857__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7857__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7857__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7858__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x20U]);
                    vlSelf->__Vfunc_bf16_invalid__7858__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7858__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7858__Vfuncout))));
    VL_ASSIGNBIT_WI(0x41U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7859__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x20U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7859__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7859__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7859__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7860__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x20U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7860__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7860__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7860__Vfuncout))));
    VL_ASSIGNBIT_WI(0x42U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7861__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x21U]);
                    vlSelf->__Vfunc_bf16_invalid__7861__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7861__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7861__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7862__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x21U]);
                    vlSelf->__Vfunc_bf16_invalid__7862__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7862__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7862__Vfuncout))));
    VL_ASSIGNBIT_WI(0x43U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7863__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x21U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7863__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7863__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7863__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7864__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x21U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7864__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7864__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7864__Vfuncout))));
    VL_ASSIGNBIT_WI(0x44U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7865__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x22U]);
                    vlSelf->__Vfunc_bf16_invalid__7865__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7865__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7865__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7866__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x22U]);
                    vlSelf->__Vfunc_bf16_invalid__7866__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7866__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7866__Vfuncout))));
    VL_ASSIGNBIT_WI(0x45U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7867__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x22U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7867__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7867__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7867__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7868__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x22U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7868__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7868__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7868__Vfuncout))));
    VL_ASSIGNBIT_WI(0x46U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7869__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x23U]);
                    vlSelf->__Vfunc_bf16_invalid__7869__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7869__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7869__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7870__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x23U]);
                    vlSelf->__Vfunc_bf16_invalid__7870__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7870__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7870__Vfuncout))));
    VL_ASSIGNBIT_WI(0x47U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7871__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x23U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7871__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7871__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7871__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7872__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x23U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7872__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7872__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7872__Vfuncout))));
    VL_ASSIGNBIT_WI(0x48U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7873__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x24U]);
                    vlSelf->__Vfunc_bf16_invalid__7873__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7873__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7873__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7874__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x24U]);
                    vlSelf->__Vfunc_bf16_invalid__7874__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7874__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7874__Vfuncout))));
    VL_ASSIGNBIT_WI(0x49U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7875__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x24U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7875__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7875__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7875__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7876__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x24U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7876__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7876__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7876__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7877__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x25U]);
                    vlSelf->__Vfunc_bf16_invalid__7877__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7877__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7877__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7878__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x25U]);
                    vlSelf->__Vfunc_bf16_invalid__7878__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7878__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7878__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7879__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x25U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7879__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7879__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7879__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7880__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x25U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7880__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7880__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7880__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7881__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x26U]);
                    vlSelf->__Vfunc_bf16_invalid__7881__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7881__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7881__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7882__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x26U]);
                    vlSelf->__Vfunc_bf16_invalid__7882__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7882__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7882__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7883__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x26U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7883__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7883__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7883__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7884__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x26U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7884__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7884__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7884__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7885__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x27U]);
                    vlSelf->__Vfunc_bf16_invalid__7885__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7885__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7885__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7886__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x27U]);
                    vlSelf->__Vfunc_bf16_invalid__7886__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7886__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7886__Vfuncout))));
    VL_ASSIGNBIT_WI(0x4fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7887__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x27U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7887__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7887__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7887__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7888__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x27U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7888__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7888__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7888__Vfuncout))));
    VL_ASSIGNBIT_WI(0x50U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7889__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x28U]);
                    vlSelf->__Vfunc_bf16_invalid__7889__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7889__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7889__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7890__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x28U]);
                    vlSelf->__Vfunc_bf16_invalid__7890__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7890__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7890__Vfuncout))));
    VL_ASSIGNBIT_WI(0x51U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7891__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x28U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7891__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7891__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7891__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7892__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x28U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7892__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7892__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7892__Vfuncout))));
    VL_ASSIGNBIT_WI(0x52U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7893__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x29U]);
                    vlSelf->__Vfunc_bf16_invalid__7893__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7893__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7893__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7894__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x29U]);
                    vlSelf->__Vfunc_bf16_invalid__7894__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7894__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7894__Vfuncout))));
    VL_ASSIGNBIT_WI(0x53U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7895__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x29U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7895__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7895__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7895__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7896__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x29U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7896__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7896__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7896__Vfuncout))));
    VL_ASSIGNBIT_WI(0x54U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7897__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2aU]);
                    vlSelf->__Vfunc_bf16_invalid__7897__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7897__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7897__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7898__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2aU]);
                    vlSelf->__Vfunc_bf16_invalid__7898__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7898__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7898__Vfuncout))));
    VL_ASSIGNBIT_WI(0x55U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7899__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7899__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7899__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7899__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7900__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7900__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7900__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7900__Vfuncout))));
    VL_ASSIGNBIT_WI(0x56U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7901__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2bU]);
                    vlSelf->__Vfunc_bf16_invalid__7901__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7901__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7901__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7902__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2bU]);
                    vlSelf->__Vfunc_bf16_invalid__7902__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7902__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7902__Vfuncout))));
    VL_ASSIGNBIT_WI(0x57U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7903__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7903__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7903__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7903__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7904__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7904__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7904__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7904__Vfuncout))));
    VL_ASSIGNBIT_WI(0x58U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7905__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2cU]);
                    vlSelf->__Vfunc_bf16_invalid__7905__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7905__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7905__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7906__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2cU]);
                    vlSelf->__Vfunc_bf16_invalid__7906__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7906__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7906__Vfuncout))));
    VL_ASSIGNBIT_WI(0x59U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7907__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7907__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7907__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7907__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7908__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7908__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7908__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7908__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7909__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2dU]);
                    vlSelf->__Vfunc_bf16_invalid__7909__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7909__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7909__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7910__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2dU]);
                    vlSelf->__Vfunc_bf16_invalid__7910__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7910__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7910__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7911__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7911__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7911__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7911__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7912__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7912__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7912__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7912__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7913__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2eU]);
                    vlSelf->__Vfunc_bf16_invalid__7913__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7913__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7913__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7914__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2eU]);
                    vlSelf->__Vfunc_bf16_invalid__7914__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7914__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7914__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7915__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7915__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7915__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7915__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7916__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7916__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7916__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7916__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7917__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2fU]);
                    vlSelf->__Vfunc_bf16_invalid__7917__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7917__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7917__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7918__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2fU]);
                    vlSelf->__Vfunc_bf16_invalid__7918__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7918__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7918__Vfuncout))));
    VL_ASSIGNBIT_WI(0x5fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7919__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x2fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7919__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7919__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7919__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7920__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x2fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7920__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7920__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7920__Vfuncout))));
    VL_ASSIGNBIT_WI(0x60U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7921__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x30U]);
                    vlSelf->__Vfunc_bf16_invalid__7921__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7921__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7921__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7922__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x30U]);
                    vlSelf->__Vfunc_bf16_invalid__7922__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7922__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7922__Vfuncout))));
    VL_ASSIGNBIT_WI(0x61U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7923__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x30U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7923__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7923__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7923__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7924__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x30U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7924__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7924__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7924__Vfuncout))));
    VL_ASSIGNBIT_WI(0x62U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7925__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x31U]);
                    vlSelf->__Vfunc_bf16_invalid__7925__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7925__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7925__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7926__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x31U]);
                    vlSelf->__Vfunc_bf16_invalid__7926__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7926__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7926__Vfuncout))));
    VL_ASSIGNBIT_WI(0x63U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7927__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x31U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7927__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7927__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7927__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7928__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x31U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7928__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7928__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7928__Vfuncout))));
    VL_ASSIGNBIT_WI(0x64U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7929__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x32U]);
                    vlSelf->__Vfunc_bf16_invalid__7929__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7929__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7929__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7930__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x32U]);
                    vlSelf->__Vfunc_bf16_invalid__7930__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7930__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7930__Vfuncout))));
    VL_ASSIGNBIT_WI(0x65U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7931__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x32U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7931__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7931__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7931__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7932__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x32U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7932__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7932__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7932__Vfuncout))));
    VL_ASSIGNBIT_WI(0x66U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7933__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x33U]);
                    vlSelf->__Vfunc_bf16_invalid__7933__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7933__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7933__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7934__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x33U]);
                    vlSelf->__Vfunc_bf16_invalid__7934__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7934__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7934__Vfuncout))));
    VL_ASSIGNBIT_WI(0x67U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7935__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x33U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7935__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7935__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7935__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7936__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x33U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7936__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7936__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7936__Vfuncout))));
    VL_ASSIGNBIT_WI(0x68U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7937__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x34U]);
                    vlSelf->__Vfunc_bf16_invalid__7937__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7937__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7937__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7938__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x34U]);
                    vlSelf->__Vfunc_bf16_invalid__7938__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7938__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7938__Vfuncout))));
    VL_ASSIGNBIT_WI(0x69U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7939__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x34U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7939__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7939__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7939__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7940__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x34U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7940__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7940__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7940__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7941__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x35U]);
                    vlSelf->__Vfunc_bf16_invalid__7941__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7941__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7941__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7942__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x35U]);
                    vlSelf->__Vfunc_bf16_invalid__7942__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7942__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7942__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7943__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x35U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7943__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7943__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7943__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7944__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x35U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7944__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7944__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7944__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7945__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x36U]);
                    vlSelf->__Vfunc_bf16_invalid__7945__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7945__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7945__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7946__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x36U]);
                    vlSelf->__Vfunc_bf16_invalid__7946__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7946__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7946__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7947__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x36U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7947__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7947__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7947__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7948__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x36U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7948__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7948__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7948__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7949__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x37U]);
                    vlSelf->__Vfunc_bf16_invalid__7949__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7949__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7949__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7950__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x37U]);
                    vlSelf->__Vfunc_bf16_invalid__7950__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7950__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7950__Vfuncout))));
    VL_ASSIGNBIT_WI(0x6fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7951__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x37U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7951__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7951__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7951__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7952__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x37U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7952__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7952__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7952__Vfuncout))));
    VL_ASSIGNBIT_WI(0x70U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7953__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x38U]);
                    vlSelf->__Vfunc_bf16_invalid__7953__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7953__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7953__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7954__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x38U]);
                    vlSelf->__Vfunc_bf16_invalid__7954__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7954__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7954__Vfuncout))));
    VL_ASSIGNBIT_WI(0x71U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7955__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x38U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7955__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7955__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7955__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7956__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x38U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7956__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7956__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7956__Vfuncout))));
    VL_ASSIGNBIT_WI(0x72U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7957__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x39U]);
                    vlSelf->__Vfunc_bf16_invalid__7957__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7957__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7957__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7958__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x39U]);
                    vlSelf->__Vfunc_bf16_invalid__7958__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7958__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7958__Vfuncout))));
    VL_ASSIGNBIT_WI(0x73U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7959__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x39U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7959__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7959__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7959__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7960__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x39U] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7960__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7960__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7960__Vfuncout))));
    VL_ASSIGNBIT_WI(0x74U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7961__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3aU]);
                    vlSelf->__Vfunc_bf16_invalid__7961__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7961__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7961__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7962__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3aU]);
                    vlSelf->__Vfunc_bf16_invalid__7962__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7962__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7962__Vfuncout))));
    VL_ASSIGNBIT_WI(0x75U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7963__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7963__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7963__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7963__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7964__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3aU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7964__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7964__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7964__Vfuncout))));
    VL_ASSIGNBIT_WI(0x76U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7965__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3bU]);
                    vlSelf->__Vfunc_bf16_invalid__7965__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7965__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7965__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7966__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3bU]);
                    vlSelf->__Vfunc_bf16_invalid__7966__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7966__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7966__Vfuncout))));
    VL_ASSIGNBIT_WI(0x77U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7967__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7967__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7967__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7967__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7968__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3bU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7968__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7968__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7968__Vfuncout))));
    VL_ASSIGNBIT_WI(0x78U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7969__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3cU]);
                    vlSelf->__Vfunc_bf16_invalid__7969__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7969__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7969__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7970__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3cU]);
                    vlSelf->__Vfunc_bf16_invalid__7970__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7970__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7970__Vfuncout))));
    VL_ASSIGNBIT_WI(0x79U, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7971__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7971__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7971__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7971__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7972__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3cU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7972__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7972__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7972__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7aU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7973__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3dU]);
                    vlSelf->__Vfunc_bf16_invalid__7973__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7973__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7973__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7974__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3dU]);
                    vlSelf->__Vfunc_bf16_invalid__7974__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7974__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7974__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7bU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7975__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7975__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7975__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7975__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7976__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3dU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7976__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7976__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7976__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7cU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7977__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3eU]);
                    vlSelf->__Vfunc_bf16_invalid__7977__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7977__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7977__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7978__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3eU]);
                    vlSelf->__Vfunc_bf16_invalid__7978__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7978__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7978__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7dU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7979__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7979__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7979__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7979__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7980__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3eU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7980__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7980__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7980__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7eU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7981__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3fU]);
                    vlSelf->__Vfunc_bf16_invalid__7981__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7981__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7981__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7982__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3fU]);
                    vlSelf->__Vfunc_bf16_invalid__7982__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7982__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7982__Vfuncout))));
    VL_ASSIGNBIT_WI(0x7fU, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7983__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[0x3fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7983__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7983__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7983__Vfuncout)) 
                     | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__7984__value 
                        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[0x3fU] 
                           >> 0x10U);
                    vlSelf->__Vfunc_bf16_invalid__7984__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__7984__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7984__Vfuncout))));
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___ico_comb__TOP__6(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___ico_comb__TOP__6\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__found) 
              & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response)) 
                 & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cv) 
                    >> (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_write 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h206f2973__0) 
                << 7U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h94dcd0e0__0) 
                           << 6U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_write) 
                                      << 5U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_write) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_write) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h83c46b88__0) 
                                                      & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__io_write))))))) 
              >> (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)));
    __Vtemp_6[0U] = ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                      ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__token
                      : ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                          ? ((2U > (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__coefficient))
                              ? 0U : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__position)
                          : ((0x10U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                              ? 2U : ((0x14U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                       ? 5U : 0U))));
    __Vtemp_6[1U] = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__projections__req_valid)
                      ? ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                          ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot
                          : ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                              ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h103a2f0a__0
                              : ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                  ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row
                                  : (VL_SHIFTR_III(32,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base, 7U) 
                                     + (0xffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                                                 >> 1U))))))
                      : 0U);
    __Vtemp_6[2U] = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid)
                      ? ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state))
                          ? 0U : ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state))
                                   ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__source_slot
                                   : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__target_slot))
                      : 0U);
    __Vtemp_6[3U] = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid)
                      ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__position
                      : 0U);
    __Vtemp_6[4U] = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid)
                      ? ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                          ? 9U : ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                                   ? 0xaU : 0xbU)) : 0U);
    __Vtemp_6[5U] = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid)
                      ? ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))
                          ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__a_slot
                          : ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))
                              ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__b_slot
                              : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__target_slot))
                      : 0U);
    __Vtemp_6[6U] = (IData)((((QData)((IData)(((3U 
                                                == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fstate))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fusion_position
                                                : ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fusion_key)
                                                    ? 3U
                                                    : 2U)))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((4U 
                                                            == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate))
                                                            ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__position
                                                            : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_target)))));
    __Vtemp_6[7U] = (IData)(((((QData)((IData)(((3U 
                                                 == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fstate))
                                                 ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fusion_position
                                                 : 
                                                ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fusion_key)
                                                  ? 3U
                                                  : 2U)))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((4U 
                                                             == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate))
                                                             ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__position
                                                             : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_target)))) 
                             >> 0x20U));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind 
            = (0xfU & (((((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fstate))
                           ? 9U : 8U) << 0x1cU) | (
                                                   (((4U 
                                                      == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate))
                                                      ? 0xaU
                                                      : 8U) 
                                                    << 0x18U) 
                                                   | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid)
                                                         ? 8U
                                                         : 0U) 
                                                       << 0x14U) 
                                                      | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid)
                                                            ? 8U
                                                            : 0U) 
                                                          << 0x10U) 
                                                         | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid)
                                                               ? 
                                                              ((2U 
                                                                == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))
                                                                ? 9U
                                                                : 0xaU)
                                                               : 0U) 
                                                             << 0xcU) 
                                                            | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid)
                                                                  ? 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state))
                                                                   ? (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__gamma_kind)
                                                                   : 8U)
                                                                  : 0U) 
                                                                << 8U) 
                                                               | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__projections__req_valid)
                                                                     ? 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                                                      ? 8U
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                                                       ? 1U
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                                                        ? 2U
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_type))
                                                                         ? 3U
                                                                         : 0U))))
                                                                     : 0U) 
                                                                   << 4U) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                                                      ? 0U
                                                                      : 
                                                                     ((7U 
                                                                       == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                                                       ? 
                                                                      ((0U 
                                                                        == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__coefficient))
                                                                        ? 0xcU
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__coefficient))
                                                                         ? 0xdU
                                                                         : 0xbU))
                                                                       : 8U))))))))) 
                       >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 2U))));
        vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected), 5U))));
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row = 0U;
    }
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___ico_comb__TOP__7(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___ico_comb__TOP__7\n"); );
    // Init
    QData/*63:0*/ __Vfunc_event_add64__14267__Vfuncout;
    __Vfunc_event_add64__14267__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14267__value;
    __Vfunc_event_add64__14267__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14267__delta;
    __Vfunc_event_add64__14267__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14267__low;
    __Vfunc_event_add64__14267__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14267__carry1;
    __Vfunc_event_add64__14267__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14267__carry2;
    __Vfunc_event_add64__14267__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14267__carry3;
    __Vfunc_event_add64__14267__carry3 = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__any_error 
        = (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
            & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response)) 
           | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
               & ((0xcU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                  | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__error_reg))) 
              | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                  & ((0x14U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                     | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__error_reg))) 
                 | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                     & ((0x12U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                        | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__error_reg))) 
                    | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                        & ((0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                           | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__error_reg))) 
                       | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                           & ((0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                              | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg))) 
                          | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                              & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__failed) 
                                 | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__malformed))) 
                             | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fused_valid) 
                                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed)) 
                                | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h7797dd60__0) 
                                    & (((3U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)) 
                                        & (5U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate))) 
                                       | ((IData)(vlSelf->__VdfgTmp_h1f739978__0) 
                                          | (vlSelf->__VdfgTmp_h1b220fe4__0 
                                             != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_expected)))) 
                                   | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h77905d4e__0) 
                                      & (((2U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fstate)) 
                                          & (4U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fstate))) 
                                         | ((IData)(vlSelf->__VdfgTmp_hd0ac3d30__0) 
                                            | (vlSelf->__VdfgTmp_h54158d12__0 
                                               != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fusion_expected)))))))))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__error_reg) 
              | ((0x26U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
                 | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__any_error) 
                    | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__io_bad)))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__arith_error 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error));
    __Vfunc_event_add64__14267__delta = vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__arith_error;
    __Vfunc_event_add64__14267__value = (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__arithmetic_errors));
    __Vfunc_event_add64__14267__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14267__value)) 
                                                   + (IData)(__Vfunc_event_add64__14267__delta)));
    __Vfunc_event_add64__14267__carry1 = (1U & (__Vfunc_event_add64__14267__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14267__carry2 = ((IData)(__Vfunc_event_add64__14267__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14267__value)));
    __Vfunc_event_add64__14267__carry3 = ((IData)(__Vfunc_event_add64__14267__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14267__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14267__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14267__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14267__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14267__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14267__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14267__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14267__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14267__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented_errors 
        = __Vfunc_event_add64__14267__Vfuncout;
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___ico_comb__TOP__8(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_fault;
    anvil_qn1_top__DOT__native__DOT__bank_fault = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0;
    anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0 = 0;
    CData/*0:0*/ anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0;
    anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0 = 0;
    CData/*7:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing = 0;
    QData/*63:0*/ __Vfunc_event_add64__14268__Vfuncout;
    __Vfunc_event_add64__14268__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14268__value;
    __Vfunc_event_add64__14268__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14268__delta;
    __Vfunc_event_add64__14268__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14268__low;
    __Vfunc_event_add64__14268__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry1;
    __Vfunc_event_add64__14268__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry2;
    __Vfunc_event_add64__14268__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry3;
    __Vfunc_event_add64__14268__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14269__Vfuncout;
    __Vfunc_event_add64__14269__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14269__value;
    __Vfunc_event_add64__14269__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14269__delta;
    __Vfunc_event_add64__14269__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14269__low;
    __Vfunc_event_add64__14269__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry1;
    __Vfunc_event_add64__14269__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry2;
    __Vfunc_event_add64__14269__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry3;
    __Vfunc_event_add64__14269__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14270__Vfuncout;
    __Vfunc_event_add64__14270__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14270__value;
    __Vfunc_event_add64__14270__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14270__delta;
    __Vfunc_event_add64__14270__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14270__low;
    __Vfunc_event_add64__14270__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry1;
    __Vfunc_event_add64__14270__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry2;
    __Vfunc_event_add64__14270__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry3;
    __Vfunc_event_add64__14270__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14271__Vfuncout;
    __Vfunc_event_add64__14271__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14271__value;
    __Vfunc_event_add64__14271__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14271__delta;
    __Vfunc_event_add64__14271__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14271__low;
    __Vfunc_event_add64__14271__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry1;
    __Vfunc_event_add64__14271__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry2;
    __Vfunc_event_add64__14271__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry3;
    __Vfunc_event_add64__14271__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14272__Vfuncout;
    __Vfunc_event_add64__14272__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14272__value;
    __Vfunc_event_add64__14272__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14272__delta;
    __Vfunc_event_add64__14272__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14272__low;
    __Vfunc_event_add64__14272__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry1;
    __Vfunc_event_add64__14272__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry2;
    __Vfunc_event_add64__14272__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry3;
    __Vfunc_event_add64__14272__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14273__Vfuncout;
    __Vfunc_event_add64__14273__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14273__value;
    __Vfunc_event_add64__14273__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14273__delta;
    __Vfunc_event_add64__14273__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14273__low;
    __Vfunc_event_add64__14273__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry1;
    __Vfunc_event_add64__14273__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry2;
    __Vfunc_event_add64__14273__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry3;
    __Vfunc_event_add64__14273__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14274__Vfuncout;
    __Vfunc_event_add64__14274__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14274__value;
    __Vfunc_event_add64__14274__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14274__delta;
    __Vfunc_event_add64__14274__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14274__low;
    __Vfunc_event_add64__14274__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry1;
    __Vfunc_event_add64__14274__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry2;
    __Vfunc_event_add64__14274__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry3;
    __Vfunc_event_add64__14274__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14275__Vfuncout;
    __Vfunc_event_add64__14275__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14275__value;
    __Vfunc_event_add64__14275__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14275__delta;
    __Vfunc_event_add64__14275__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14275__low;
    __Vfunc_event_add64__14275__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry1;
    __Vfunc_event_add64__14275__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry2;
    __Vfunc_event_add64__14275__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry3;
    __Vfunc_event_add64__14275__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14276__Vfuncout;
    __Vfunc_event_add64__14276__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14276__value;
    __Vfunc_event_add64__14276__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14276__delta;
    __Vfunc_event_add64__14276__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14276__low;
    __Vfunc_event_add64__14276__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry1;
    __Vfunc_event_add64__14276__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry2;
    __Vfunc_event_add64__14276__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry3;
    __Vfunc_event_add64__14276__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14277__Vfuncout;
    __Vfunc_event_add64__14277__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14277__value;
    __Vfunc_event_add64__14277__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14277__delta;
    __Vfunc_event_add64__14277__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14277__low;
    __Vfunc_event_add64__14277__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry1;
    __Vfunc_event_add64__14277__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry2;
    __Vfunc_event_add64__14277__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry3;
    __Vfunc_event_add64__14277__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14278__Vfuncout;
    __Vfunc_event_add64__14278__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14278__value;
    __Vfunc_event_add64__14278__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14278__delta;
    __Vfunc_event_add64__14278__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14278__low;
    __Vfunc_event_add64__14278__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry1;
    __Vfunc_event_add64__14278__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry2;
    __Vfunc_event_add64__14278__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry3;
    __Vfunc_event_add64__14278__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14279__Vfuncout;
    __Vfunc_event_add64__14279__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14279__value;
    __Vfunc_event_add64__14279__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14279__delta;
    __Vfunc_event_add64__14279__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14279__low;
    __Vfunc_event_add64__14279__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry1;
    __Vfunc_event_add64__14279__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry2;
    __Vfunc_event_add64__14279__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry3;
    __Vfunc_event_add64__14279__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14280__Vfuncout;
    __Vfunc_event_add64__14280__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14280__value;
    __Vfunc_event_add64__14280__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14280__delta;
    __Vfunc_event_add64__14280__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14280__low;
    __Vfunc_event_add64__14280__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry1;
    __Vfunc_event_add64__14280__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry2;
    __Vfunc_event_add64__14280__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry3;
    __Vfunc_event_add64__14280__carry3 = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error) 
           | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_error) 
              | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid) 
                  & ((4U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                     | ((1U > (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)) 
                        | ((5U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)) 
                           | ((vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos 
                               != ((IData)(1U) + vlSelf->anvil_qn1_top__DOT__native__DOT__host_position)) 
                              | ((0xa000ULL <= vlSelf->anvil_qn1_top__DOT__native__DOT__batch_end) 
                                 | ((vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent 
                                     != ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__batch_end) 
                                         - (IData)(1U))) 
                                    | ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained)) 
                                       | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned))))))))) 
                 | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid) 
                     & ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                        & ((4U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent)) 
                           | ((0xa000U <= vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position) 
                              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent))
                                  ? (vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position 
                                     != vlSelf->anvil_qn1_top__DOT__native__DOT__host_position)
                                  : ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__draft_owned)) 
                                     | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent) 
                                         >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__owned_draft_count)) 
                                        | ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__sequence_valid)) 
                                           | ((vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent 
                                               < vlSelf->anvil_qn1_top__DOT__native__DOT__committed_extent) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position 
                                                 != 
                                                 ((IData)(1U) 
                                                  + vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent))))))))))) 
                    | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                       & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_write)) 
                          & (((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind)) 
                              | (0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind))) 
                             & (((3U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
                                    | (4U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)))) 
                                | ((vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                    > vlSelf->anvil_qn1_top__DOT__native__DOT__evaluating_position) 
                                   | ((vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                       != vlSelf->anvil_qn1_top__DOT__native__DOT__evaluating_position) 
                                      & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__sequence_valid)) 
                                         | (vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                            > vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent))))))))))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready 
        = ((IData)(vlSelf->mem_req_ready) & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 0U;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[0U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [0U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[1U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [1U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[2U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [2U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[3U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [3U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[4U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [4U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[5U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [5U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[6U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [6U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[7U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [7U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0U;
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (0U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [1U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [1U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [2U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [2U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 2U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & (IData)(vlSelf->mem_rsp_valid)) 
         & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match)) 
            | (IData)(vlSelf->mem_rsp_error)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [3U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [3U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 3U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [4U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [4U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (4U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 4U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [5U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [5U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (5U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 5U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 1U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 1U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 1U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [6U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [6U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (6U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 6U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [7U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [7U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (7U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 7U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [8U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [8U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (8U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 8U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 2U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 2U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [9U] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [9U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 3U)) & (9U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 9U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xaU] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xaU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 3U)) & (0xaU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0xaU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xbU] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xbU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 3U)) & (0xbU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0xbU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 3U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 3U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 3U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xcU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xcU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xcU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xcU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xdU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xdU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xdU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xdU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xeU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xeU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xeU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xeU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 4U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 4U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 4U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xfU] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xfU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 5U)) & (0xfU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0xfU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x10U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x10U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 5U)) & (0x10U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0x10U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x11U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x11U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 5U)) & (0x11U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0x11U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 5U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 5U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 5U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x12U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x12U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x12U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x12U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x13U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x13U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x13U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x13U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x14U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x14U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x14U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x14U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 6U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 6U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x15U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x15U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x15U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x15U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x16U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x16U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x16U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x16U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x17U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x17U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x17U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x17U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 7U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 7U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 7U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    anvil_qn1_top__DOT__native__DOT__bank_fault = ((IData)(vlSelf->rst_n) 
                                                   & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__fault_reg) 
                                                      | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 
        = ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush) 
               | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining) 
                  | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)))) 
           & (IData)(vlSelf->rst_n));
    vlSelf->token_ready = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                           & ((~ (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault)) 
                              & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error)) 
                                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_error)) 
                                    & ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                                       & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__done_reg)) 
                                          & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__error_reg)) 
                                             & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__cancel_done_reg)) 
                                                & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->csr_valid) 
                                                        | ((IData)(vlSelf->csr_rsp_valid) 
                                                           | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__mode_valid)))) 
                                                      & (IData)(vlSelf->csr_ready)))))))))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__mem_error 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault));
    vlSelf->anvil_qn1_top__DOT__native__DOT__detected_fault 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault) 
           | (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault));
    vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((~ (IData)((0xffffffffffffffffULL == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial))) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 7U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 6U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 5U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 4U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 3U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 2U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 1U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[0xbU] 
        = vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__mem_error;
    anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0 = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__detected_fault)) 
                                                  & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
              | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                   << 7U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                              << 6U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active)))))))) 
                 >> ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid)
                      ? (7U & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                               >> 0x1cU)) : 0U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_req_ready));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_mem_valid 
        = (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing) 
            << 7U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing) 
                       << 6U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) 
                                  << 5U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) 
                                             << 4U) 
                                            | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) 
                                                << 3U) 
                                               | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) 
                                                   << 2U) 
                                                  | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) 
                                                      << 1U) 
                                                     | (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing))))))));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_start_valid 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid)))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__decoder__logit_ready 
        = ((IData)(vlSelf->logit_ready) & (IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0));
    vlSelf->logit_valid = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_logit_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_ready 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
              & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                    & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_rsp_ready))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[0xcU] 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__exhausted) 
                 & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_ready)))));
    anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0 = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
                                                  & (4U 
                                                     == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->mem_req_valid = (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible) 
                              << 7U) | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible) 
                                         << 6U) | (
                                                   ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) 
                                                    << 5U) 
                                                   | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) 
                                                       << 4U) 
                                                      | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) 
                                                          << 3U) 
                                                         | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) 
                                                             << 2U) 
                                                            | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) 
                                                                << 1U) 
                                                               | (IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible))))))));
    vlSelf->mem_req_write = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible) 
                               & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing) 
                                  & ((0x17U >= (0x1fU 
                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                [7U])) 
                                     && (1U & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                               >> (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])))))) 
                              << 7U) | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible) 
                                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing) 
                                             & ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [6U])) 
                                                && (1U 
                                                    & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [6U])))))) 
                                         << 6U) | (
                                                   (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) 
                                                     & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) 
                                                        & ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [5U])) 
                                                           && (1U 
                                                               & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                   [5U])))))) 
                                                    << 5U) 
                                                   | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) 
                                                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) 
                                                           & ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [4U])) 
                                                              && (1U 
                                                                  & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                      [4U])))))) 
                                                       << 4U) 
                                                      | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) 
                                                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) 
                                                              & ((0x17U 
                                                                  >= 
                                                                  (0x1fU 
                                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                   [3U])) 
                                                                 && (1U 
                                                                     & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [3U])))))) 
                                                          << 3U) 
                                                         | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) 
                                                              & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) 
                                                                 & ((0x17U 
                                                                     >= 
                                                                     (0x1fU 
                                                                      & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                      [2U])) 
                                                                    && (1U 
                                                                        & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                            [2U])))))) 
                                                             << 2U) 
                                                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) 
                                                                 & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) 
                                                                    & ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [1U])) 
                                                                       && (1U 
                                                                           & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                              >> 
                                                                              (0x1fU 
                                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                               [1U])))))) 
                                                                << 1U) 
                                                               | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible) 
                                                                  & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing) 
                                                                     & ((0x17U 
                                                                         >= 
                                                                         (0x1fU 
                                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                          [0U])) 
                                                                        && (1U 
                                                                            & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                               >> 
                                                                               (0x1fU 
                                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                                [0U])))))))))))));
    vlSelf->mem_req_kind = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                               ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                   ? ((0x17U >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [7U]))
                                       ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                      [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [7U])] : 0U)
                                   : 0U) : 0U) << 0x1cU) 
                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                  ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                      ? ((0x17U >= 
                                          (0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])) ? 
                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                         [(0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])] : 0U)
                                      : 0U) : 0U) << 0x18U) 
                               | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                     ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                         ? ((0x17U 
                                             >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [5U]))
                                             ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                            [(0x1fU 
                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [5U])]
                                             : 0U) : 0U)
                                     : 0U) << 0x14U) 
                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0U)
                                            : 0U) : 0U) 
                                      << 0x10U) | (
                                                   (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                                      ? 
                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                                       ? 
                                                      ((0x17U 
                                                        >= 
                                                        (0x1fU 
                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                         [3U]))
                                                        ? 
                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                       [
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [3U])]
                                                        : 0U)
                                                       : 0U)
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                                         ? 
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                                          ? 
                                                         ((0x17U 
                                                           >= 
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [2U]))
                                                           ? 
                                                          vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                          [
                                                          (0x1fU 
                                                           & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [2U])]
                                                           : 0U)
                                                          : 0U)
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [1U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [1U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U) 
                                                          << 4U) 
                                                         | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [0U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))))))));
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [0U]))) {
                vlSelf->mem_req_layer[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_row[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_col[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_wdata[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
            } else {
                vlSelf->mem_req_layer[0U] = 0U;
                vlSelf->mem_req_row[0U] = 0U;
                vlSelf->mem_req_col[0U] = 0U;
                vlSelf->mem_req_wdata[0U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[0U] = 0U;
            vlSelf->mem_req_row[0U] = 0U;
            vlSelf->mem_req_col[0U] = 0U;
            vlSelf->mem_req_wdata[0U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[0U] = 0U;
        vlSelf->mem_req_row[0U] = 0U;
        vlSelf->mem_req_col[0U] = 0U;
        vlSelf->mem_req_wdata[0U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [1U]))) {
                vlSelf->mem_req_layer[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_row[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_col[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_wdata[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
            } else {
                vlSelf->mem_req_layer[1U] = 0U;
                vlSelf->mem_req_row[1U] = 0U;
                vlSelf->mem_req_col[1U] = 0U;
                vlSelf->mem_req_wdata[1U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[1U] = 0U;
            vlSelf->mem_req_row[1U] = 0U;
            vlSelf->mem_req_col[1U] = 0U;
            vlSelf->mem_req_wdata[1U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[1U] = 0U;
        vlSelf->mem_req_row[1U] = 0U;
        vlSelf->mem_req_col[1U] = 0U;
        vlSelf->mem_req_wdata[1U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [2U]))) {
                vlSelf->mem_req_layer[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_row[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_col[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_wdata[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
            } else {
                vlSelf->mem_req_layer[2U] = 0U;
                vlSelf->mem_req_row[2U] = 0U;
                vlSelf->mem_req_col[2U] = 0U;
                vlSelf->mem_req_wdata[2U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[2U] = 0U;
            vlSelf->mem_req_row[2U] = 0U;
            vlSelf->mem_req_col[2U] = 0U;
            vlSelf->mem_req_wdata[2U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[2U] = 0U;
        vlSelf->mem_req_row[2U] = 0U;
        vlSelf->mem_req_col[2U] = 0U;
        vlSelf->mem_req_wdata[2U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [3U]))) {
                vlSelf->mem_req_layer[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_row[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_col[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_wdata[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
            } else {
                vlSelf->mem_req_layer[3U] = 0U;
                vlSelf->mem_req_row[3U] = 0U;
                vlSelf->mem_req_col[3U] = 0U;
                vlSelf->mem_req_wdata[3U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[3U] = 0U;
            vlSelf->mem_req_row[3U] = 0U;
            vlSelf->mem_req_col[3U] = 0U;
            vlSelf->mem_req_wdata[3U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[3U] = 0U;
        vlSelf->mem_req_row[3U] = 0U;
        vlSelf->mem_req_col[3U] = 0U;
        vlSelf->mem_req_wdata[3U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [4U]))) {
                vlSelf->mem_req_layer[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_row[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_col[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_wdata[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
            } else {
                vlSelf->mem_req_layer[4U] = 0U;
                vlSelf->mem_req_row[4U] = 0U;
                vlSelf->mem_req_col[4U] = 0U;
                vlSelf->mem_req_wdata[4U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[4U] = 0U;
            vlSelf->mem_req_row[4U] = 0U;
            vlSelf->mem_req_col[4U] = 0U;
            vlSelf->mem_req_wdata[4U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[4U] = 0U;
        vlSelf->mem_req_row[4U] = 0U;
        vlSelf->mem_req_col[4U] = 0U;
        vlSelf->mem_req_wdata[4U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [5U]))) {
                vlSelf->mem_req_layer[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_row[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_col[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_wdata[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
            } else {
                vlSelf->mem_req_layer[5U] = 0U;
                vlSelf->mem_req_row[5U] = 0U;
                vlSelf->mem_req_col[5U] = 0U;
                vlSelf->mem_req_wdata[5U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[5U] = 0U;
            vlSelf->mem_req_row[5U] = 0U;
            vlSelf->mem_req_col[5U] = 0U;
            vlSelf->mem_req_wdata[5U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[5U] = 0U;
        vlSelf->mem_req_row[5U] = 0U;
        vlSelf->mem_req_col[5U] = 0U;
        vlSelf->mem_req_wdata[5U] = 0U;
    }
    vlSelf->mem_req_layer[6U] = (IData)((((QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U)))));
    vlSelf->mem_req_layer[7U] = (IData)(((((QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [7U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                              ? 
                                                             ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                               ? 
                                                              ((0x17U 
                                                                >= 
                                                                (0x1fU 
                                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                 [6U]))
                                                                ? 
                                                               vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                               [
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U])]
                                                                : 0U)
                                                               : 0U)
                                                              : 0U)))) 
                                         >> 0x20U));
    vlSelf->mem_req_row[6U] = (IData)((((QData)((IData)(
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                          ? 
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                           ? 
                                                          ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U]))
                                                            ? 
                                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                           [
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [7U])]
                                                            : 0U)
                                                           : 0U)
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                                      ? 
                                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                                       ? 
                                                                      ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [6U]))
                                                                        ? 
                                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                                       [
                                                                       (0x1fU 
                                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                        [6U])]
                                                                        : 0U)
                                                                       : 0U)
                                                                      : 0U)))));
    vlSelf->mem_req_row[7U] = (IData)(((((QData)((IData)(
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [6U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U)))) 
                                       >> 0x20U));
    vlSelf->mem_req_col[6U] = (IData)((((QData)((IData)(
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                          ? 
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                           ? 
                                                          ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U]))
                                                            ? 
                                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                           [
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [7U])]
                                                            : 0U)
                                                           : 0U)
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                                      ? 
                                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                                       ? 
                                                                      ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [6U]))
                                                                        ? 
                                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                                       [
                                                                       (0x1fU 
                                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                        [6U])]
                                                                        : 0U)
                                                                       : 0U)
                                                                      : 0U)))));
    vlSelf->mem_req_col[7U] = (IData)(((((QData)((IData)(
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [6U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U)))) 
                                       >> 0x20U));
    vlSelf->mem_req_wdata[6U] = (IData)((((QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U)))));
    vlSelf->mem_req_wdata[7U] = (IData)(((((QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [7U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                              ? 
                                                             ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                               ? 
                                                              ((0x17U 
                                                                >= 
                                                                (0x1fU 
                                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                 [6U]))
                                                                ? 
                                                               vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                               [
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U])]
                                                                : 0U)
                                                               : 0U)
                                                              : 0U)))) 
                                         >> 0x20U));
    vlSelf->mem_req_proj = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                               ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                   ? ((0x17U >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [7U]))
                                       ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                      [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [7U])] : 0U)
                                   : 0U) : 0U) << 0x15U) 
                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                  ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                      ? ((0x17U >= 
                                          (0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])) ? 
                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                         [(0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])] : 0U)
                                      : 0U) : 0U) << 0x12U) 
                               | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                     ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                         ? ((0x17U 
                                             >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [5U]))
                                             ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                            [(0x1fU 
                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [5U])]
                                             : 0U) : 0U)
                                     : 0U) << 0xfU) 
                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0U)
                                            : 0U) : 0U) 
                                      << 0xcU) | ((
                                                   ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                                     ? 
                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                                      ? 
                                                     ((0x17U 
                                                       >= 
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [3U]))
                                                       ? 
                                                      vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                      [
                                                      (0x1fU 
                                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                       [3U])]
                                                       : 0U)
                                                      : 0U)
                                                     : 0U) 
                                                   << 9U) 
                                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                                        ? 
                                                       ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                                         ? 
                                                        ((0x17U 
                                                          >= 
                                                          (0x1fU 
                                                           & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [2U]))
                                                          ? 
                                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                         [
                                                         (0x1fU 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                          [2U])]
                                                          : 0U)
                                                         : 0U)
                                                        : 0U) 
                                                      << 6U) 
                                                     | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [1U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [1U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U) 
                                                         << 3U) 
                                                        | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))))))));
    vlSelf->mem_req_tag[0U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [0U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [0U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[1U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [0U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [0U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[2U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [1U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [1U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[3U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [1U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [1U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[4U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [2U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [2U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[5U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [2U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [2U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[6U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [3U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [3U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[7U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [3U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [3U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[8U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[9U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [4U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [4U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[0xaU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xbU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [5U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->mem_req_tag[0xcU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xdU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [6U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->mem_req_tag[0xeU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xfU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [7U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_out_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)) 
              | ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)) 
                 & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_lm)
                     ? (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__decoder__logit_ready)
                     : ((0U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__raw_projection)) 
                        & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_in_ready))))));
    if (vlSelf->logit_valid) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_logit_valid) {
            vlSelf->logit_index = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_index;
            vlSelf->logit_data = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_fp32;
        } else {
            vlSelf->logit_index = 0U;
            vlSelf->logit_data = 0U;
        }
    } else {
        vlSelf->logit_index = 0U;
        vlSelf->logit_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__result_transfer 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_valid) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__verify_ready 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_ready)));
    vlSelf->draft_ready = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
                           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__draft_owned)) 
                              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_draft_ready)));
    vlSelf->commit_valid = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
                            & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cr 
        = ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
             & ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))) 
            << 7U) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                        & ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))) 
                       << 6U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready) 
                                  << 5U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready) 
                                             << 4U) 
                                            | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready) 
                                                << 3U) 
                                               | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                                                        & ((0U 
                                                            == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                                                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))))))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__root_publication 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__result_transfer) 
           & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_root))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__dual_think_ctrl__draft_valid 
        = ((IData)(vlSelf->draft_valid) & (IData)(vlSelf->draft_ready));
    if (vlSelf->commit_valid) {
        vlSelf->commit_count = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count;
        vlSelf->commit_tokens[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[0U];
        vlSelf->commit_tokens[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[1U];
        vlSelf->commit_tokens[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[2U];
        vlSelf->commit_tokens[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[3U];
        vlSelf->commit_tokens[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[4U];
        vlSelf->commit_pos = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos;
    } else {
        vlSelf->commit_count = 0U;
        vlSelf->commit_tokens[0U] = 0U;
        vlSelf->commit_tokens[1U] = 0U;
        vlSelf->commit_tokens[2U] = 0U;
        vlSelf->commit_tokens[3U] = 0U;
        vlSelf->commit_tokens[4U] = 0U;
        vlSelf->commit_pos = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__publication 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid) 
           & ((IData)(vlSelf->commit_ready) & (IData)(vlSelf->commit_valid)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer 
        = ((IData)(vlSelf->commit_valid) & (IData)(vlSelf->commit_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__observed_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__input_precommitted)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__root_publication)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 0U;
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__publication) {
        if ((0U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((1U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((2U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((3U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((4U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[3U] 
        = (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer) 
            & (IData)(vlSelf->think_active)) ? (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[4U] 
        = (((~ (IData)(vlSelf->think_active)) & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer))
            ? (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    __Vfunc_event_add64__14268__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0U];
    __Vfunc_event_add64__14268__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0U];
    __Vfunc_event_add64__14268__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14268__value)) 
                                                   + (IData)(__Vfunc_event_add64__14268__delta)));
    __Vfunc_event_add64__14268__carry1 = (1U & (__Vfunc_event_add64__14268__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14268__carry2 = ((IData)(__Vfunc_event_add64__14268__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14268__value)));
    __Vfunc_event_add64__14268__carry3 = ((IData)(__Vfunc_event_add64__14268__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14268__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14268__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14268__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14268__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14268__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14268__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14268__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14268__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14268__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0U] 
        = __Vfunc_event_add64__14268__Vfuncout;
    __Vfunc_event_add64__14269__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [1U];
    __Vfunc_event_add64__14269__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [1U];
    __Vfunc_event_add64__14269__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14269__value)) 
                                                   + (IData)(__Vfunc_event_add64__14269__delta)));
    __Vfunc_event_add64__14269__carry1 = (1U & (__Vfunc_event_add64__14269__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14269__carry2 = ((IData)(__Vfunc_event_add64__14269__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14269__value)));
    __Vfunc_event_add64__14269__carry3 = ((IData)(__Vfunc_event_add64__14269__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14269__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14269__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14269__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14269__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14269__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14269__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14269__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14269__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14269__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[1U] 
        = __Vfunc_event_add64__14269__Vfuncout;
    __Vfunc_event_add64__14270__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [2U];
    __Vfunc_event_add64__14270__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [2U];
    __Vfunc_event_add64__14270__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14270__value)) 
                                                   + (IData)(__Vfunc_event_add64__14270__delta)));
    __Vfunc_event_add64__14270__carry1 = (1U & (__Vfunc_event_add64__14270__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14270__carry2 = ((IData)(__Vfunc_event_add64__14270__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14270__value)));
    __Vfunc_event_add64__14270__carry3 = ((IData)(__Vfunc_event_add64__14270__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14270__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14270__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14270__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14270__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14270__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14270__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14270__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14270__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14270__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[2U] 
        = __Vfunc_event_add64__14270__Vfuncout;
    __Vfunc_event_add64__14271__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [3U];
    __Vfunc_event_add64__14271__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [3U];
    __Vfunc_event_add64__14271__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14271__value)) 
                                                   + (IData)(__Vfunc_event_add64__14271__delta)));
    __Vfunc_event_add64__14271__carry1 = (1U & (__Vfunc_event_add64__14271__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14271__carry2 = ((IData)(__Vfunc_event_add64__14271__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14271__value)));
    __Vfunc_event_add64__14271__carry3 = ((IData)(__Vfunc_event_add64__14271__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14271__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14271__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14271__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14271__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14271__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14271__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14271__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14271__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14271__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[3U] 
        = __Vfunc_event_add64__14271__Vfuncout;
    __Vfunc_event_add64__14272__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [4U];
    __Vfunc_event_add64__14272__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [4U];
    __Vfunc_event_add64__14272__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14272__value)) 
                                                   + (IData)(__Vfunc_event_add64__14272__delta)));
    __Vfunc_event_add64__14272__carry1 = (1U & (__Vfunc_event_add64__14272__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14272__carry2 = ((IData)(__Vfunc_event_add64__14272__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14272__value)));
    __Vfunc_event_add64__14272__carry3 = ((IData)(__Vfunc_event_add64__14272__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14272__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14272__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14272__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14272__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14272__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14272__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14272__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14272__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14272__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[4U] 
        = __Vfunc_event_add64__14272__Vfuncout;
    __Vfunc_event_add64__14273__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [5U];
    __Vfunc_event_add64__14273__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [5U];
    __Vfunc_event_add64__14273__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14273__value)) 
                                                   + (IData)(__Vfunc_event_add64__14273__delta)));
    __Vfunc_event_add64__14273__carry1 = (1U & (__Vfunc_event_add64__14273__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14273__carry2 = ((IData)(__Vfunc_event_add64__14273__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14273__value)));
    __Vfunc_event_add64__14273__carry3 = ((IData)(__Vfunc_event_add64__14273__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14273__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14273__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14273__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14273__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14273__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14273__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14273__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14273__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14273__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[5U] 
        = __Vfunc_event_add64__14273__Vfuncout;
    __Vfunc_event_add64__14274__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [6U];
    __Vfunc_event_add64__14274__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [6U];
    __Vfunc_event_add64__14274__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14274__value)) 
                                                   + (IData)(__Vfunc_event_add64__14274__delta)));
    __Vfunc_event_add64__14274__carry1 = (1U & (__Vfunc_event_add64__14274__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14274__carry2 = ((IData)(__Vfunc_event_add64__14274__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14274__value)));
    __Vfunc_event_add64__14274__carry3 = ((IData)(__Vfunc_event_add64__14274__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14274__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14274__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14274__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14274__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14274__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14274__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14274__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14274__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14274__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[6U] 
        = __Vfunc_event_add64__14274__Vfuncout;
    __Vfunc_event_add64__14275__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [7U];
    __Vfunc_event_add64__14275__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [7U];
    __Vfunc_event_add64__14275__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14275__value)) 
                                                   + (IData)(__Vfunc_event_add64__14275__delta)));
    __Vfunc_event_add64__14275__carry1 = (1U & (__Vfunc_event_add64__14275__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14275__carry2 = ((IData)(__Vfunc_event_add64__14275__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14275__value)));
    __Vfunc_event_add64__14275__carry3 = ((IData)(__Vfunc_event_add64__14275__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14275__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14275__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14275__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14275__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14275__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14275__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14275__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14275__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14275__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[7U] 
        = __Vfunc_event_add64__14275__Vfuncout;
    __Vfunc_event_add64__14276__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [8U];
    __Vfunc_event_add64__14276__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [8U];
    __Vfunc_event_add64__14276__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14276__value)) 
                                                   + (IData)(__Vfunc_event_add64__14276__delta)));
    __Vfunc_event_add64__14276__carry1 = (1U & (__Vfunc_event_add64__14276__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14276__carry2 = ((IData)(__Vfunc_event_add64__14276__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14276__value)));
    __Vfunc_event_add64__14276__carry3 = ((IData)(__Vfunc_event_add64__14276__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14276__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14276__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14276__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14276__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14276__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14276__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14276__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14276__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14276__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[8U] 
        = __Vfunc_event_add64__14276__Vfuncout;
    __Vfunc_event_add64__14277__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [9U];
    __Vfunc_event_add64__14277__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [9U];
    __Vfunc_event_add64__14277__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14277__value)) 
                                                   + (IData)(__Vfunc_event_add64__14277__delta)));
    __Vfunc_event_add64__14277__carry1 = (1U & (__Vfunc_event_add64__14277__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14277__carry2 = ((IData)(__Vfunc_event_add64__14277__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14277__value)));
    __Vfunc_event_add64__14277__carry3 = ((IData)(__Vfunc_event_add64__14277__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14277__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14277__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14277__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14277__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14277__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14277__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14277__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14277__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14277__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[9U] 
        = __Vfunc_event_add64__14277__Vfuncout;
    __Vfunc_event_add64__14278__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xaU];
    __Vfunc_event_add64__14278__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xaU];
    __Vfunc_event_add64__14278__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14278__value)) 
                                                   + (IData)(__Vfunc_event_add64__14278__delta)));
    __Vfunc_event_add64__14278__carry1 = (1U & (__Vfunc_event_add64__14278__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14278__carry2 = ((IData)(__Vfunc_event_add64__14278__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14278__value)));
    __Vfunc_event_add64__14278__carry3 = ((IData)(__Vfunc_event_add64__14278__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14278__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14278__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14278__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14278__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14278__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14278__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14278__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14278__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14278__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__14278__Vfuncout;
    __Vfunc_event_add64__14279__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xbU];
    __Vfunc_event_add64__14279__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xbU];
    __Vfunc_event_add64__14279__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14279__value)) 
                                                   + (IData)(__Vfunc_event_add64__14279__delta)));
    __Vfunc_event_add64__14279__carry1 = (1U & (__Vfunc_event_add64__14279__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14279__carry2 = ((IData)(__Vfunc_event_add64__14279__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14279__value)));
    __Vfunc_event_add64__14279__carry3 = ((IData)(__Vfunc_event_add64__14279__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14279__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14279__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14279__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14279__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14279__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14279__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14279__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14279__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14279__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__14279__Vfuncout;
    __Vfunc_event_add64__14280__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xcU];
    __Vfunc_event_add64__14280__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xcU];
    __Vfunc_event_add64__14280__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14280__value)) 
                                                   + (IData)(__Vfunc_event_add64__14280__delta)));
    __Vfunc_event_add64__14280__carry1 = (1U & (__Vfunc_event_add64__14280__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14280__carry2 = ((IData)(__Vfunc_event_add64__14280__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14280__value)));
    __Vfunc_event_add64__14280__carry3 = ((IData)(__Vfunc_event_add64__14280__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14280__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14280__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14280__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14280__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14280__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14280__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14280__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14280__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14280__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__14280__Vfuncout;
}
