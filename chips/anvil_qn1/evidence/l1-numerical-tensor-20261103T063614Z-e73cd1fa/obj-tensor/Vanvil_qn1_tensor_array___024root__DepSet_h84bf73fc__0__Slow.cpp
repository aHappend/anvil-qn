// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___eval_static(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___eval_initial(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___eval_final(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___dump_triggers__stl(Vanvil_qn1_tensor_array___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vanvil_qn1_tensor_array___024root___eval_phase__stl(Vanvil_qn1_tensor_array___024root* vlSelf);

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___eval_settle(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_tensor_array___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_tensor_array.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vanvil_qn1_tensor_array___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___dump_triggers__stl(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__0(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_bf16_invalid__1__Vfuncout;
    __Vfunc_bf16_invalid__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1__value;
    __Vfunc_bf16_invalid__1__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__6__Vfuncout;
    __Vfunc_bf16_invalid__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__6__value;
    __Vfunc_bf16_invalid__6__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__11__Vfuncout;
    __Vfunc_bf16_invalid__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__11__value;
    __Vfunc_bf16_invalid__11__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__16__Vfuncout;
    __Vfunc_bf16_invalid__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__16__value;
    __Vfunc_bf16_invalid__16__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__21__Vfuncout;
    __Vfunc_bf16_invalid__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__21__value;
    __Vfunc_bf16_invalid__21__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__26__Vfuncout;
    __Vfunc_bf16_invalid__26__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__26__value;
    __Vfunc_bf16_invalid__26__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__31__Vfuncout;
    __Vfunc_bf16_invalid__31__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__31__value;
    __Vfunc_bf16_invalid__31__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__36__Vfuncout;
    __Vfunc_bf16_invalid__36__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__36__value;
    __Vfunc_bf16_invalid__36__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__41__Vfuncout;
    __Vfunc_bf16_invalid__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__41__value;
    __Vfunc_bf16_invalid__41__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__46__Vfuncout;
    __Vfunc_bf16_invalid__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__46__value;
    __Vfunc_bf16_invalid__46__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__51__Vfuncout;
    __Vfunc_bf16_invalid__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__51__value;
    __Vfunc_bf16_invalid__51__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__56__Vfuncout;
    __Vfunc_bf16_invalid__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__56__value;
    __Vfunc_bf16_invalid__56__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__61__Vfuncout;
    __Vfunc_bf16_invalid__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__61__value;
    __Vfunc_bf16_invalid__61__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__66__Vfuncout;
    __Vfunc_bf16_invalid__66__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__66__value;
    __Vfunc_bf16_invalid__66__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__71__Vfuncout;
    __Vfunc_bf16_invalid__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__71__value;
    __Vfunc_bf16_invalid__71__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__76__Vfuncout;
    __Vfunc_bf16_invalid__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__76__value;
    __Vfunc_bf16_invalid__76__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__81__Vfuncout;
    __Vfunc_bf16_invalid__81__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__81__value;
    __Vfunc_bf16_invalid__81__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__86__Vfuncout;
    __Vfunc_bf16_invalid__86__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__86__value;
    __Vfunc_bf16_invalid__86__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__91__Vfuncout;
    __Vfunc_bf16_invalid__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__91__value;
    __Vfunc_bf16_invalid__91__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__96__Vfuncout;
    __Vfunc_bf16_invalid__96__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__96__value;
    __Vfunc_bf16_invalid__96__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__101__Vfuncout;
    __Vfunc_bf16_invalid__101__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__101__value;
    __Vfunc_bf16_invalid__101__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__106__Vfuncout;
    __Vfunc_bf16_invalid__106__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__106__value;
    __Vfunc_bf16_invalid__106__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__111__Vfuncout;
    __Vfunc_bf16_invalid__111__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__111__value;
    __Vfunc_bf16_invalid__111__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__116__Vfuncout;
    __Vfunc_bf16_invalid__116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__116__value;
    __Vfunc_bf16_invalid__116__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__121__Vfuncout;
    __Vfunc_bf16_invalid__121__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__121__value;
    __Vfunc_bf16_invalid__121__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__126__Vfuncout;
    __Vfunc_bf16_invalid__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__126__value;
    __Vfunc_bf16_invalid__126__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__131__Vfuncout;
    __Vfunc_bf16_invalid__131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__131__value;
    __Vfunc_bf16_invalid__131__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__136__Vfuncout;
    __Vfunc_bf16_invalid__136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__136__value;
    __Vfunc_bf16_invalid__136__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__141__Vfuncout;
    __Vfunc_bf16_invalid__141__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__141__value;
    __Vfunc_bf16_invalid__141__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__146__Vfuncout;
    __Vfunc_bf16_invalid__146__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__146__value;
    __Vfunc_bf16_invalid__146__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__151__Vfuncout;
    __Vfunc_bf16_invalid__151__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__151__value;
    __Vfunc_bf16_invalid__151__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__156__Vfuncout;
    __Vfunc_bf16_invalid__156__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__156__value;
    __Vfunc_bf16_invalid__156__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__161__Vfuncout;
    __Vfunc_bf16_invalid__161__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__161__value;
    __Vfunc_bf16_invalid__161__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__166__Vfuncout;
    __Vfunc_bf16_invalid__166__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__166__value;
    __Vfunc_bf16_invalid__166__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__171__Vfuncout;
    __Vfunc_bf16_invalid__171__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__171__value;
    __Vfunc_bf16_invalid__171__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__176__Vfuncout;
    __Vfunc_bf16_invalid__176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__176__value;
    __Vfunc_bf16_invalid__176__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__181__Vfuncout;
    __Vfunc_bf16_invalid__181__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__181__value;
    __Vfunc_bf16_invalid__181__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__186__Vfuncout;
    __Vfunc_bf16_invalid__186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__186__value;
    __Vfunc_bf16_invalid__186__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__191__Vfuncout;
    __Vfunc_bf16_invalid__191__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__191__value;
    __Vfunc_bf16_invalid__191__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__196__Vfuncout;
    __Vfunc_bf16_invalid__196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__196__value;
    __Vfunc_bf16_invalid__196__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__201__Vfuncout;
    __Vfunc_bf16_invalid__201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__201__value;
    __Vfunc_bf16_invalid__201__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__206__Vfuncout;
    __Vfunc_bf16_invalid__206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__206__value;
    __Vfunc_bf16_invalid__206__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__211__Vfuncout;
    __Vfunc_bf16_invalid__211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__211__value;
    __Vfunc_bf16_invalid__211__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__216__Vfuncout;
    __Vfunc_bf16_invalid__216__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__216__value;
    __Vfunc_bf16_invalid__216__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__221__Vfuncout;
    __Vfunc_bf16_invalid__221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__221__value;
    __Vfunc_bf16_invalid__221__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__226__Vfuncout;
    __Vfunc_bf16_invalid__226__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__226__value;
    __Vfunc_bf16_invalid__226__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__231__Vfuncout;
    __Vfunc_bf16_invalid__231__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__231__value;
    __Vfunc_bf16_invalid__231__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__236__Vfuncout;
    __Vfunc_bf16_invalid__236__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__236__value;
    __Vfunc_bf16_invalid__236__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__241__Vfuncout;
    __Vfunc_bf16_invalid__241__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__241__value;
    __Vfunc_bf16_invalid__241__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__246__Vfuncout;
    __Vfunc_bf16_invalid__246__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__246__value;
    __Vfunc_bf16_invalid__246__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__251__Vfuncout;
    __Vfunc_bf16_invalid__251__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__251__value;
    __Vfunc_bf16_invalid__251__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__256__Vfuncout;
    __Vfunc_bf16_invalid__256__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__256__value;
    __Vfunc_bf16_invalid__256__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__261__Vfuncout;
    __Vfunc_bf16_invalid__261__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__261__value;
    __Vfunc_bf16_invalid__261__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__266__Vfuncout;
    __Vfunc_bf16_invalid__266__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__266__value;
    __Vfunc_bf16_invalid__266__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__271__Vfuncout;
    __Vfunc_bf16_invalid__271__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__271__value;
    __Vfunc_bf16_invalid__271__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__276__Vfuncout;
    __Vfunc_bf16_invalid__276__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__276__value;
    __Vfunc_bf16_invalid__276__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__281__Vfuncout;
    __Vfunc_bf16_invalid__281__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__281__value;
    __Vfunc_bf16_invalid__281__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__286__Vfuncout;
    __Vfunc_bf16_invalid__286__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__286__value;
    __Vfunc_bf16_invalid__286__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__291__Vfuncout;
    __Vfunc_bf16_invalid__291__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__291__value;
    __Vfunc_bf16_invalid__291__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__296__Vfuncout;
    __Vfunc_bf16_invalid__296__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__296__value;
    __Vfunc_bf16_invalid__296__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__301__Vfuncout;
    __Vfunc_bf16_invalid__301__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__301__value;
    __Vfunc_bf16_invalid__301__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__306__Vfuncout;
    __Vfunc_bf16_invalid__306__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__306__value;
    __Vfunc_bf16_invalid__306__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__311__Vfuncout;
    __Vfunc_bf16_invalid__311__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__311__value;
    __Vfunc_bf16_invalid__311__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__316__Vfuncout;
    __Vfunc_bf16_invalid__316__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__316__value;
    __Vfunc_bf16_invalid__316__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__321__Vfuncout;
    __Vfunc_bf16_invalid__321__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__321__value;
    __Vfunc_bf16_invalid__321__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__326__Vfuncout;
    __Vfunc_bf16_invalid__326__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__326__value;
    __Vfunc_bf16_invalid__326__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__331__Vfuncout;
    __Vfunc_bf16_invalid__331__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__331__value;
    __Vfunc_bf16_invalid__331__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__336__Vfuncout;
    __Vfunc_bf16_invalid__336__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__336__value;
    __Vfunc_bf16_invalid__336__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__341__Vfuncout;
    __Vfunc_bf16_invalid__341__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__341__value;
    __Vfunc_bf16_invalid__341__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__346__Vfuncout;
    __Vfunc_bf16_invalid__346__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__346__value;
    __Vfunc_bf16_invalid__346__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__351__Vfuncout;
    __Vfunc_bf16_invalid__351__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__351__value;
    __Vfunc_bf16_invalid__351__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__356__Vfuncout;
    __Vfunc_bf16_invalid__356__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__356__value;
    __Vfunc_bf16_invalid__356__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__361__Vfuncout;
    __Vfunc_bf16_invalid__361__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__361__value;
    __Vfunc_bf16_invalid__361__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__366__Vfuncout;
    __Vfunc_bf16_invalid__366__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__366__value;
    __Vfunc_bf16_invalid__366__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__371__Vfuncout;
    __Vfunc_bf16_invalid__371__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__371__value;
    __Vfunc_bf16_invalid__371__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__376__Vfuncout;
    __Vfunc_bf16_invalid__376__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__376__value;
    __Vfunc_bf16_invalid__376__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__381__Vfuncout;
    __Vfunc_bf16_invalid__381__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__381__value;
    __Vfunc_bf16_invalid__381__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__386__Vfuncout;
    __Vfunc_bf16_invalid__386__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__386__value;
    __Vfunc_bf16_invalid__386__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__391__Vfuncout;
    __Vfunc_bf16_invalid__391__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__391__value;
    __Vfunc_bf16_invalid__391__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__396__Vfuncout;
    __Vfunc_bf16_invalid__396__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__396__value;
    __Vfunc_bf16_invalid__396__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__401__Vfuncout;
    __Vfunc_bf16_invalid__401__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__401__value;
    __Vfunc_bf16_invalid__401__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__406__Vfuncout;
    __Vfunc_bf16_invalid__406__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__406__value;
    __Vfunc_bf16_invalid__406__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__411__Vfuncout;
    __Vfunc_bf16_invalid__411__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__411__value;
    __Vfunc_bf16_invalid__411__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__416__Vfuncout;
    __Vfunc_bf16_invalid__416__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__416__value;
    __Vfunc_bf16_invalid__416__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__421__Vfuncout;
    __Vfunc_bf16_invalid__421__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__421__value;
    __Vfunc_bf16_invalid__421__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__426__Vfuncout;
    __Vfunc_bf16_invalid__426__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__426__value;
    __Vfunc_bf16_invalid__426__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__431__Vfuncout;
    __Vfunc_bf16_invalid__431__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__431__value;
    __Vfunc_bf16_invalid__431__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__436__Vfuncout;
    __Vfunc_bf16_invalid__436__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__436__value;
    __Vfunc_bf16_invalid__436__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__441__Vfuncout;
    __Vfunc_bf16_invalid__441__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__441__value;
    __Vfunc_bf16_invalid__441__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__446__Vfuncout;
    __Vfunc_bf16_invalid__446__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__446__value;
    __Vfunc_bf16_invalid__446__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__451__Vfuncout;
    __Vfunc_bf16_invalid__451__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__451__value;
    __Vfunc_bf16_invalid__451__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__456__Vfuncout;
    __Vfunc_bf16_invalid__456__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__456__value;
    __Vfunc_bf16_invalid__456__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__461__Vfuncout;
    __Vfunc_bf16_invalid__461__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__461__value;
    __Vfunc_bf16_invalid__461__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__466__Vfuncout;
    __Vfunc_bf16_invalid__466__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__466__value;
    __Vfunc_bf16_invalid__466__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__471__Vfuncout;
    __Vfunc_bf16_invalid__471__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__471__value;
    __Vfunc_bf16_invalid__471__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__476__Vfuncout;
    __Vfunc_bf16_invalid__476__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__476__value;
    __Vfunc_bf16_invalid__476__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__481__Vfuncout;
    __Vfunc_bf16_invalid__481__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__481__value;
    __Vfunc_bf16_invalid__481__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__486__Vfuncout;
    __Vfunc_bf16_invalid__486__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__486__value;
    __Vfunc_bf16_invalid__486__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__491__Vfuncout;
    __Vfunc_bf16_invalid__491__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__491__value;
    __Vfunc_bf16_invalid__491__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__496__Vfuncout;
    __Vfunc_bf16_invalid__496__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__496__value;
    __Vfunc_bf16_invalid__496__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__501__Vfuncout;
    __Vfunc_bf16_invalid__501__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__501__value;
    __Vfunc_bf16_invalid__501__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__506__Vfuncout;
    __Vfunc_bf16_invalid__506__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__506__value;
    __Vfunc_bf16_invalid__506__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__511__Vfuncout;
    __Vfunc_bf16_invalid__511__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__511__value;
    __Vfunc_bf16_invalid__511__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__516__Vfuncout;
    __Vfunc_bf16_invalid__516__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__516__value;
    __Vfunc_bf16_invalid__516__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__521__Vfuncout;
    __Vfunc_bf16_invalid__521__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__521__value;
    __Vfunc_bf16_invalid__521__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__526__Vfuncout;
    __Vfunc_bf16_invalid__526__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__526__value;
    __Vfunc_bf16_invalid__526__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__531__Vfuncout;
    __Vfunc_bf16_invalid__531__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__531__value;
    __Vfunc_bf16_invalid__531__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__536__Vfuncout;
    __Vfunc_bf16_invalid__536__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__536__value;
    __Vfunc_bf16_invalid__536__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__541__Vfuncout;
    __Vfunc_bf16_invalid__541__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__541__value;
    __Vfunc_bf16_invalid__541__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__546__Vfuncout;
    __Vfunc_bf16_invalid__546__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__546__value;
    __Vfunc_bf16_invalid__546__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__551__Vfuncout;
    __Vfunc_bf16_invalid__551__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__551__value;
    __Vfunc_bf16_invalid__551__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__556__Vfuncout;
    __Vfunc_bf16_invalid__556__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__556__value;
    __Vfunc_bf16_invalid__556__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__561__Vfuncout;
    __Vfunc_bf16_invalid__561__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__561__value;
    __Vfunc_bf16_invalid__561__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__566__Vfuncout;
    __Vfunc_bf16_invalid__566__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__566__value;
    __Vfunc_bf16_invalid__566__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__571__Vfuncout;
    __Vfunc_bf16_invalid__571__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__571__value;
    __Vfunc_bf16_invalid__571__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__576__Vfuncout;
    __Vfunc_bf16_invalid__576__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__576__value;
    __Vfunc_bf16_invalid__576__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__581__Vfuncout;
    __Vfunc_bf16_invalid__581__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__581__value;
    __Vfunc_bf16_invalid__581__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__586__Vfuncout;
    __Vfunc_bf16_invalid__586__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__586__value;
    __Vfunc_bf16_invalid__586__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__591__Vfuncout;
    __Vfunc_bf16_invalid__591__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__591__value;
    __Vfunc_bf16_invalid__591__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__596__Vfuncout;
    __Vfunc_bf16_invalid__596__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__596__value;
    __Vfunc_bf16_invalid__596__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__601__Vfuncout;
    __Vfunc_bf16_invalid__601__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__601__value;
    __Vfunc_bf16_invalid__601__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__606__Vfuncout;
    __Vfunc_bf16_invalid__606__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__606__value;
    __Vfunc_bf16_invalid__606__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__611__Vfuncout;
    __Vfunc_bf16_invalid__611__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__611__value;
    __Vfunc_bf16_invalid__611__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__616__Vfuncout;
    __Vfunc_bf16_invalid__616__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__616__value;
    __Vfunc_bf16_invalid__616__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__621__Vfuncout;
    __Vfunc_bf16_invalid__621__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__621__value;
    __Vfunc_bf16_invalid__621__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__626__Vfuncout;
    __Vfunc_bf16_invalid__626__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__626__value;
    __Vfunc_bf16_invalid__626__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__631__Vfuncout;
    __Vfunc_bf16_invalid__631__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__631__value;
    __Vfunc_bf16_invalid__631__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__636__Vfuncout;
    __Vfunc_bf16_invalid__636__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__636__value;
    __Vfunc_bf16_invalid__636__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__641__Vfuncout;
    __Vfunc_bf16_invalid__641__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__641__value;
    __Vfunc_bf16_invalid__641__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__646__Vfuncout;
    __Vfunc_bf16_invalid__646__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__646__value;
    __Vfunc_bf16_invalid__646__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__651__Vfuncout;
    __Vfunc_bf16_invalid__651__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__651__value;
    __Vfunc_bf16_invalid__651__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__656__Vfuncout;
    __Vfunc_bf16_invalid__656__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__656__value;
    __Vfunc_bf16_invalid__656__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__661__Vfuncout;
    __Vfunc_bf16_invalid__661__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__661__value;
    __Vfunc_bf16_invalid__661__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__666__Vfuncout;
    __Vfunc_bf16_invalid__666__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__666__value;
    __Vfunc_bf16_invalid__666__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__671__Vfuncout;
    __Vfunc_bf16_invalid__671__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__671__value;
    __Vfunc_bf16_invalid__671__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__676__Vfuncout;
    __Vfunc_bf16_invalid__676__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__676__value;
    __Vfunc_bf16_invalid__676__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__681__Vfuncout;
    __Vfunc_bf16_invalid__681__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__681__value;
    __Vfunc_bf16_invalid__681__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__686__Vfuncout;
    __Vfunc_bf16_invalid__686__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__686__value;
    __Vfunc_bf16_invalid__686__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__691__Vfuncout;
    __Vfunc_bf16_invalid__691__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__691__value;
    __Vfunc_bf16_invalid__691__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__696__Vfuncout;
    __Vfunc_bf16_invalid__696__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__696__value;
    __Vfunc_bf16_invalid__696__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__701__Vfuncout;
    __Vfunc_bf16_invalid__701__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__701__value;
    __Vfunc_bf16_invalid__701__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__706__Vfuncout;
    __Vfunc_bf16_invalid__706__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__706__value;
    __Vfunc_bf16_invalid__706__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__711__Vfuncout;
    __Vfunc_bf16_invalid__711__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__711__value;
    __Vfunc_bf16_invalid__711__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__716__Vfuncout;
    __Vfunc_bf16_invalid__716__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__716__value;
    __Vfunc_bf16_invalid__716__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__721__Vfuncout;
    __Vfunc_bf16_invalid__721__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__721__value;
    __Vfunc_bf16_invalid__721__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__726__Vfuncout;
    __Vfunc_bf16_invalid__726__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__726__value;
    __Vfunc_bf16_invalid__726__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__731__Vfuncout;
    __Vfunc_bf16_invalid__731__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__731__value;
    __Vfunc_bf16_invalid__731__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__736__Vfuncout;
    __Vfunc_bf16_invalid__736__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__736__value;
    __Vfunc_bf16_invalid__736__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__741__Vfuncout;
    __Vfunc_bf16_invalid__741__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__741__value;
    __Vfunc_bf16_invalid__741__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__746__Vfuncout;
    __Vfunc_bf16_invalid__746__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__746__value;
    __Vfunc_bf16_invalid__746__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__751__Vfuncout;
    __Vfunc_bf16_invalid__751__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__751__value;
    __Vfunc_bf16_invalid__751__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__756__Vfuncout;
    __Vfunc_bf16_invalid__756__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__756__value;
    __Vfunc_bf16_invalid__756__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__761__Vfuncout;
    __Vfunc_bf16_invalid__761__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__761__value;
    __Vfunc_bf16_invalid__761__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__766__Vfuncout;
    __Vfunc_bf16_invalid__766__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__766__value;
    __Vfunc_bf16_invalid__766__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__771__Vfuncout;
    __Vfunc_bf16_invalid__771__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__771__value;
    __Vfunc_bf16_invalid__771__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__776__Vfuncout;
    __Vfunc_bf16_invalid__776__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__776__value;
    __Vfunc_bf16_invalid__776__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__781__Vfuncout;
    __Vfunc_bf16_invalid__781__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__781__value;
    __Vfunc_bf16_invalid__781__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__786__Vfuncout;
    __Vfunc_bf16_invalid__786__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__786__value;
    __Vfunc_bf16_invalid__786__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__791__Vfuncout;
    __Vfunc_bf16_invalid__791__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__791__value;
    __Vfunc_bf16_invalid__791__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__796__Vfuncout;
    __Vfunc_bf16_invalid__796__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__796__value;
    __Vfunc_bf16_invalid__796__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__801__Vfuncout;
    __Vfunc_bf16_invalid__801__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__801__value;
    __Vfunc_bf16_invalid__801__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__806__Vfuncout;
    __Vfunc_bf16_invalid__806__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__806__value;
    __Vfunc_bf16_invalid__806__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__811__Vfuncout;
    __Vfunc_bf16_invalid__811__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__811__value;
    __Vfunc_bf16_invalid__811__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__816__Vfuncout;
    __Vfunc_bf16_invalid__816__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__816__value;
    __Vfunc_bf16_invalid__816__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__821__Vfuncout;
    __Vfunc_bf16_invalid__821__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__821__value;
    __Vfunc_bf16_invalid__821__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__826__Vfuncout;
    __Vfunc_bf16_invalid__826__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__826__value;
    __Vfunc_bf16_invalid__826__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__831__Vfuncout;
    __Vfunc_bf16_invalid__831__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__831__value;
    __Vfunc_bf16_invalid__831__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__836__Vfuncout;
    __Vfunc_bf16_invalid__836__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__836__value;
    __Vfunc_bf16_invalid__836__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__841__Vfuncout;
    __Vfunc_bf16_invalid__841__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__841__value;
    __Vfunc_bf16_invalid__841__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__846__Vfuncout;
    __Vfunc_bf16_invalid__846__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__846__value;
    __Vfunc_bf16_invalid__846__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__851__Vfuncout;
    __Vfunc_bf16_invalid__851__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__851__value;
    __Vfunc_bf16_invalid__851__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__856__Vfuncout;
    __Vfunc_bf16_invalid__856__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__856__value;
    __Vfunc_bf16_invalid__856__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__861__Vfuncout;
    __Vfunc_bf16_invalid__861__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__861__value;
    __Vfunc_bf16_invalid__861__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__866__Vfuncout;
    __Vfunc_bf16_invalid__866__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__866__value;
    __Vfunc_bf16_invalid__866__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__871__Vfuncout;
    __Vfunc_bf16_invalid__871__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__871__value;
    __Vfunc_bf16_invalid__871__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__876__Vfuncout;
    __Vfunc_bf16_invalid__876__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__876__value;
    __Vfunc_bf16_invalid__876__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__881__Vfuncout;
    __Vfunc_bf16_invalid__881__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__881__value;
    __Vfunc_bf16_invalid__881__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__886__Vfuncout;
    __Vfunc_bf16_invalid__886__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__886__value;
    __Vfunc_bf16_invalid__886__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__891__Vfuncout;
    __Vfunc_bf16_invalid__891__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__891__value;
    __Vfunc_bf16_invalid__891__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__896__Vfuncout;
    __Vfunc_bf16_invalid__896__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__896__value;
    __Vfunc_bf16_invalid__896__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__901__Vfuncout;
    __Vfunc_bf16_invalid__901__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__901__value;
    __Vfunc_bf16_invalid__901__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__906__Vfuncout;
    __Vfunc_bf16_invalid__906__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__906__value;
    __Vfunc_bf16_invalid__906__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__911__Vfuncout;
    __Vfunc_bf16_invalid__911__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__911__value;
    __Vfunc_bf16_invalid__911__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__916__Vfuncout;
    __Vfunc_bf16_invalid__916__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__916__value;
    __Vfunc_bf16_invalid__916__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__921__Vfuncout;
    __Vfunc_bf16_invalid__921__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__921__value;
    __Vfunc_bf16_invalid__921__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__926__Vfuncout;
    __Vfunc_bf16_invalid__926__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__926__value;
    __Vfunc_bf16_invalid__926__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__931__Vfuncout;
    __Vfunc_bf16_invalid__931__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__931__value;
    __Vfunc_bf16_invalid__931__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__936__Vfuncout;
    __Vfunc_bf16_invalid__936__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__936__value;
    __Vfunc_bf16_invalid__936__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__941__Vfuncout;
    __Vfunc_bf16_invalid__941__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__941__value;
    __Vfunc_bf16_invalid__941__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__946__Vfuncout;
    __Vfunc_bf16_invalid__946__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__946__value;
    __Vfunc_bf16_invalid__946__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__951__Vfuncout;
    __Vfunc_bf16_invalid__951__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__951__value;
    __Vfunc_bf16_invalid__951__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__956__Vfuncout;
    __Vfunc_bf16_invalid__956__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__956__value;
    __Vfunc_bf16_invalid__956__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__961__Vfuncout;
    __Vfunc_bf16_invalid__961__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__961__value;
    __Vfunc_bf16_invalid__961__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__966__Vfuncout;
    __Vfunc_bf16_invalid__966__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__966__value;
    __Vfunc_bf16_invalid__966__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__971__Vfuncout;
    __Vfunc_bf16_invalid__971__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__971__value;
    __Vfunc_bf16_invalid__971__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__976__Vfuncout;
    __Vfunc_bf16_invalid__976__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__976__value;
    __Vfunc_bf16_invalid__976__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__981__Vfuncout;
    __Vfunc_bf16_invalid__981__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__981__value;
    __Vfunc_bf16_invalid__981__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__986__Vfuncout;
    __Vfunc_bf16_invalid__986__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__986__value;
    __Vfunc_bf16_invalid__986__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__991__Vfuncout;
    __Vfunc_bf16_invalid__991__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__991__value;
    __Vfunc_bf16_invalid__991__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__996__Vfuncout;
    __Vfunc_bf16_invalid__996__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__996__value;
    __Vfunc_bf16_invalid__996__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1001__Vfuncout;
    __Vfunc_bf16_invalid__1001__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1001__value;
    __Vfunc_bf16_invalid__1001__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1006__Vfuncout;
    __Vfunc_bf16_invalid__1006__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1006__value;
    __Vfunc_bf16_invalid__1006__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1011__Vfuncout;
    __Vfunc_bf16_invalid__1011__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1011__value;
    __Vfunc_bf16_invalid__1011__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1016__Vfuncout;
    __Vfunc_bf16_invalid__1016__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1016__value;
    __Vfunc_bf16_invalid__1016__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1021__Vfuncout;
    __Vfunc_bf16_invalid__1021__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1021__value;
    __Vfunc_bf16_invalid__1021__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1026__Vfuncout;
    __Vfunc_bf16_invalid__1026__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1026__value;
    __Vfunc_bf16_invalid__1026__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1031__Vfuncout;
    __Vfunc_bf16_invalid__1031__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1031__value;
    __Vfunc_bf16_invalid__1031__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1036__Vfuncout;
    __Vfunc_bf16_invalid__1036__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1036__value;
    __Vfunc_bf16_invalid__1036__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1041__Vfuncout;
    __Vfunc_bf16_invalid__1041__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1041__value;
    __Vfunc_bf16_invalid__1041__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1046__Vfuncout;
    __Vfunc_bf16_invalid__1046__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1046__value;
    __Vfunc_bf16_invalid__1046__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1051__Vfuncout;
    __Vfunc_bf16_invalid__1051__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1051__value;
    __Vfunc_bf16_invalid__1051__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1056__Vfuncout;
    __Vfunc_bf16_invalid__1056__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1056__value;
    __Vfunc_bf16_invalid__1056__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1061__Vfuncout;
    __Vfunc_bf16_invalid__1061__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1061__value;
    __Vfunc_bf16_invalid__1061__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1066__Vfuncout;
    __Vfunc_bf16_invalid__1066__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1066__value;
    __Vfunc_bf16_invalid__1066__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1071__Vfuncout;
    __Vfunc_bf16_invalid__1071__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1071__value;
    __Vfunc_bf16_invalid__1071__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1076__Vfuncout;
    __Vfunc_bf16_invalid__1076__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1076__value;
    __Vfunc_bf16_invalid__1076__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1081__Vfuncout;
    __Vfunc_bf16_invalid__1081__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1081__value;
    __Vfunc_bf16_invalid__1081__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1086__Vfuncout;
    __Vfunc_bf16_invalid__1086__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1086__value;
    __Vfunc_bf16_invalid__1086__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1091__Vfuncout;
    __Vfunc_bf16_invalid__1091__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1091__value;
    __Vfunc_bf16_invalid__1091__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1096__Vfuncout;
    __Vfunc_bf16_invalid__1096__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1096__value;
    __Vfunc_bf16_invalid__1096__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1101__Vfuncout;
    __Vfunc_bf16_invalid__1101__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1101__value;
    __Vfunc_bf16_invalid__1101__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1106__Vfuncout;
    __Vfunc_bf16_invalid__1106__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1106__value;
    __Vfunc_bf16_invalid__1106__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1111__Vfuncout;
    __Vfunc_bf16_invalid__1111__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1111__value;
    __Vfunc_bf16_invalid__1111__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1116__Vfuncout;
    __Vfunc_bf16_invalid__1116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1116__value;
    __Vfunc_bf16_invalid__1116__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1121__Vfuncout;
    __Vfunc_bf16_invalid__1121__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1121__value;
    __Vfunc_bf16_invalid__1121__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1126__Vfuncout;
    __Vfunc_bf16_invalid__1126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1126__value;
    __Vfunc_bf16_invalid__1126__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1131__Vfuncout;
    __Vfunc_bf16_invalid__1131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1131__value;
    __Vfunc_bf16_invalid__1131__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1136__Vfuncout;
    __Vfunc_bf16_invalid__1136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1136__value;
    __Vfunc_bf16_invalid__1136__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1141__Vfuncout;
    __Vfunc_bf16_invalid__1141__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1141__value;
    __Vfunc_bf16_invalid__1141__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1146__Vfuncout;
    __Vfunc_bf16_invalid__1146__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1146__value;
    __Vfunc_bf16_invalid__1146__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1151__Vfuncout;
    __Vfunc_bf16_invalid__1151__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1151__value;
    __Vfunc_bf16_invalid__1151__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1156__Vfuncout;
    __Vfunc_bf16_invalid__1156__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1156__value;
    __Vfunc_bf16_invalid__1156__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1161__Vfuncout;
    __Vfunc_bf16_invalid__1161__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1161__value;
    __Vfunc_bf16_invalid__1161__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1166__Vfuncout;
    __Vfunc_bf16_invalid__1166__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1166__value;
    __Vfunc_bf16_invalid__1166__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1171__Vfuncout;
    __Vfunc_bf16_invalid__1171__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1171__value;
    __Vfunc_bf16_invalid__1171__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1176__Vfuncout;
    __Vfunc_bf16_invalid__1176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1176__value;
    __Vfunc_bf16_invalid__1176__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1181__Vfuncout;
    __Vfunc_bf16_invalid__1181__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1181__value;
    __Vfunc_bf16_invalid__1181__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1186__Vfuncout;
    __Vfunc_bf16_invalid__1186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1186__value;
    __Vfunc_bf16_invalid__1186__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1191__Vfuncout;
    __Vfunc_bf16_invalid__1191__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1191__value;
    __Vfunc_bf16_invalid__1191__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1196__Vfuncout;
    __Vfunc_bf16_invalid__1196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1196__value;
    __Vfunc_bf16_invalid__1196__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1201__Vfuncout;
    __Vfunc_bf16_invalid__1201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1201__value;
    __Vfunc_bf16_invalid__1201__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1206__Vfuncout;
    __Vfunc_bf16_invalid__1206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1206__value;
    __Vfunc_bf16_invalid__1206__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1211__Vfuncout;
    __Vfunc_bf16_invalid__1211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1211__value;
    __Vfunc_bf16_invalid__1211__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1216__Vfuncout;
    __Vfunc_bf16_invalid__1216__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1216__value;
    __Vfunc_bf16_invalid__1216__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1221__Vfuncout;
    __Vfunc_bf16_invalid__1221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1221__value;
    __Vfunc_bf16_invalid__1221__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1226__Vfuncout;
    __Vfunc_bf16_invalid__1226__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1226__value;
    __Vfunc_bf16_invalid__1226__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1231__Vfuncout;
    __Vfunc_bf16_invalid__1231__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1231__value;
    __Vfunc_bf16_invalid__1231__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1236__Vfuncout;
    __Vfunc_bf16_invalid__1236__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1236__value;
    __Vfunc_bf16_invalid__1236__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1241__Vfuncout;
    __Vfunc_bf16_invalid__1241__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1241__value;
    __Vfunc_bf16_invalid__1241__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1246__Vfuncout;
    __Vfunc_bf16_invalid__1246__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1246__value;
    __Vfunc_bf16_invalid__1246__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1251__Vfuncout;
    __Vfunc_bf16_invalid__1251__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1251__value;
    __Vfunc_bf16_invalid__1251__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1256__Vfuncout;
    __Vfunc_bf16_invalid__1256__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1256__value;
    __Vfunc_bf16_invalid__1256__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1261__Vfuncout;
    __Vfunc_bf16_invalid__1261__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1261__value;
    __Vfunc_bf16_invalid__1261__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1266__Vfuncout;
    __Vfunc_bf16_invalid__1266__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1266__value;
    __Vfunc_bf16_invalid__1266__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1271__Vfuncout;
    __Vfunc_bf16_invalid__1271__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1271__value;
    __Vfunc_bf16_invalid__1271__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1276__Vfuncout;
    __Vfunc_bf16_invalid__1276__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1276__value;
    __Vfunc_bf16_invalid__1276__value = 0;
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    __Vfunc_bf16_invalid__1__value = (0xffffU & vlSelf->activation_bf16[0U]);
    __Vfunc_bf16_invalid__1__Vfuncout = (0xffU == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__1__value) 
                                                      >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1__Vfuncout;
    __Vfunc_bf16_invalid__6__value = (vlSelf->activation_bf16[0U] 
                                      >> 0x10U);
    __Vfunc_bf16_invalid__6__Vfuncout = (0xffU == (0xffU 
                                                   & ((IData)(__Vfunc_bf16_invalid__6__value) 
                                                      >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__6__Vfuncout;
    __Vfunc_bf16_invalid__11__value = (0xffffU & vlSelf->activation_bf16[1U]);
    __Vfunc_bf16_invalid__11__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__11__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__11__Vfuncout;
    __Vfunc_bf16_invalid__16__value = (vlSelf->activation_bf16[1U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__16__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__16__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__16__Vfuncout;
    __Vfunc_bf16_invalid__21__value = (0xffffU & vlSelf->activation_bf16[2U]);
    __Vfunc_bf16_invalid__21__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__21__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__21__Vfuncout;
    __Vfunc_bf16_invalid__26__value = (vlSelf->activation_bf16[2U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__26__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__26__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__26__Vfuncout;
    __Vfunc_bf16_invalid__31__value = (0xffffU & vlSelf->activation_bf16[3U]);
    __Vfunc_bf16_invalid__31__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__31__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__31__Vfuncout;
    __Vfunc_bf16_invalid__36__value = (vlSelf->activation_bf16[3U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__36__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__36__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__36__Vfuncout;
    __Vfunc_bf16_invalid__41__value = (0xffffU & vlSelf->activation_bf16[4U]);
    __Vfunc_bf16_invalid__41__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__41__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__41__Vfuncout;
    __Vfunc_bf16_invalid__46__value = (vlSelf->activation_bf16[4U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__46__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__46__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__46__Vfuncout;
    __Vfunc_bf16_invalid__51__value = (0xffffU & vlSelf->activation_bf16[5U]);
    __Vfunc_bf16_invalid__51__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__51__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__51__Vfuncout;
    __Vfunc_bf16_invalid__56__value = (vlSelf->activation_bf16[5U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__56__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__56__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__56__Vfuncout;
    __Vfunc_bf16_invalid__61__value = (0xffffU & vlSelf->activation_bf16[6U]);
    __Vfunc_bf16_invalid__61__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__61__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__61__Vfuncout;
    __Vfunc_bf16_invalid__66__value = (vlSelf->activation_bf16[6U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__66__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__66__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__66__Vfuncout;
    __Vfunc_bf16_invalid__71__value = (0xffffU & vlSelf->activation_bf16[7U]);
    __Vfunc_bf16_invalid__71__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__71__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__71__Vfuncout;
    __Vfunc_bf16_invalid__76__value = (vlSelf->activation_bf16[7U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__76__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__76__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__76__Vfuncout;
    __Vfunc_bf16_invalid__81__value = (0xffffU & vlSelf->activation_bf16[8U]);
    __Vfunc_bf16_invalid__81__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__81__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__81__Vfuncout;
    __Vfunc_bf16_invalid__86__value = (vlSelf->activation_bf16[8U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__86__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__86__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__86__Vfuncout;
    __Vfunc_bf16_invalid__91__value = (0xffffU & vlSelf->activation_bf16[9U]);
    __Vfunc_bf16_invalid__91__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__91__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__91__Vfuncout;
    __Vfunc_bf16_invalid__96__value = (vlSelf->activation_bf16[9U] 
                                       >> 0x10U);
    __Vfunc_bf16_invalid__96__Vfuncout = (0xffU == 
                                          (0xffU & 
                                           ((IData)(__Vfunc_bf16_invalid__96__value) 
                                            >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__96__Vfuncout;
    __Vfunc_bf16_invalid__101__value = (0xffffU & vlSelf->activation_bf16[0xaU]);
    __Vfunc_bf16_invalid__101__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__101__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__101__Vfuncout;
    __Vfunc_bf16_invalid__106__value = (vlSelf->activation_bf16[0xaU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__106__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__106__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__106__Vfuncout;
    __Vfunc_bf16_invalid__111__value = (0xffffU & vlSelf->activation_bf16[0xbU]);
    __Vfunc_bf16_invalid__111__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__111__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__111__Vfuncout;
    __Vfunc_bf16_invalid__116__value = (vlSelf->activation_bf16[0xbU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__116__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__116__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__116__Vfuncout;
    __Vfunc_bf16_invalid__121__value = (0xffffU & vlSelf->activation_bf16[0xcU]);
    __Vfunc_bf16_invalid__121__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__121__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__121__Vfuncout;
    __Vfunc_bf16_invalid__126__value = (vlSelf->activation_bf16[0xcU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__126__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__126__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__126__Vfuncout;
    __Vfunc_bf16_invalid__131__value = (0xffffU & vlSelf->activation_bf16[0xdU]);
    __Vfunc_bf16_invalid__131__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__131__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__131__Vfuncout;
    __Vfunc_bf16_invalid__136__value = (vlSelf->activation_bf16[0xdU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__136__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__136__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__136__Vfuncout;
    __Vfunc_bf16_invalid__141__value = (0xffffU & vlSelf->activation_bf16[0xeU]);
    __Vfunc_bf16_invalid__141__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__141__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__141__Vfuncout;
    __Vfunc_bf16_invalid__146__value = (vlSelf->activation_bf16[0xeU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__146__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__146__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__146__Vfuncout;
    __Vfunc_bf16_invalid__151__value = (0xffffU & vlSelf->activation_bf16[0xfU]);
    __Vfunc_bf16_invalid__151__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__151__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__151__Vfuncout;
    __Vfunc_bf16_invalid__156__value = (vlSelf->activation_bf16[0xfU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__156__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__156__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__156__Vfuncout;
    __Vfunc_bf16_invalid__161__value = (0xffffU & vlSelf->activation_bf16[0x10U]);
    __Vfunc_bf16_invalid__161__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__161__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__161__Vfuncout;
    __Vfunc_bf16_invalid__166__value = (vlSelf->activation_bf16[0x10U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__166__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__166__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__166__Vfuncout;
    __Vfunc_bf16_invalid__171__value = (0xffffU & vlSelf->activation_bf16[0x11U]);
    __Vfunc_bf16_invalid__171__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__171__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__171__Vfuncout;
    __Vfunc_bf16_invalid__176__value = (vlSelf->activation_bf16[0x11U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__176__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__176__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__176__Vfuncout;
    __Vfunc_bf16_invalid__181__value = (0xffffU & vlSelf->activation_bf16[0x12U]);
    __Vfunc_bf16_invalid__181__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__181__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__181__Vfuncout;
    __Vfunc_bf16_invalid__186__value = (vlSelf->activation_bf16[0x12U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__186__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__186__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__186__Vfuncout;
    __Vfunc_bf16_invalid__191__value = (0xffffU & vlSelf->activation_bf16[0x13U]);
    __Vfunc_bf16_invalid__191__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__191__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__191__Vfuncout;
    __Vfunc_bf16_invalid__196__value = (vlSelf->activation_bf16[0x13U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__196__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__196__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__196__Vfuncout;
    __Vfunc_bf16_invalid__201__value = (0xffffU & vlSelf->activation_bf16[0x14U]);
    __Vfunc_bf16_invalid__201__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__201__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__201__Vfuncout;
    __Vfunc_bf16_invalid__206__value = (vlSelf->activation_bf16[0x14U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__206__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__206__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__206__Vfuncout;
    __Vfunc_bf16_invalid__211__value = (0xffffU & vlSelf->activation_bf16[0x15U]);
    __Vfunc_bf16_invalid__211__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__211__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__211__Vfuncout;
    __Vfunc_bf16_invalid__216__value = (vlSelf->activation_bf16[0x15U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__216__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__216__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__216__Vfuncout;
    __Vfunc_bf16_invalid__221__value = (0xffffU & vlSelf->activation_bf16[0x16U]);
    __Vfunc_bf16_invalid__221__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__221__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__221__Vfuncout;
    __Vfunc_bf16_invalid__226__value = (vlSelf->activation_bf16[0x16U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__226__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__226__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__226__Vfuncout;
    __Vfunc_bf16_invalid__231__value = (0xffffU & vlSelf->activation_bf16[0x17U]);
    __Vfunc_bf16_invalid__231__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__231__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__231__Vfuncout;
    __Vfunc_bf16_invalid__236__value = (vlSelf->activation_bf16[0x17U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__236__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__236__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__236__Vfuncout;
    __Vfunc_bf16_invalid__241__value = (0xffffU & vlSelf->activation_bf16[0x18U]);
    __Vfunc_bf16_invalid__241__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__241__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__241__Vfuncout;
    __Vfunc_bf16_invalid__246__value = (vlSelf->activation_bf16[0x18U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__246__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__246__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__246__Vfuncout;
    __Vfunc_bf16_invalid__251__value = (0xffffU & vlSelf->activation_bf16[0x19U]);
    __Vfunc_bf16_invalid__251__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__251__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__251__Vfuncout;
    __Vfunc_bf16_invalid__256__value = (vlSelf->activation_bf16[0x19U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__256__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__256__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__256__Vfuncout;
    __Vfunc_bf16_invalid__261__value = (0xffffU & vlSelf->activation_bf16[0x1aU]);
    __Vfunc_bf16_invalid__261__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__261__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__261__Vfuncout;
    __Vfunc_bf16_invalid__266__value = (vlSelf->activation_bf16[0x1aU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__266__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__266__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__266__Vfuncout;
    __Vfunc_bf16_invalid__271__value = (0xffffU & vlSelf->activation_bf16[0x1bU]);
    __Vfunc_bf16_invalid__271__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__271__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__271__Vfuncout;
    __Vfunc_bf16_invalid__276__value = (vlSelf->activation_bf16[0x1bU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__276__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__276__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__276__Vfuncout;
    __Vfunc_bf16_invalid__281__value = (0xffffU & vlSelf->activation_bf16[0x1cU]);
    __Vfunc_bf16_invalid__281__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__281__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__281__Vfuncout;
    __Vfunc_bf16_invalid__286__value = (vlSelf->activation_bf16[0x1cU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__286__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__286__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__286__Vfuncout;
    __Vfunc_bf16_invalid__291__value = (0xffffU & vlSelf->activation_bf16[0x1dU]);
    __Vfunc_bf16_invalid__291__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__291__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__291__Vfuncout;
    __Vfunc_bf16_invalid__296__value = (vlSelf->activation_bf16[0x1dU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__296__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__296__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__296__Vfuncout;
    __Vfunc_bf16_invalid__301__value = (0xffffU & vlSelf->activation_bf16[0x1eU]);
    __Vfunc_bf16_invalid__301__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__301__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__301__Vfuncout;
    __Vfunc_bf16_invalid__306__value = (vlSelf->activation_bf16[0x1eU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__306__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__306__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__306__Vfuncout;
    __Vfunc_bf16_invalid__311__value = (0xffffU & vlSelf->activation_bf16[0x1fU]);
    __Vfunc_bf16_invalid__311__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__311__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__311__Vfuncout;
    __Vfunc_bf16_invalid__316__value = (vlSelf->activation_bf16[0x1fU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__316__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__316__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__316__Vfuncout;
    __Vfunc_bf16_invalid__321__value = (0xffffU & vlSelf->activation_bf16[0x20U]);
    __Vfunc_bf16_invalid__321__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__321__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__321__Vfuncout;
    __Vfunc_bf16_invalid__326__value = (vlSelf->activation_bf16[0x20U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__326__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__326__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__326__Vfuncout;
    __Vfunc_bf16_invalid__331__value = (0xffffU & vlSelf->activation_bf16[0x21U]);
    __Vfunc_bf16_invalid__331__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__331__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__331__Vfuncout;
    __Vfunc_bf16_invalid__336__value = (vlSelf->activation_bf16[0x21U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__336__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__336__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__336__Vfuncout;
    __Vfunc_bf16_invalid__341__value = (0xffffU & vlSelf->activation_bf16[0x22U]);
    __Vfunc_bf16_invalid__341__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__341__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__341__Vfuncout;
    __Vfunc_bf16_invalid__346__value = (vlSelf->activation_bf16[0x22U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__346__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__346__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__346__Vfuncout;
    __Vfunc_bf16_invalid__351__value = (0xffffU & vlSelf->activation_bf16[0x23U]);
    __Vfunc_bf16_invalid__351__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__351__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__351__Vfuncout;
    __Vfunc_bf16_invalid__356__value = (vlSelf->activation_bf16[0x23U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__356__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__356__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__356__Vfuncout;
    __Vfunc_bf16_invalid__361__value = (0xffffU & vlSelf->activation_bf16[0x24U]);
    __Vfunc_bf16_invalid__361__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__361__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__361__Vfuncout;
    __Vfunc_bf16_invalid__366__value = (vlSelf->activation_bf16[0x24U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__366__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__366__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__366__Vfuncout;
    __Vfunc_bf16_invalid__371__value = (0xffffU & vlSelf->activation_bf16[0x25U]);
    __Vfunc_bf16_invalid__371__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__371__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__371__Vfuncout;
    __Vfunc_bf16_invalid__376__value = (vlSelf->activation_bf16[0x25U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__376__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__376__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__376__Vfuncout;
    __Vfunc_bf16_invalid__381__value = (0xffffU & vlSelf->activation_bf16[0x26U]);
    __Vfunc_bf16_invalid__381__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__381__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__381__Vfuncout;
    __Vfunc_bf16_invalid__386__value = (vlSelf->activation_bf16[0x26U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__386__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__386__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__386__Vfuncout;
    __Vfunc_bf16_invalid__391__value = (0xffffU & vlSelf->activation_bf16[0x27U]);
    __Vfunc_bf16_invalid__391__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__391__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__391__Vfuncout;
    __Vfunc_bf16_invalid__396__value = (vlSelf->activation_bf16[0x27U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__396__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__396__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__396__Vfuncout;
    __Vfunc_bf16_invalid__401__value = (0xffffU & vlSelf->activation_bf16[0x28U]);
    __Vfunc_bf16_invalid__401__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__401__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__401__Vfuncout;
    __Vfunc_bf16_invalid__406__value = (vlSelf->activation_bf16[0x28U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__406__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__406__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__406__Vfuncout;
    __Vfunc_bf16_invalid__411__value = (0xffffU & vlSelf->activation_bf16[0x29U]);
    __Vfunc_bf16_invalid__411__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__411__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__411__Vfuncout;
    __Vfunc_bf16_invalid__416__value = (vlSelf->activation_bf16[0x29U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__416__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__416__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__416__Vfuncout;
    __Vfunc_bf16_invalid__421__value = (0xffffU & vlSelf->activation_bf16[0x2aU]);
    __Vfunc_bf16_invalid__421__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__421__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__421__Vfuncout;
    __Vfunc_bf16_invalid__426__value = (vlSelf->activation_bf16[0x2aU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__426__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__426__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__426__Vfuncout;
    __Vfunc_bf16_invalid__431__value = (0xffffU & vlSelf->activation_bf16[0x2bU]);
    __Vfunc_bf16_invalid__431__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__431__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__431__Vfuncout;
    __Vfunc_bf16_invalid__436__value = (vlSelf->activation_bf16[0x2bU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__436__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__436__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__436__Vfuncout;
    __Vfunc_bf16_invalid__441__value = (0xffffU & vlSelf->activation_bf16[0x2cU]);
    __Vfunc_bf16_invalid__441__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__441__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__441__Vfuncout;
    __Vfunc_bf16_invalid__446__value = (vlSelf->activation_bf16[0x2cU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__446__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__446__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__446__Vfuncout;
    __Vfunc_bf16_invalid__451__value = (0xffffU & vlSelf->activation_bf16[0x2dU]);
    __Vfunc_bf16_invalid__451__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__451__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__451__Vfuncout;
    __Vfunc_bf16_invalid__456__value = (vlSelf->activation_bf16[0x2dU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__456__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__456__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__456__Vfuncout;
    __Vfunc_bf16_invalid__461__value = (0xffffU & vlSelf->activation_bf16[0x2eU]);
    __Vfunc_bf16_invalid__461__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__461__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__461__Vfuncout;
    __Vfunc_bf16_invalid__466__value = (vlSelf->activation_bf16[0x2eU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__466__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__466__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__466__Vfuncout;
    __Vfunc_bf16_invalid__471__value = (0xffffU & vlSelf->activation_bf16[0x2fU]);
    __Vfunc_bf16_invalid__471__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__471__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__471__Vfuncout;
    __Vfunc_bf16_invalid__476__value = (vlSelf->activation_bf16[0x2fU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__476__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__476__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__476__Vfuncout;
    __Vfunc_bf16_invalid__481__value = (0xffffU & vlSelf->activation_bf16[0x30U]);
    __Vfunc_bf16_invalid__481__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__481__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__481__Vfuncout;
    __Vfunc_bf16_invalid__486__value = (vlSelf->activation_bf16[0x30U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__486__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__486__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__486__Vfuncout;
    __Vfunc_bf16_invalid__491__value = (0xffffU & vlSelf->activation_bf16[0x31U]);
    __Vfunc_bf16_invalid__491__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__491__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__491__Vfuncout;
    __Vfunc_bf16_invalid__496__value = (vlSelf->activation_bf16[0x31U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__496__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__496__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__496__Vfuncout;
    __Vfunc_bf16_invalid__501__value = (0xffffU & vlSelf->activation_bf16[0x32U]);
    __Vfunc_bf16_invalid__501__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__501__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__501__Vfuncout;
    __Vfunc_bf16_invalid__506__value = (vlSelf->activation_bf16[0x32U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__506__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__506__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__506__Vfuncout;
    __Vfunc_bf16_invalid__511__value = (0xffffU & vlSelf->activation_bf16[0x33U]);
    __Vfunc_bf16_invalid__511__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__511__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__511__Vfuncout;
    __Vfunc_bf16_invalid__516__value = (vlSelf->activation_bf16[0x33U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__516__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__516__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__516__Vfuncout;
    __Vfunc_bf16_invalid__521__value = (0xffffU & vlSelf->activation_bf16[0x34U]);
    __Vfunc_bf16_invalid__521__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__521__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__521__Vfuncout;
    __Vfunc_bf16_invalid__526__value = (vlSelf->activation_bf16[0x34U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__526__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__526__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__526__Vfuncout;
    __Vfunc_bf16_invalid__531__value = (0xffffU & vlSelf->activation_bf16[0x35U]);
    __Vfunc_bf16_invalid__531__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__531__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__531__Vfuncout;
    __Vfunc_bf16_invalid__536__value = (vlSelf->activation_bf16[0x35U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__536__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__536__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__536__Vfuncout;
    __Vfunc_bf16_invalid__541__value = (0xffffU & vlSelf->activation_bf16[0x36U]);
    __Vfunc_bf16_invalid__541__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__541__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__541__Vfuncout;
    __Vfunc_bf16_invalid__546__value = (vlSelf->activation_bf16[0x36U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__546__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__546__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__546__Vfuncout;
    __Vfunc_bf16_invalid__551__value = (0xffffU & vlSelf->activation_bf16[0x37U]);
    __Vfunc_bf16_invalid__551__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__551__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__551__Vfuncout;
    __Vfunc_bf16_invalid__556__value = (vlSelf->activation_bf16[0x37U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__556__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__556__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__556__Vfuncout;
    __Vfunc_bf16_invalid__561__value = (0xffffU & vlSelf->activation_bf16[0x38U]);
    __Vfunc_bf16_invalid__561__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__561__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__561__Vfuncout;
    __Vfunc_bf16_invalid__566__value = (vlSelf->activation_bf16[0x38U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__566__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__566__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__566__Vfuncout;
    __Vfunc_bf16_invalid__571__value = (0xffffU & vlSelf->activation_bf16[0x39U]);
    __Vfunc_bf16_invalid__571__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__571__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__571__Vfuncout;
    __Vfunc_bf16_invalid__576__value = (vlSelf->activation_bf16[0x39U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__576__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__576__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__576__Vfuncout;
    __Vfunc_bf16_invalid__581__value = (0xffffU & vlSelf->activation_bf16[0x3aU]);
    __Vfunc_bf16_invalid__581__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__581__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__581__Vfuncout;
    __Vfunc_bf16_invalid__586__value = (vlSelf->activation_bf16[0x3aU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__586__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__586__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__586__Vfuncout;
    __Vfunc_bf16_invalid__591__value = (0xffffU & vlSelf->activation_bf16[0x3bU]);
    __Vfunc_bf16_invalid__591__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__591__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__591__Vfuncout;
    __Vfunc_bf16_invalid__596__value = (vlSelf->activation_bf16[0x3bU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__596__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__596__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__596__Vfuncout;
    __Vfunc_bf16_invalid__601__value = (0xffffU & vlSelf->activation_bf16[0x3cU]);
    __Vfunc_bf16_invalid__601__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__601__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__601__Vfuncout;
    __Vfunc_bf16_invalid__606__value = (vlSelf->activation_bf16[0x3cU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__606__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__606__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__606__Vfuncout;
    __Vfunc_bf16_invalid__611__value = (0xffffU & vlSelf->activation_bf16[0x3dU]);
    __Vfunc_bf16_invalid__611__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__611__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__611__Vfuncout;
    __Vfunc_bf16_invalid__616__value = (vlSelf->activation_bf16[0x3dU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__616__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__616__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__616__Vfuncout;
    __Vfunc_bf16_invalid__621__value = (0xffffU & vlSelf->activation_bf16[0x3eU]);
    __Vfunc_bf16_invalid__621__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__621__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__621__Vfuncout;
    __Vfunc_bf16_invalid__626__value = (vlSelf->activation_bf16[0x3eU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__626__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__626__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__626__Vfuncout;
    __Vfunc_bf16_invalid__631__value = (0xffffU & vlSelf->activation_bf16[0x3fU]);
    __Vfunc_bf16_invalid__631__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__631__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__631__Vfuncout;
    __Vfunc_bf16_invalid__636__value = (vlSelf->activation_bf16[0x3fU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__636__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__636__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__636__Vfuncout;
    __Vfunc_bf16_invalid__641__value = (0xffffU & vlSelf->activation_bf16[0x40U]);
    __Vfunc_bf16_invalid__641__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__641__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__641__Vfuncout;
    __Vfunc_bf16_invalid__646__value = (vlSelf->activation_bf16[0x40U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__646__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__646__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__646__Vfuncout;
    __Vfunc_bf16_invalid__651__value = (0xffffU & vlSelf->activation_bf16[0x41U]);
    __Vfunc_bf16_invalid__651__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__651__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__651__Vfuncout;
    __Vfunc_bf16_invalid__656__value = (vlSelf->activation_bf16[0x41U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__656__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__656__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__656__Vfuncout;
    __Vfunc_bf16_invalid__661__value = (0xffffU & vlSelf->activation_bf16[0x42U]);
    __Vfunc_bf16_invalid__661__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__661__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__661__Vfuncout;
    __Vfunc_bf16_invalid__666__value = (vlSelf->activation_bf16[0x42U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__666__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__666__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__666__Vfuncout;
    __Vfunc_bf16_invalid__671__value = (0xffffU & vlSelf->activation_bf16[0x43U]);
    __Vfunc_bf16_invalid__671__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__671__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__671__Vfuncout;
    __Vfunc_bf16_invalid__676__value = (vlSelf->activation_bf16[0x43U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__676__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__676__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__676__Vfuncout;
    __Vfunc_bf16_invalid__681__value = (0xffffU & vlSelf->activation_bf16[0x44U]);
    __Vfunc_bf16_invalid__681__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__681__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__681__Vfuncout;
    __Vfunc_bf16_invalid__686__value = (vlSelf->activation_bf16[0x44U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__686__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__686__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__686__Vfuncout;
    __Vfunc_bf16_invalid__691__value = (0xffffU & vlSelf->activation_bf16[0x45U]);
    __Vfunc_bf16_invalid__691__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__691__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__691__Vfuncout;
    __Vfunc_bf16_invalid__696__value = (vlSelf->activation_bf16[0x45U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__696__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__696__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__696__Vfuncout;
    __Vfunc_bf16_invalid__701__value = (0xffffU & vlSelf->activation_bf16[0x46U]);
    __Vfunc_bf16_invalid__701__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__701__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__701__Vfuncout;
    __Vfunc_bf16_invalid__706__value = (vlSelf->activation_bf16[0x46U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__706__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__706__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__706__Vfuncout;
    __Vfunc_bf16_invalid__711__value = (0xffffU & vlSelf->activation_bf16[0x47U]);
    __Vfunc_bf16_invalid__711__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__711__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__711__Vfuncout;
    __Vfunc_bf16_invalid__716__value = (vlSelf->activation_bf16[0x47U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__716__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__716__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__716__Vfuncout;
    __Vfunc_bf16_invalid__721__value = (0xffffU & vlSelf->activation_bf16[0x48U]);
    __Vfunc_bf16_invalid__721__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__721__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__721__Vfuncout;
    __Vfunc_bf16_invalid__726__value = (vlSelf->activation_bf16[0x48U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__726__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__726__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__726__Vfuncout;
    __Vfunc_bf16_invalid__731__value = (0xffffU & vlSelf->activation_bf16[0x49U]);
    __Vfunc_bf16_invalid__731__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__731__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__731__Vfuncout;
    __Vfunc_bf16_invalid__736__value = (vlSelf->activation_bf16[0x49U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__736__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__736__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__736__Vfuncout;
    __Vfunc_bf16_invalid__741__value = (0xffffU & vlSelf->activation_bf16[0x4aU]);
    __Vfunc_bf16_invalid__741__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__741__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__741__Vfuncout;
    __Vfunc_bf16_invalid__746__value = (vlSelf->activation_bf16[0x4aU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__746__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__746__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__746__Vfuncout;
    __Vfunc_bf16_invalid__751__value = (0xffffU & vlSelf->activation_bf16[0x4bU]);
    __Vfunc_bf16_invalid__751__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__751__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__751__Vfuncout;
    __Vfunc_bf16_invalid__756__value = (vlSelf->activation_bf16[0x4bU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__756__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__756__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__756__Vfuncout;
    __Vfunc_bf16_invalid__761__value = (0xffffU & vlSelf->activation_bf16[0x4cU]);
    __Vfunc_bf16_invalid__761__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__761__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__761__Vfuncout;
    __Vfunc_bf16_invalid__766__value = (vlSelf->activation_bf16[0x4cU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__766__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__766__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__766__Vfuncout;
    __Vfunc_bf16_invalid__771__value = (0xffffU & vlSelf->activation_bf16[0x4dU]);
    __Vfunc_bf16_invalid__771__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__771__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__771__Vfuncout;
    __Vfunc_bf16_invalid__776__value = (vlSelf->activation_bf16[0x4dU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__776__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__776__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__776__Vfuncout;
    __Vfunc_bf16_invalid__781__value = (0xffffU & vlSelf->activation_bf16[0x4eU]);
    __Vfunc_bf16_invalid__781__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__781__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__781__Vfuncout;
    __Vfunc_bf16_invalid__786__value = (vlSelf->activation_bf16[0x4eU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__786__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__786__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__786__Vfuncout;
    __Vfunc_bf16_invalid__791__value = (0xffffU & vlSelf->activation_bf16[0x4fU]);
    __Vfunc_bf16_invalid__791__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__791__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__791__Vfuncout;
    __Vfunc_bf16_invalid__796__value = (vlSelf->activation_bf16[0x4fU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__796__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__796__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__796__Vfuncout;
    __Vfunc_bf16_invalid__801__value = (0xffffU & vlSelf->activation_bf16[0x50U]);
    __Vfunc_bf16_invalid__801__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__801__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__801__Vfuncout;
    __Vfunc_bf16_invalid__806__value = (vlSelf->activation_bf16[0x50U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__806__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__806__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__806__Vfuncout;
    __Vfunc_bf16_invalid__811__value = (0xffffU & vlSelf->activation_bf16[0x51U]);
    __Vfunc_bf16_invalid__811__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__811__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__811__Vfuncout;
    __Vfunc_bf16_invalid__816__value = (vlSelf->activation_bf16[0x51U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__816__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__816__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__816__Vfuncout;
    __Vfunc_bf16_invalid__821__value = (0xffffU & vlSelf->activation_bf16[0x52U]);
    __Vfunc_bf16_invalid__821__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__821__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__821__Vfuncout;
    __Vfunc_bf16_invalid__826__value = (vlSelf->activation_bf16[0x52U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__826__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__826__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__826__Vfuncout;
    __Vfunc_bf16_invalid__831__value = (0xffffU & vlSelf->activation_bf16[0x53U]);
    __Vfunc_bf16_invalid__831__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__831__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__831__Vfuncout;
    __Vfunc_bf16_invalid__836__value = (vlSelf->activation_bf16[0x53U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__836__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__836__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__836__Vfuncout;
    __Vfunc_bf16_invalid__841__value = (0xffffU & vlSelf->activation_bf16[0x54U]);
    __Vfunc_bf16_invalid__841__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__841__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__841__Vfuncout;
    __Vfunc_bf16_invalid__846__value = (vlSelf->activation_bf16[0x54U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__846__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__846__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__846__Vfuncout;
    __Vfunc_bf16_invalid__851__value = (0xffffU & vlSelf->activation_bf16[0x55U]);
    __Vfunc_bf16_invalid__851__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__851__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__851__Vfuncout;
    __Vfunc_bf16_invalid__856__value = (vlSelf->activation_bf16[0x55U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__856__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__856__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__856__Vfuncout;
    __Vfunc_bf16_invalid__861__value = (0xffffU & vlSelf->activation_bf16[0x56U]);
    __Vfunc_bf16_invalid__861__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__861__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__861__Vfuncout;
    __Vfunc_bf16_invalid__866__value = (vlSelf->activation_bf16[0x56U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__866__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__866__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__866__Vfuncout;
    __Vfunc_bf16_invalid__871__value = (0xffffU & vlSelf->activation_bf16[0x57U]);
    __Vfunc_bf16_invalid__871__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__871__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__871__Vfuncout;
    __Vfunc_bf16_invalid__876__value = (vlSelf->activation_bf16[0x57U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__876__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__876__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__876__Vfuncout;
    __Vfunc_bf16_invalid__881__value = (0xffffU & vlSelf->activation_bf16[0x58U]);
    __Vfunc_bf16_invalid__881__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__881__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__881__Vfuncout;
    __Vfunc_bf16_invalid__886__value = (vlSelf->activation_bf16[0x58U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__886__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__886__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__886__Vfuncout;
    __Vfunc_bf16_invalid__891__value = (0xffffU & vlSelf->activation_bf16[0x59U]);
    __Vfunc_bf16_invalid__891__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__891__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__891__Vfuncout;
    __Vfunc_bf16_invalid__896__value = (vlSelf->activation_bf16[0x59U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__896__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__896__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__896__Vfuncout;
    __Vfunc_bf16_invalid__901__value = (0xffffU & vlSelf->activation_bf16[0x5aU]);
    __Vfunc_bf16_invalid__901__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__901__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__901__Vfuncout;
    __Vfunc_bf16_invalid__906__value = (vlSelf->activation_bf16[0x5aU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__906__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__906__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__906__Vfuncout;
    __Vfunc_bf16_invalid__911__value = (0xffffU & vlSelf->activation_bf16[0x5bU]);
    __Vfunc_bf16_invalid__911__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__911__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__911__Vfuncout;
    __Vfunc_bf16_invalid__916__value = (vlSelf->activation_bf16[0x5bU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__916__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__916__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__916__Vfuncout;
    __Vfunc_bf16_invalid__921__value = (0xffffU & vlSelf->activation_bf16[0x5cU]);
    __Vfunc_bf16_invalid__921__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__921__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__921__Vfuncout;
    __Vfunc_bf16_invalid__926__value = (vlSelf->activation_bf16[0x5cU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__926__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__926__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__926__Vfuncout;
    __Vfunc_bf16_invalid__931__value = (0xffffU & vlSelf->activation_bf16[0x5dU]);
    __Vfunc_bf16_invalid__931__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__931__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__931__Vfuncout;
    __Vfunc_bf16_invalid__936__value = (vlSelf->activation_bf16[0x5dU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__936__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__936__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__936__Vfuncout;
    __Vfunc_bf16_invalid__941__value = (0xffffU & vlSelf->activation_bf16[0x5eU]);
    __Vfunc_bf16_invalid__941__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__941__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__941__Vfuncout;
    __Vfunc_bf16_invalid__946__value = (vlSelf->activation_bf16[0x5eU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__946__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__946__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__946__Vfuncout;
    __Vfunc_bf16_invalid__951__value = (0xffffU & vlSelf->activation_bf16[0x5fU]);
    __Vfunc_bf16_invalid__951__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__951__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__951__Vfuncout;
    __Vfunc_bf16_invalid__956__value = (vlSelf->activation_bf16[0x5fU] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__956__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__956__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__956__Vfuncout;
    __Vfunc_bf16_invalid__961__value = (0xffffU & vlSelf->activation_bf16[0x60U]);
    __Vfunc_bf16_invalid__961__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__961__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__961__Vfuncout;
    __Vfunc_bf16_invalid__966__value = (vlSelf->activation_bf16[0x60U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__966__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__966__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__966__Vfuncout;
    __Vfunc_bf16_invalid__971__value = (0xffffU & vlSelf->activation_bf16[0x61U]);
    __Vfunc_bf16_invalid__971__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__971__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__971__Vfuncout;
    __Vfunc_bf16_invalid__976__value = (vlSelf->activation_bf16[0x61U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__976__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__976__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__976__Vfuncout;
    __Vfunc_bf16_invalid__981__value = (0xffffU & vlSelf->activation_bf16[0x62U]);
    __Vfunc_bf16_invalid__981__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__981__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__981__Vfuncout;
    __Vfunc_bf16_invalid__986__value = (vlSelf->activation_bf16[0x62U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__986__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__986__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__986__Vfuncout;
    __Vfunc_bf16_invalid__991__value = (0xffffU & vlSelf->activation_bf16[0x63U]);
    __Vfunc_bf16_invalid__991__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__991__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__991__Vfuncout;
    __Vfunc_bf16_invalid__996__value = (vlSelf->activation_bf16[0x63U] 
                                        >> 0x10U);
    __Vfunc_bf16_invalid__996__Vfuncout = (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_bf16_invalid__996__value) 
                                             >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__996__Vfuncout;
    __Vfunc_bf16_invalid__1001__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x64U]);
    __Vfunc_bf16_invalid__1001__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1001__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1001__Vfuncout;
    __Vfunc_bf16_invalid__1006__value = (vlSelf->activation_bf16[0x64U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1006__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1006__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1006__Vfuncout;
    __Vfunc_bf16_invalid__1011__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x65U]);
    __Vfunc_bf16_invalid__1011__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1011__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1011__Vfuncout;
    __Vfunc_bf16_invalid__1016__value = (vlSelf->activation_bf16[0x65U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1016__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1016__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1016__Vfuncout;
    __Vfunc_bf16_invalid__1021__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x66U]);
    __Vfunc_bf16_invalid__1021__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1021__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1021__Vfuncout;
    __Vfunc_bf16_invalid__1026__value = (vlSelf->activation_bf16[0x66U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1026__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1026__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1026__Vfuncout;
    __Vfunc_bf16_invalid__1031__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x67U]);
    __Vfunc_bf16_invalid__1031__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1031__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1031__Vfuncout;
    __Vfunc_bf16_invalid__1036__value = (vlSelf->activation_bf16[0x67U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1036__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1036__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1036__Vfuncout;
    __Vfunc_bf16_invalid__1041__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x68U]);
    __Vfunc_bf16_invalid__1041__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1041__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1041__Vfuncout;
    __Vfunc_bf16_invalid__1046__value = (vlSelf->activation_bf16[0x68U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1046__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1046__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1046__Vfuncout;
    __Vfunc_bf16_invalid__1051__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x69U]);
    __Vfunc_bf16_invalid__1051__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1051__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1051__Vfuncout;
    __Vfunc_bf16_invalid__1056__value = (vlSelf->activation_bf16[0x69U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1056__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1056__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1056__Vfuncout;
    __Vfunc_bf16_invalid__1061__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6aU]);
    __Vfunc_bf16_invalid__1061__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1061__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1061__Vfuncout;
    __Vfunc_bf16_invalid__1066__value = (vlSelf->activation_bf16[0x6aU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1066__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1066__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1066__Vfuncout;
    __Vfunc_bf16_invalid__1071__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6bU]);
    __Vfunc_bf16_invalid__1071__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1071__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1071__Vfuncout;
    __Vfunc_bf16_invalid__1076__value = (vlSelf->activation_bf16[0x6bU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1076__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1076__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1076__Vfuncout;
    __Vfunc_bf16_invalid__1081__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6cU]);
    __Vfunc_bf16_invalid__1081__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1081__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1081__Vfuncout;
    __Vfunc_bf16_invalid__1086__value = (vlSelf->activation_bf16[0x6cU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1086__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1086__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1086__Vfuncout;
    __Vfunc_bf16_invalid__1091__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6dU]);
    __Vfunc_bf16_invalid__1091__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1091__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1091__Vfuncout;
    __Vfunc_bf16_invalid__1096__value = (vlSelf->activation_bf16[0x6dU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1096__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1096__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1096__Vfuncout;
    __Vfunc_bf16_invalid__1101__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6eU]);
    __Vfunc_bf16_invalid__1101__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1101__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1101__Vfuncout;
    __Vfunc_bf16_invalid__1106__value = (vlSelf->activation_bf16[0x6eU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1106__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1106__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1106__Vfuncout;
    __Vfunc_bf16_invalid__1111__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x6fU]);
    __Vfunc_bf16_invalid__1111__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1111__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1111__Vfuncout;
    __Vfunc_bf16_invalid__1116__value = (vlSelf->activation_bf16[0x6fU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1116__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1116__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1116__Vfuncout;
    __Vfunc_bf16_invalid__1121__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x70U]);
    __Vfunc_bf16_invalid__1121__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1121__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1121__Vfuncout;
    __Vfunc_bf16_invalid__1126__value = (vlSelf->activation_bf16[0x70U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1126__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1126__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1126__Vfuncout;
    __Vfunc_bf16_invalid__1131__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x71U]);
    __Vfunc_bf16_invalid__1131__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1131__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1131__Vfuncout;
    __Vfunc_bf16_invalid__1136__value = (vlSelf->activation_bf16[0x71U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1136__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1136__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1136__Vfuncout;
    __Vfunc_bf16_invalid__1141__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x72U]);
    __Vfunc_bf16_invalid__1141__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1141__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1141__Vfuncout;
    __Vfunc_bf16_invalid__1146__value = (vlSelf->activation_bf16[0x72U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1146__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1146__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1146__Vfuncout;
    __Vfunc_bf16_invalid__1151__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x73U]);
    __Vfunc_bf16_invalid__1151__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1151__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1151__Vfuncout;
    __Vfunc_bf16_invalid__1156__value = (vlSelf->activation_bf16[0x73U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1156__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1156__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1156__Vfuncout;
    __Vfunc_bf16_invalid__1161__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x74U]);
    __Vfunc_bf16_invalid__1161__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1161__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1161__Vfuncout;
    __Vfunc_bf16_invalid__1166__value = (vlSelf->activation_bf16[0x74U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1166__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1166__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1166__Vfuncout;
    __Vfunc_bf16_invalid__1171__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x75U]);
    __Vfunc_bf16_invalid__1171__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1171__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1171__Vfuncout;
    __Vfunc_bf16_invalid__1176__value = (vlSelf->activation_bf16[0x75U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1176__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1176__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1176__Vfuncout;
    __Vfunc_bf16_invalid__1181__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x76U]);
    __Vfunc_bf16_invalid__1181__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1181__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1181__Vfuncout;
    __Vfunc_bf16_invalid__1186__value = (vlSelf->activation_bf16[0x76U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1186__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1186__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1186__Vfuncout;
    __Vfunc_bf16_invalid__1191__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x77U]);
    __Vfunc_bf16_invalid__1191__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1191__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1191__Vfuncout;
    __Vfunc_bf16_invalid__1196__value = (vlSelf->activation_bf16[0x77U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1196__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1196__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1196__Vfuncout;
    __Vfunc_bf16_invalid__1201__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x78U]);
    __Vfunc_bf16_invalid__1201__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1201__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1201__Vfuncout;
    __Vfunc_bf16_invalid__1206__value = (vlSelf->activation_bf16[0x78U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1206__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1206__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1206__Vfuncout;
    __Vfunc_bf16_invalid__1211__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x79U]);
    __Vfunc_bf16_invalid__1211__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1211__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1211__Vfuncout;
    __Vfunc_bf16_invalid__1216__value = (vlSelf->activation_bf16[0x79U] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1216__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1216__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1216__Vfuncout;
    __Vfunc_bf16_invalid__1221__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7aU]);
    __Vfunc_bf16_invalid__1221__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1221__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1221__Vfuncout;
    __Vfunc_bf16_invalid__1226__value = (vlSelf->activation_bf16[0x7aU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1226__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1226__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1226__Vfuncout;
    __Vfunc_bf16_invalid__1231__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7bU]);
    __Vfunc_bf16_invalid__1231__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1231__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1231__Vfuncout;
    __Vfunc_bf16_invalid__1236__value = (vlSelf->activation_bf16[0x7bU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1236__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1236__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1236__Vfuncout;
    __Vfunc_bf16_invalid__1241__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7cU]);
    __Vfunc_bf16_invalid__1241__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1241__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1241__Vfuncout;
    __Vfunc_bf16_invalid__1246__value = (vlSelf->activation_bf16[0x7cU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1246__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1246__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1246__Vfuncout;
    __Vfunc_bf16_invalid__1251__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7dU]);
    __Vfunc_bf16_invalid__1251__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1251__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1251__Vfuncout;
    __Vfunc_bf16_invalid__1256__value = (vlSelf->activation_bf16[0x7dU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1256__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1256__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1256__Vfuncout;
    __Vfunc_bf16_invalid__1261__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7eU]);
    __Vfunc_bf16_invalid__1261__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1261__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1261__Vfuncout;
    __Vfunc_bf16_invalid__1266__value = (vlSelf->activation_bf16[0x7eU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1266__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1266__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1266__Vfuncout;
    __Vfunc_bf16_invalid__1271__value = (0xffffU & 
                                         vlSelf->activation_bf16[0x7fU]);
    __Vfunc_bf16_invalid__1271__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1271__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1271__Vfuncout;
    __Vfunc_bf16_invalid__1276__value = (vlSelf->activation_bf16[0x7fU] 
                                         >> 0x10U);
    __Vfunc_bf16_invalid__1276__Vfuncout = (0xffU == 
                                            (0xffU 
                                             & ((IData)(__Vfunc_bf16_invalid__1276__value) 
                                                >> 7U)));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__invalid_activation 
        = __Vfunc_bf16_invalid__1276__Vfuncout;
    vlSelf->anvil_qn1_tensor_array__DOT__ce = (1U & 
                                               ((~ (IData)(
                                                           (vlSelf->anvil_qn1_tensor_array__DOT__valid 
                                                            >> 0x30U))) 
                                                | (IData)(vlSelf->out_ready)));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4352__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4352__part 
                            = vlSelf->__Vfunc_leading_zero32__4352__value;
                        vlSelf->__Vfunc_leading_zero32__4352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4352__count)));
                            vlSelf->__Vfunc_leading_zero32__4352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4352__count)));
                            vlSelf->__Vfunc_leading_zero32__4352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4352__count)));
                            vlSelf->__Vfunc_leading_zero32__4352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4352__count)));
                            vlSelf->__Vfunc_leading_zero32__4352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4352__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4358__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4358__part 
                            = vlSelf->__Vfunc_leading_zero32__4358__value;
                        vlSelf->__Vfunc_leading_zero32__4358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4358__count)));
                            vlSelf->__Vfunc_leading_zero32__4358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4358__count)));
                            vlSelf->__Vfunc_leading_zero32__4358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4358__count)));
                            vlSelf->__Vfunc_leading_zero32__4358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4358__count)));
                            vlSelf->__Vfunc_leading_zero32__4358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4358__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4364__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4364__part 
                            = vlSelf->__Vfunc_leading_zero32__4364__value;
                        vlSelf->__Vfunc_leading_zero32__4364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4364__count)));
                            vlSelf->__Vfunc_leading_zero32__4364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4364__count)));
                            vlSelf->__Vfunc_leading_zero32__4364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4364__count)));
                            vlSelf->__Vfunc_leading_zero32__4364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4364__count)));
                            vlSelf->__Vfunc_leading_zero32__4364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4364__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4370__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4370__part 
                            = vlSelf->__Vfunc_leading_zero32__4370__value;
                        vlSelf->__Vfunc_leading_zero32__4370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4370__count)));
                            vlSelf->__Vfunc_leading_zero32__4370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4370__count)));
                            vlSelf->__Vfunc_leading_zero32__4370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4370__count)));
                            vlSelf->__Vfunc_leading_zero32__4370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4370__count)));
                            vlSelf->__Vfunc_leading_zero32__4370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4370__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4376__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4376__part 
                            = vlSelf->__Vfunc_leading_zero32__4376__value;
                        vlSelf->__Vfunc_leading_zero32__4376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4376__count)));
                            vlSelf->__Vfunc_leading_zero32__4376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4376__count)));
                            vlSelf->__Vfunc_leading_zero32__4376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4376__count)));
                            vlSelf->__Vfunc_leading_zero32__4376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4376__count)));
                            vlSelf->__Vfunc_leading_zero32__4376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4376__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4382__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4382__part 
                            = vlSelf->__Vfunc_leading_zero32__4382__value;
                        vlSelf->__Vfunc_leading_zero32__4382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4382__count)));
                            vlSelf->__Vfunc_leading_zero32__4382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4382__count)));
                            vlSelf->__Vfunc_leading_zero32__4382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4382__count)));
                            vlSelf->__Vfunc_leading_zero32__4382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4382__count)));
                            vlSelf->__Vfunc_leading_zero32__4382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4382__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4388__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4388__part 
                            = vlSelf->__Vfunc_leading_zero32__4388__value;
                        vlSelf->__Vfunc_leading_zero32__4388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4388__count)));
                            vlSelf->__Vfunc_leading_zero32__4388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4388__count)));
                            vlSelf->__Vfunc_leading_zero32__4388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4388__count)));
                            vlSelf->__Vfunc_leading_zero32__4388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4388__count)));
                            vlSelf->__Vfunc_leading_zero32__4388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4388__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4394__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4394__part 
                            = vlSelf->__Vfunc_leading_zero32__4394__value;
                        vlSelf->__Vfunc_leading_zero32__4394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4394__count)));
                            vlSelf->__Vfunc_leading_zero32__4394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4394__count)));
                            vlSelf->__Vfunc_leading_zero32__4394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4394__count)));
                            vlSelf->__Vfunc_leading_zero32__4394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4394__count)));
                            vlSelf->__Vfunc_leading_zero32__4394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4394__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4400__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4400__part 
                            = vlSelf->__Vfunc_leading_zero32__4400__value;
                        vlSelf->__Vfunc_leading_zero32__4400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4400__count)));
                            vlSelf->__Vfunc_leading_zero32__4400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4400__count)));
                            vlSelf->__Vfunc_leading_zero32__4400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4400__count)));
                            vlSelf->__Vfunc_leading_zero32__4400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4400__count)));
                            vlSelf->__Vfunc_leading_zero32__4400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4400__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4406__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4406__part 
                            = vlSelf->__Vfunc_leading_zero32__4406__value;
                        vlSelf->__Vfunc_leading_zero32__4406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4406__count)));
                            vlSelf->__Vfunc_leading_zero32__4406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4406__count)));
                            vlSelf->__Vfunc_leading_zero32__4406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4406__count)));
                            vlSelf->__Vfunc_leading_zero32__4406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4406__count)));
                            vlSelf->__Vfunc_leading_zero32__4406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4406__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4412__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4412__part 
                            = vlSelf->__Vfunc_leading_zero32__4412__value;
                        vlSelf->__Vfunc_leading_zero32__4412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4412__count)));
                            vlSelf->__Vfunc_leading_zero32__4412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4412__count)));
                            vlSelf->__Vfunc_leading_zero32__4412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4412__count)));
                            vlSelf->__Vfunc_leading_zero32__4412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4412__count)));
                            vlSelf->__Vfunc_leading_zero32__4412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4412__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4418__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4418__part 
                            = vlSelf->__Vfunc_leading_zero32__4418__value;
                        vlSelf->__Vfunc_leading_zero32__4418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4418__count)));
                            vlSelf->__Vfunc_leading_zero32__4418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4418__count)));
                            vlSelf->__Vfunc_leading_zero32__4418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4418__count)));
                            vlSelf->__Vfunc_leading_zero32__4418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4418__count)));
                            vlSelf->__Vfunc_leading_zero32__4418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4418__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4424__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4424__part 
                            = vlSelf->__Vfunc_leading_zero32__4424__value;
                        vlSelf->__Vfunc_leading_zero32__4424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4424__count)));
                            vlSelf->__Vfunc_leading_zero32__4424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4424__count)));
                            vlSelf->__Vfunc_leading_zero32__4424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4424__count)));
                            vlSelf->__Vfunc_leading_zero32__4424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4424__count)));
                            vlSelf->__Vfunc_leading_zero32__4424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4424__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4430__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4430__part 
                            = vlSelf->__Vfunc_leading_zero32__4430__value;
                        vlSelf->__Vfunc_leading_zero32__4430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4430__count)));
                            vlSelf->__Vfunc_leading_zero32__4430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4430__count)));
                            vlSelf->__Vfunc_leading_zero32__4430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4430__count)));
                            vlSelf->__Vfunc_leading_zero32__4430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4430__count)));
                            vlSelf->__Vfunc_leading_zero32__4430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4430__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4436__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4436__part 
                            = vlSelf->__Vfunc_leading_zero32__4436__value;
                        vlSelf->__Vfunc_leading_zero32__4436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4436__count)));
                            vlSelf->__Vfunc_leading_zero32__4436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4436__count)));
                            vlSelf->__Vfunc_leading_zero32__4436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4436__count)));
                            vlSelf->__Vfunc_leading_zero32__4436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4436__count)));
                            vlSelf->__Vfunc_leading_zero32__4436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4436__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4442__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4442__part 
                            = vlSelf->__Vfunc_leading_zero32__4442__value;
                        vlSelf->__Vfunc_leading_zero32__4442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4442__count)));
                            vlSelf->__Vfunc_leading_zero32__4442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4442__count)));
                            vlSelf->__Vfunc_leading_zero32__4442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4442__count)));
                            vlSelf->__Vfunc_leading_zero32__4442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4442__count)));
                            vlSelf->__Vfunc_leading_zero32__4442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4442__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4448__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4448__part 
                            = vlSelf->__Vfunc_leading_zero32__4448__value;
                        vlSelf->__Vfunc_leading_zero32__4448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4448__count)));
                            vlSelf->__Vfunc_leading_zero32__4448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4448__count)));
                            vlSelf->__Vfunc_leading_zero32__4448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4448__count)));
                            vlSelf->__Vfunc_leading_zero32__4448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4448__count)));
                            vlSelf->__Vfunc_leading_zero32__4448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4448__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4454__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4454__part 
                            = vlSelf->__Vfunc_leading_zero32__4454__value;
                        vlSelf->__Vfunc_leading_zero32__4454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4454__count)));
                            vlSelf->__Vfunc_leading_zero32__4454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4454__count)));
                            vlSelf->__Vfunc_leading_zero32__4454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4454__count)));
                            vlSelf->__Vfunc_leading_zero32__4454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4454__count)));
                            vlSelf->__Vfunc_leading_zero32__4454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4454__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4460__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4460__part 
                            = vlSelf->__Vfunc_leading_zero32__4460__value;
                        vlSelf->__Vfunc_leading_zero32__4460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4460__count)));
                            vlSelf->__Vfunc_leading_zero32__4460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4460__count)));
                            vlSelf->__Vfunc_leading_zero32__4460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4460__count)));
                            vlSelf->__Vfunc_leading_zero32__4460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4460__count)));
                            vlSelf->__Vfunc_leading_zero32__4460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4460__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4466__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4466__part 
                            = vlSelf->__Vfunc_leading_zero32__4466__value;
                        vlSelf->__Vfunc_leading_zero32__4466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4466__count)));
                            vlSelf->__Vfunc_leading_zero32__4466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4466__count)));
                            vlSelf->__Vfunc_leading_zero32__4466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4466__count)));
                            vlSelf->__Vfunc_leading_zero32__4466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4466__count)));
                            vlSelf->__Vfunc_leading_zero32__4466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4466__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4472__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4472__part 
                            = vlSelf->__Vfunc_leading_zero32__4472__value;
                        vlSelf->__Vfunc_leading_zero32__4472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4472__count)));
                            vlSelf->__Vfunc_leading_zero32__4472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4472__count)));
                            vlSelf->__Vfunc_leading_zero32__4472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4472__count)));
                            vlSelf->__Vfunc_leading_zero32__4472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4472__count)));
                            vlSelf->__Vfunc_leading_zero32__4472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4472__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4478__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4478__part 
                            = vlSelf->__Vfunc_leading_zero32__4478__value;
                        vlSelf->__Vfunc_leading_zero32__4478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4478__count)));
                            vlSelf->__Vfunc_leading_zero32__4478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4478__count)));
                            vlSelf->__Vfunc_leading_zero32__4478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4478__count)));
                            vlSelf->__Vfunc_leading_zero32__4478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4478__count)));
                            vlSelf->__Vfunc_leading_zero32__4478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4478__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4484__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4484__part 
                            = vlSelf->__Vfunc_leading_zero32__4484__value;
                        vlSelf->__Vfunc_leading_zero32__4484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4484__count)));
                            vlSelf->__Vfunc_leading_zero32__4484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4484__count)));
                            vlSelf->__Vfunc_leading_zero32__4484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4484__count)));
                            vlSelf->__Vfunc_leading_zero32__4484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4484__count)));
                            vlSelf->__Vfunc_leading_zero32__4484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4484__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4490__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4490__part 
                            = vlSelf->__Vfunc_leading_zero32__4490__value;
                        vlSelf->__Vfunc_leading_zero32__4490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4490__count)));
                            vlSelf->__Vfunc_leading_zero32__4490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4490__count)));
                            vlSelf->__Vfunc_leading_zero32__4490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4490__count)));
                            vlSelf->__Vfunc_leading_zero32__4490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4490__count)));
                            vlSelf->__Vfunc_leading_zero32__4490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4490__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4496__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4496__part 
                            = vlSelf->__Vfunc_leading_zero32__4496__value;
                        vlSelf->__Vfunc_leading_zero32__4496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4496__count)));
                            vlSelf->__Vfunc_leading_zero32__4496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4496__count)));
                            vlSelf->__Vfunc_leading_zero32__4496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4496__count)));
                            vlSelf->__Vfunc_leading_zero32__4496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4496__count)));
                            vlSelf->__Vfunc_leading_zero32__4496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4496__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4502__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4502__part 
                            = vlSelf->__Vfunc_leading_zero32__4502__value;
                        vlSelf->__Vfunc_leading_zero32__4502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4502__count)));
                            vlSelf->__Vfunc_leading_zero32__4502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4502__count)));
                            vlSelf->__Vfunc_leading_zero32__4502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4502__count)));
                            vlSelf->__Vfunc_leading_zero32__4502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4502__count)));
                            vlSelf->__Vfunc_leading_zero32__4502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4502__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4508__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4508__part 
                            = vlSelf->__Vfunc_leading_zero32__4508__value;
                        vlSelf->__Vfunc_leading_zero32__4508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4508__count)));
                            vlSelf->__Vfunc_leading_zero32__4508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4508__count)));
                            vlSelf->__Vfunc_leading_zero32__4508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4508__count)));
                            vlSelf->__Vfunc_leading_zero32__4508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4508__count)));
                            vlSelf->__Vfunc_leading_zero32__4508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4508__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4514__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4514__part 
                            = vlSelf->__Vfunc_leading_zero32__4514__value;
                        vlSelf->__Vfunc_leading_zero32__4514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4514__count)));
                            vlSelf->__Vfunc_leading_zero32__4514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4514__count)));
                            vlSelf->__Vfunc_leading_zero32__4514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4514__count)));
                            vlSelf->__Vfunc_leading_zero32__4514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4514__count)));
                            vlSelf->__Vfunc_leading_zero32__4514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4514__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4520__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4520__part 
                            = vlSelf->__Vfunc_leading_zero32__4520__value;
                        vlSelf->__Vfunc_leading_zero32__4520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4520__count)));
                            vlSelf->__Vfunc_leading_zero32__4520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4520__count)));
                            vlSelf->__Vfunc_leading_zero32__4520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4520__count)));
                            vlSelf->__Vfunc_leading_zero32__4520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4520__count)));
                            vlSelf->__Vfunc_leading_zero32__4520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4520__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4526__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4526__part 
                            = vlSelf->__Vfunc_leading_zero32__4526__value;
                        vlSelf->__Vfunc_leading_zero32__4526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4526__count)));
                            vlSelf->__Vfunc_leading_zero32__4526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4526__count)));
                            vlSelf->__Vfunc_leading_zero32__4526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4526__count)));
                            vlSelf->__Vfunc_leading_zero32__4526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4526__count)));
                            vlSelf->__Vfunc_leading_zero32__4526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4526__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4532__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4532__part 
                            = vlSelf->__Vfunc_leading_zero32__4532__value;
                        vlSelf->__Vfunc_leading_zero32__4532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4532__count)));
                            vlSelf->__Vfunc_leading_zero32__4532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4532__count)));
                            vlSelf->__Vfunc_leading_zero32__4532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4532__count)));
                            vlSelf->__Vfunc_leading_zero32__4532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4532__count)));
                            vlSelf->__Vfunc_leading_zero32__4532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4532__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4538__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4538__part 
                            = vlSelf->__Vfunc_leading_zero32__4538__value;
                        vlSelf->__Vfunc_leading_zero32__4538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4538__count)));
                            vlSelf->__Vfunc_leading_zero32__4538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4538__count)));
                            vlSelf->__Vfunc_leading_zero32__4538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4538__count)));
                            vlSelf->__Vfunc_leading_zero32__4538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4538__count)));
                            vlSelf->__Vfunc_leading_zero32__4538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4538__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4544__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4544__part 
                            = vlSelf->__Vfunc_leading_zero32__4544__value;
                        vlSelf->__Vfunc_leading_zero32__4544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4544__count)));
                            vlSelf->__Vfunc_leading_zero32__4544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4544__count)));
                            vlSelf->__Vfunc_leading_zero32__4544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4544__count)));
                            vlSelf->__Vfunc_leading_zero32__4544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4544__count)));
                            vlSelf->__Vfunc_leading_zero32__4544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4544__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4550__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4550__part 
                            = vlSelf->__Vfunc_leading_zero32__4550__value;
                        vlSelf->__Vfunc_leading_zero32__4550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4550__count)));
                            vlSelf->__Vfunc_leading_zero32__4550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4550__count)));
                            vlSelf->__Vfunc_leading_zero32__4550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4550__count)));
                            vlSelf->__Vfunc_leading_zero32__4550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4550__count)));
                            vlSelf->__Vfunc_leading_zero32__4550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4550__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4556__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4556__part 
                            = vlSelf->__Vfunc_leading_zero32__4556__value;
                        vlSelf->__Vfunc_leading_zero32__4556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4556__count)));
                            vlSelf->__Vfunc_leading_zero32__4556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4556__count)));
                            vlSelf->__Vfunc_leading_zero32__4556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4556__count)));
                            vlSelf->__Vfunc_leading_zero32__4556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4556__count)));
                            vlSelf->__Vfunc_leading_zero32__4556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4556__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4562__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4562__part 
                            = vlSelf->__Vfunc_leading_zero32__4562__value;
                        vlSelf->__Vfunc_leading_zero32__4562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4562__count)));
                            vlSelf->__Vfunc_leading_zero32__4562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4562__count)));
                            vlSelf->__Vfunc_leading_zero32__4562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4562__count)));
                            vlSelf->__Vfunc_leading_zero32__4562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4562__count)));
                            vlSelf->__Vfunc_leading_zero32__4562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4562__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4568__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4568__part 
                            = vlSelf->__Vfunc_leading_zero32__4568__value;
                        vlSelf->__Vfunc_leading_zero32__4568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4568__count)));
                            vlSelf->__Vfunc_leading_zero32__4568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4568__count)));
                            vlSelf->__Vfunc_leading_zero32__4568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4568__count)));
                            vlSelf->__Vfunc_leading_zero32__4568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4568__count)));
                            vlSelf->__Vfunc_leading_zero32__4568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4568__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4574__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4574__part 
                            = vlSelf->__Vfunc_leading_zero32__4574__value;
                        vlSelf->__Vfunc_leading_zero32__4574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4574__count)));
                            vlSelf->__Vfunc_leading_zero32__4574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4574__count)));
                            vlSelf->__Vfunc_leading_zero32__4574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4574__count)));
                            vlSelf->__Vfunc_leading_zero32__4574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4574__count)));
                            vlSelf->__Vfunc_leading_zero32__4574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4574__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4580__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4580__part 
                            = vlSelf->__Vfunc_leading_zero32__4580__value;
                        vlSelf->__Vfunc_leading_zero32__4580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4580__count)));
                            vlSelf->__Vfunc_leading_zero32__4580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4580__count)));
                            vlSelf->__Vfunc_leading_zero32__4580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4580__count)));
                            vlSelf->__Vfunc_leading_zero32__4580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4580__count)));
                            vlSelf->__Vfunc_leading_zero32__4580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4580__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4586__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4586__part 
                            = vlSelf->__Vfunc_leading_zero32__4586__value;
                        vlSelf->__Vfunc_leading_zero32__4586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4586__count)));
                            vlSelf->__Vfunc_leading_zero32__4586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4586__count)));
                            vlSelf->__Vfunc_leading_zero32__4586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4586__count)));
                            vlSelf->__Vfunc_leading_zero32__4586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4586__count)));
                            vlSelf->__Vfunc_leading_zero32__4586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4586__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4592__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4592__part 
                            = vlSelf->__Vfunc_leading_zero32__4592__value;
                        vlSelf->__Vfunc_leading_zero32__4592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4592__count)));
                            vlSelf->__Vfunc_leading_zero32__4592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4592__count)));
                            vlSelf->__Vfunc_leading_zero32__4592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4592__count)));
                            vlSelf->__Vfunc_leading_zero32__4592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4592__count)));
                            vlSelf->__Vfunc_leading_zero32__4592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4592__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4598__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4598__part 
                            = vlSelf->__Vfunc_leading_zero32__4598__value;
                        vlSelf->__Vfunc_leading_zero32__4598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4598__count)));
                            vlSelf->__Vfunc_leading_zero32__4598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4598__count)));
                            vlSelf->__Vfunc_leading_zero32__4598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4598__count)));
                            vlSelf->__Vfunc_leading_zero32__4598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4598__count)));
                            vlSelf->__Vfunc_leading_zero32__4598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4598__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4604__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4604__part 
                            = vlSelf->__Vfunc_leading_zero32__4604__value;
                        vlSelf->__Vfunc_leading_zero32__4604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4604__count)));
                            vlSelf->__Vfunc_leading_zero32__4604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4604__count)));
                            vlSelf->__Vfunc_leading_zero32__4604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4604__count)));
                            vlSelf->__Vfunc_leading_zero32__4604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4604__count)));
                            vlSelf->__Vfunc_leading_zero32__4604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4604__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4610__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4610__part 
                            = vlSelf->__Vfunc_leading_zero32__4610__value;
                        vlSelf->__Vfunc_leading_zero32__4610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4610__count)));
                            vlSelf->__Vfunc_leading_zero32__4610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4610__count)));
                            vlSelf->__Vfunc_leading_zero32__4610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4610__count)));
                            vlSelf->__Vfunc_leading_zero32__4610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4610__count)));
                            vlSelf->__Vfunc_leading_zero32__4610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4610__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4616__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4616__part 
                            = vlSelf->__Vfunc_leading_zero32__4616__value;
                        vlSelf->__Vfunc_leading_zero32__4616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4616__count)));
                            vlSelf->__Vfunc_leading_zero32__4616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4616__count)));
                            vlSelf->__Vfunc_leading_zero32__4616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4616__count)));
                            vlSelf->__Vfunc_leading_zero32__4616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4616__count)));
                            vlSelf->__Vfunc_leading_zero32__4616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4616__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4622__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4622__part 
                            = vlSelf->__Vfunc_leading_zero32__4622__value;
                        vlSelf->__Vfunc_leading_zero32__4622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4622__count)));
                            vlSelf->__Vfunc_leading_zero32__4622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4622__count)));
                            vlSelf->__Vfunc_leading_zero32__4622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4622__count)));
                            vlSelf->__Vfunc_leading_zero32__4622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4622__count)));
                            vlSelf->__Vfunc_leading_zero32__4622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4622__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4628__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4628__part 
                            = vlSelf->__Vfunc_leading_zero32__4628__value;
                        vlSelf->__Vfunc_leading_zero32__4628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4628__count)));
                            vlSelf->__Vfunc_leading_zero32__4628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4628__count)));
                            vlSelf->__Vfunc_leading_zero32__4628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4628__count)));
                            vlSelf->__Vfunc_leading_zero32__4628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4628__count)));
                            vlSelf->__Vfunc_leading_zero32__4628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4628__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4634__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4634__part 
                            = vlSelf->__Vfunc_leading_zero32__4634__value;
                        vlSelf->__Vfunc_leading_zero32__4634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4634__count)));
                            vlSelf->__Vfunc_leading_zero32__4634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4634__count)));
                            vlSelf->__Vfunc_leading_zero32__4634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4634__count)));
                            vlSelf->__Vfunc_leading_zero32__4634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4634__count)));
                            vlSelf->__Vfunc_leading_zero32__4634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4634__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4640__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4640__part 
                            = vlSelf->__Vfunc_leading_zero32__4640__value;
                        vlSelf->__Vfunc_leading_zero32__4640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4640__count)));
                            vlSelf->__Vfunc_leading_zero32__4640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4640__count)));
                            vlSelf->__Vfunc_leading_zero32__4640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4640__count)));
                            vlSelf->__Vfunc_leading_zero32__4640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4640__count)));
                            vlSelf->__Vfunc_leading_zero32__4640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4640__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4646__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4646__part 
                            = vlSelf->__Vfunc_leading_zero32__4646__value;
                        vlSelf->__Vfunc_leading_zero32__4646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4646__count)));
                            vlSelf->__Vfunc_leading_zero32__4646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4646__count)));
                            vlSelf->__Vfunc_leading_zero32__4646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4646__count)));
                            vlSelf->__Vfunc_leading_zero32__4646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4646__count)));
                            vlSelf->__Vfunc_leading_zero32__4646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4646__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4652__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4652__part 
                            = vlSelf->__Vfunc_leading_zero32__4652__value;
                        vlSelf->__Vfunc_leading_zero32__4652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4652__count)));
                            vlSelf->__Vfunc_leading_zero32__4652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4652__count)));
                            vlSelf->__Vfunc_leading_zero32__4652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4652__count)));
                            vlSelf->__Vfunc_leading_zero32__4652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4652__count)));
                            vlSelf->__Vfunc_leading_zero32__4652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4652__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4658__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4658__part 
                            = vlSelf->__Vfunc_leading_zero32__4658__value;
                        vlSelf->__Vfunc_leading_zero32__4658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4658__count)));
                            vlSelf->__Vfunc_leading_zero32__4658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4658__count)));
                            vlSelf->__Vfunc_leading_zero32__4658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4658__count)));
                            vlSelf->__Vfunc_leading_zero32__4658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4658__count)));
                            vlSelf->__Vfunc_leading_zero32__4658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4658__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4664__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4664__part 
                            = vlSelf->__Vfunc_leading_zero32__4664__value;
                        vlSelf->__Vfunc_leading_zero32__4664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4664__count)));
                            vlSelf->__Vfunc_leading_zero32__4664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4664__count)));
                            vlSelf->__Vfunc_leading_zero32__4664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4664__count)));
                            vlSelf->__Vfunc_leading_zero32__4664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4664__count)));
                            vlSelf->__Vfunc_leading_zero32__4664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4664__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4670__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4670__part 
                            = vlSelf->__Vfunc_leading_zero32__4670__value;
                        vlSelf->__Vfunc_leading_zero32__4670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4670__count)));
                            vlSelf->__Vfunc_leading_zero32__4670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4670__count)));
                            vlSelf->__Vfunc_leading_zero32__4670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4670__count)));
                            vlSelf->__Vfunc_leading_zero32__4670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4670__count)));
                            vlSelf->__Vfunc_leading_zero32__4670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4670__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4676__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4676__part 
                            = vlSelf->__Vfunc_leading_zero32__4676__value;
                        vlSelf->__Vfunc_leading_zero32__4676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4676__count)));
                            vlSelf->__Vfunc_leading_zero32__4676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4676__count)));
                            vlSelf->__Vfunc_leading_zero32__4676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4676__count)));
                            vlSelf->__Vfunc_leading_zero32__4676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4676__count)));
                            vlSelf->__Vfunc_leading_zero32__4676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4676__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4682__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4682__part 
                            = vlSelf->__Vfunc_leading_zero32__4682__value;
                        vlSelf->__Vfunc_leading_zero32__4682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4682__count)));
                            vlSelf->__Vfunc_leading_zero32__4682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4682__count)));
                            vlSelf->__Vfunc_leading_zero32__4682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4682__count)));
                            vlSelf->__Vfunc_leading_zero32__4682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4682__count)));
                            vlSelf->__Vfunc_leading_zero32__4682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4682__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4688__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4688__part 
                            = vlSelf->__Vfunc_leading_zero32__4688__value;
                        vlSelf->__Vfunc_leading_zero32__4688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4688__count)));
                            vlSelf->__Vfunc_leading_zero32__4688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4688__count)));
                            vlSelf->__Vfunc_leading_zero32__4688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4688__count)));
                            vlSelf->__Vfunc_leading_zero32__4688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4688__count)));
                            vlSelf->__Vfunc_leading_zero32__4688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4688__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4694__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4694__part 
                            = vlSelf->__Vfunc_leading_zero32__4694__value;
                        vlSelf->__Vfunc_leading_zero32__4694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4694__count)));
                            vlSelf->__Vfunc_leading_zero32__4694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4694__count)));
                            vlSelf->__Vfunc_leading_zero32__4694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4694__count)));
                            vlSelf->__Vfunc_leading_zero32__4694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4694__count)));
                            vlSelf->__Vfunc_leading_zero32__4694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4694__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4700__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4700__part 
                            = vlSelf->__Vfunc_leading_zero32__4700__value;
                        vlSelf->__Vfunc_leading_zero32__4700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4700__count)));
                            vlSelf->__Vfunc_leading_zero32__4700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4700__count)));
                            vlSelf->__Vfunc_leading_zero32__4700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4700__count)));
                            vlSelf->__Vfunc_leading_zero32__4700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4700__count)));
                            vlSelf->__Vfunc_leading_zero32__4700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4700__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4706__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4706__part 
                            = vlSelf->__Vfunc_leading_zero32__4706__value;
                        vlSelf->__Vfunc_leading_zero32__4706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4706__count)));
                            vlSelf->__Vfunc_leading_zero32__4706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4706__count)));
                            vlSelf->__Vfunc_leading_zero32__4706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4706__count)));
                            vlSelf->__Vfunc_leading_zero32__4706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4706__count)));
                            vlSelf->__Vfunc_leading_zero32__4706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4706__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4712__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4712__part 
                            = vlSelf->__Vfunc_leading_zero32__4712__value;
                        vlSelf->__Vfunc_leading_zero32__4712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4712__count)));
                            vlSelf->__Vfunc_leading_zero32__4712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4712__count)));
                            vlSelf->__Vfunc_leading_zero32__4712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4712__count)));
                            vlSelf->__Vfunc_leading_zero32__4712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4712__count)));
                            vlSelf->__Vfunc_leading_zero32__4712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4712__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4718__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4718__part 
                            = vlSelf->__Vfunc_leading_zero32__4718__value;
                        vlSelf->__Vfunc_leading_zero32__4718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4718__count)));
                            vlSelf->__Vfunc_leading_zero32__4718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4718__count)));
                            vlSelf->__Vfunc_leading_zero32__4718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4718__count)));
                            vlSelf->__Vfunc_leading_zero32__4718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4718__count)));
                            vlSelf->__Vfunc_leading_zero32__4718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4718__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4724__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4724__part 
                            = vlSelf->__Vfunc_leading_zero32__4724__value;
                        vlSelf->__Vfunc_leading_zero32__4724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4724__count)));
                            vlSelf->__Vfunc_leading_zero32__4724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4724__count)));
                            vlSelf->__Vfunc_leading_zero32__4724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4724__count)));
                            vlSelf->__Vfunc_leading_zero32__4724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4724__count)));
                            vlSelf->__Vfunc_leading_zero32__4724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4724__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4730__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4730__part 
                            = vlSelf->__Vfunc_leading_zero32__4730__value;
                        vlSelf->__Vfunc_leading_zero32__4730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4730__count)));
                            vlSelf->__Vfunc_leading_zero32__4730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4730__count)));
                            vlSelf->__Vfunc_leading_zero32__4730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4730__count)));
                            vlSelf->__Vfunc_leading_zero32__4730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4730__count)));
                            vlSelf->__Vfunc_leading_zero32__4730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4730__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4736__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4736__part 
                            = vlSelf->__Vfunc_leading_zero32__4736__value;
                        vlSelf->__Vfunc_leading_zero32__4736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4736__count)));
                            vlSelf->__Vfunc_leading_zero32__4736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4736__count)));
                            vlSelf->__Vfunc_leading_zero32__4736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4736__count)));
                            vlSelf->__Vfunc_leading_zero32__4736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4736__count)));
                            vlSelf->__Vfunc_leading_zero32__4736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4736__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4742__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4742__part 
                            = vlSelf->__Vfunc_leading_zero32__4742__value;
                        vlSelf->__Vfunc_leading_zero32__4742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4742__count)));
                            vlSelf->__Vfunc_leading_zero32__4742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4742__count)));
                            vlSelf->__Vfunc_leading_zero32__4742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4742__count)));
                            vlSelf->__Vfunc_leading_zero32__4742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4742__count)));
                            vlSelf->__Vfunc_leading_zero32__4742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4742__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4748__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4748__part 
                            = vlSelf->__Vfunc_leading_zero32__4748__value;
                        vlSelf->__Vfunc_leading_zero32__4748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4748__count)));
                            vlSelf->__Vfunc_leading_zero32__4748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4748__count)));
                            vlSelf->__Vfunc_leading_zero32__4748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4748__count)));
                            vlSelf->__Vfunc_leading_zero32__4748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4748__count)));
                            vlSelf->__Vfunc_leading_zero32__4748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4748__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4754__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4754__part 
                            = vlSelf->__Vfunc_leading_zero32__4754__value;
                        vlSelf->__Vfunc_leading_zero32__4754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4754__count)));
                            vlSelf->__Vfunc_leading_zero32__4754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4754__count)));
                            vlSelf->__Vfunc_leading_zero32__4754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4754__count)));
                            vlSelf->__Vfunc_leading_zero32__4754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4754__count)));
                            vlSelf->__Vfunc_leading_zero32__4754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4754__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4760__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4760__part 
                            = vlSelf->__Vfunc_leading_zero32__4760__value;
                        vlSelf->__Vfunc_leading_zero32__4760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4760__count)));
                            vlSelf->__Vfunc_leading_zero32__4760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4760__count)));
                            vlSelf->__Vfunc_leading_zero32__4760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4760__count)));
                            vlSelf->__Vfunc_leading_zero32__4760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4760__count)));
                            vlSelf->__Vfunc_leading_zero32__4760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4760__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4766__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4766__part 
                            = vlSelf->__Vfunc_leading_zero32__4766__value;
                        vlSelf->__Vfunc_leading_zero32__4766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4766__count)));
                            vlSelf->__Vfunc_leading_zero32__4766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4766__count)));
                            vlSelf->__Vfunc_leading_zero32__4766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4766__count)));
                            vlSelf->__Vfunc_leading_zero32__4766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4766__count)));
                            vlSelf->__Vfunc_leading_zero32__4766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4766__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4772__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4772__part 
                            = vlSelf->__Vfunc_leading_zero32__4772__value;
                        vlSelf->__Vfunc_leading_zero32__4772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4772__count)));
                            vlSelf->__Vfunc_leading_zero32__4772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4772__count)));
                            vlSelf->__Vfunc_leading_zero32__4772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4772__count)));
                            vlSelf->__Vfunc_leading_zero32__4772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4772__count)));
                            vlSelf->__Vfunc_leading_zero32__4772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4772__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4778__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4778__part 
                            = vlSelf->__Vfunc_leading_zero32__4778__value;
                        vlSelf->__Vfunc_leading_zero32__4778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4778__count)));
                            vlSelf->__Vfunc_leading_zero32__4778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4778__count)));
                            vlSelf->__Vfunc_leading_zero32__4778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4778__count)));
                            vlSelf->__Vfunc_leading_zero32__4778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4778__count)));
                            vlSelf->__Vfunc_leading_zero32__4778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4778__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4784__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4784__part 
                            = vlSelf->__Vfunc_leading_zero32__4784__value;
                        vlSelf->__Vfunc_leading_zero32__4784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4784__count)));
                            vlSelf->__Vfunc_leading_zero32__4784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4784__count)));
                            vlSelf->__Vfunc_leading_zero32__4784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4784__count)));
                            vlSelf->__Vfunc_leading_zero32__4784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4784__count)));
                            vlSelf->__Vfunc_leading_zero32__4784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4784__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4790__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4790__part 
                            = vlSelf->__Vfunc_leading_zero32__4790__value;
                        vlSelf->__Vfunc_leading_zero32__4790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4790__count)));
                            vlSelf->__Vfunc_leading_zero32__4790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4790__count)));
                            vlSelf->__Vfunc_leading_zero32__4790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4790__count)));
                            vlSelf->__Vfunc_leading_zero32__4790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4790__count)));
                            vlSelf->__Vfunc_leading_zero32__4790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4790__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4796__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4796__part 
                            = vlSelf->__Vfunc_leading_zero32__4796__value;
                        vlSelf->__Vfunc_leading_zero32__4796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4796__count)));
                            vlSelf->__Vfunc_leading_zero32__4796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4796__count)));
                            vlSelf->__Vfunc_leading_zero32__4796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4796__count)));
                            vlSelf->__Vfunc_leading_zero32__4796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4796__count)));
                            vlSelf->__Vfunc_leading_zero32__4796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4796__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4802__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4802__part 
                            = vlSelf->__Vfunc_leading_zero32__4802__value;
                        vlSelf->__Vfunc_leading_zero32__4802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4802__count)));
                            vlSelf->__Vfunc_leading_zero32__4802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4802__count)));
                            vlSelf->__Vfunc_leading_zero32__4802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4802__count)));
                            vlSelf->__Vfunc_leading_zero32__4802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4802__count)));
                            vlSelf->__Vfunc_leading_zero32__4802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4802__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4808__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4808__part 
                            = vlSelf->__Vfunc_leading_zero32__4808__value;
                        vlSelf->__Vfunc_leading_zero32__4808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4808__count)));
                            vlSelf->__Vfunc_leading_zero32__4808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4808__count)));
                            vlSelf->__Vfunc_leading_zero32__4808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4808__count)));
                            vlSelf->__Vfunc_leading_zero32__4808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4808__count)));
                            vlSelf->__Vfunc_leading_zero32__4808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4808__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4814__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4814__part 
                            = vlSelf->__Vfunc_leading_zero32__4814__value;
                        vlSelf->__Vfunc_leading_zero32__4814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4814__count)));
                            vlSelf->__Vfunc_leading_zero32__4814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4814__count)));
                            vlSelf->__Vfunc_leading_zero32__4814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4814__count)));
                            vlSelf->__Vfunc_leading_zero32__4814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4814__count)));
                            vlSelf->__Vfunc_leading_zero32__4814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4814__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4820__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4820__part 
                            = vlSelf->__Vfunc_leading_zero32__4820__value;
                        vlSelf->__Vfunc_leading_zero32__4820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4820__count)));
                            vlSelf->__Vfunc_leading_zero32__4820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4820__count)));
                            vlSelf->__Vfunc_leading_zero32__4820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4820__count)));
                            vlSelf->__Vfunc_leading_zero32__4820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4820__count)));
                            vlSelf->__Vfunc_leading_zero32__4820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4820__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4826__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4826__part 
                            = vlSelf->__Vfunc_leading_zero32__4826__value;
                        vlSelf->__Vfunc_leading_zero32__4826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4826__count)));
                            vlSelf->__Vfunc_leading_zero32__4826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4826__count)));
                            vlSelf->__Vfunc_leading_zero32__4826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4826__count)));
                            vlSelf->__Vfunc_leading_zero32__4826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4826__count)));
                            vlSelf->__Vfunc_leading_zero32__4826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4826__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4832__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4832__part 
                            = vlSelf->__Vfunc_leading_zero32__4832__value;
                        vlSelf->__Vfunc_leading_zero32__4832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4832__count)));
                            vlSelf->__Vfunc_leading_zero32__4832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4832__count)));
                            vlSelf->__Vfunc_leading_zero32__4832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4832__count)));
                            vlSelf->__Vfunc_leading_zero32__4832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4832__count)));
                            vlSelf->__Vfunc_leading_zero32__4832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4832__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4838__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4838__part 
                            = vlSelf->__Vfunc_leading_zero32__4838__value;
                        vlSelf->__Vfunc_leading_zero32__4838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4838__count)));
                            vlSelf->__Vfunc_leading_zero32__4838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4838__count)));
                            vlSelf->__Vfunc_leading_zero32__4838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4838__count)));
                            vlSelf->__Vfunc_leading_zero32__4838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4838__count)));
                            vlSelf->__Vfunc_leading_zero32__4838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4838__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4844__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4844__part 
                            = vlSelf->__Vfunc_leading_zero32__4844__value;
                        vlSelf->__Vfunc_leading_zero32__4844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4844__count)));
                            vlSelf->__Vfunc_leading_zero32__4844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4844__count)));
                            vlSelf->__Vfunc_leading_zero32__4844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4844__count)));
                            vlSelf->__Vfunc_leading_zero32__4844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4844__count)));
                            vlSelf->__Vfunc_leading_zero32__4844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4844__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4850__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4850__part 
                            = vlSelf->__Vfunc_leading_zero32__4850__value;
                        vlSelf->__Vfunc_leading_zero32__4850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4850__count)));
                            vlSelf->__Vfunc_leading_zero32__4850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4850__count)));
                            vlSelf->__Vfunc_leading_zero32__4850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4850__count)));
                            vlSelf->__Vfunc_leading_zero32__4850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4850__count)));
                            vlSelf->__Vfunc_leading_zero32__4850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4850__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4856__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4856__part 
                            = vlSelf->__Vfunc_leading_zero32__4856__value;
                        vlSelf->__Vfunc_leading_zero32__4856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4856__count)));
                            vlSelf->__Vfunc_leading_zero32__4856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4856__count)));
                            vlSelf->__Vfunc_leading_zero32__4856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4856__count)));
                            vlSelf->__Vfunc_leading_zero32__4856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4856__count)));
                            vlSelf->__Vfunc_leading_zero32__4856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4856__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4862__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4862__part 
                            = vlSelf->__Vfunc_leading_zero32__4862__value;
                        vlSelf->__Vfunc_leading_zero32__4862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4862__count)));
                            vlSelf->__Vfunc_leading_zero32__4862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4862__count)));
                            vlSelf->__Vfunc_leading_zero32__4862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4862__count)));
                            vlSelf->__Vfunc_leading_zero32__4862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4862__count)));
                            vlSelf->__Vfunc_leading_zero32__4862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4862__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4868__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4868__part 
                            = vlSelf->__Vfunc_leading_zero32__4868__value;
                        vlSelf->__Vfunc_leading_zero32__4868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4868__count)));
                            vlSelf->__Vfunc_leading_zero32__4868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4868__count)));
                            vlSelf->__Vfunc_leading_zero32__4868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4868__count)));
                            vlSelf->__Vfunc_leading_zero32__4868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4868__count)));
                            vlSelf->__Vfunc_leading_zero32__4868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4868__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4874__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4874__part 
                            = vlSelf->__Vfunc_leading_zero32__4874__value;
                        vlSelf->__Vfunc_leading_zero32__4874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4874__count)));
                            vlSelf->__Vfunc_leading_zero32__4874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4874__count)));
                            vlSelf->__Vfunc_leading_zero32__4874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4874__count)));
                            vlSelf->__Vfunc_leading_zero32__4874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4874__count)));
                            vlSelf->__Vfunc_leading_zero32__4874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4874__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4880__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4880__part 
                            = vlSelf->__Vfunc_leading_zero32__4880__value;
                        vlSelf->__Vfunc_leading_zero32__4880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4880__count)));
                            vlSelf->__Vfunc_leading_zero32__4880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4880__count)));
                            vlSelf->__Vfunc_leading_zero32__4880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4880__count)));
                            vlSelf->__Vfunc_leading_zero32__4880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4880__count)));
                            vlSelf->__Vfunc_leading_zero32__4880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4880__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4886__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4886__part 
                            = vlSelf->__Vfunc_leading_zero32__4886__value;
                        vlSelf->__Vfunc_leading_zero32__4886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4886__count)));
                            vlSelf->__Vfunc_leading_zero32__4886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4886__count)));
                            vlSelf->__Vfunc_leading_zero32__4886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4886__count)));
                            vlSelf->__Vfunc_leading_zero32__4886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4886__count)));
                            vlSelf->__Vfunc_leading_zero32__4886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4886__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4892__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4892__part 
                            = vlSelf->__Vfunc_leading_zero32__4892__value;
                        vlSelf->__Vfunc_leading_zero32__4892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4892__count)));
                            vlSelf->__Vfunc_leading_zero32__4892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4892__count)));
                            vlSelf->__Vfunc_leading_zero32__4892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4892__count)));
                            vlSelf->__Vfunc_leading_zero32__4892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4892__count)));
                            vlSelf->__Vfunc_leading_zero32__4892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4892__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4898__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4898__part 
                            = vlSelf->__Vfunc_leading_zero32__4898__value;
                        vlSelf->__Vfunc_leading_zero32__4898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4898__count)));
                            vlSelf->__Vfunc_leading_zero32__4898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4898__count)));
                            vlSelf->__Vfunc_leading_zero32__4898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4898__count)));
                            vlSelf->__Vfunc_leading_zero32__4898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4898__count)));
                            vlSelf->__Vfunc_leading_zero32__4898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4898__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4904__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4904__part 
                            = vlSelf->__Vfunc_leading_zero32__4904__value;
                        vlSelf->__Vfunc_leading_zero32__4904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4904__count)));
                            vlSelf->__Vfunc_leading_zero32__4904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4904__count)));
                            vlSelf->__Vfunc_leading_zero32__4904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4904__count)));
                            vlSelf->__Vfunc_leading_zero32__4904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4904__count)));
                            vlSelf->__Vfunc_leading_zero32__4904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4904__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4910__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4910__part 
                            = vlSelf->__Vfunc_leading_zero32__4910__value;
                        vlSelf->__Vfunc_leading_zero32__4910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4910__count)));
                            vlSelf->__Vfunc_leading_zero32__4910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4910__count)));
                            vlSelf->__Vfunc_leading_zero32__4910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4910__count)));
                            vlSelf->__Vfunc_leading_zero32__4910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4910__count)));
                            vlSelf->__Vfunc_leading_zero32__4910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4910__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4916__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4916__part 
                            = vlSelf->__Vfunc_leading_zero32__4916__value;
                        vlSelf->__Vfunc_leading_zero32__4916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4916__count)));
                            vlSelf->__Vfunc_leading_zero32__4916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4916__count)));
                            vlSelf->__Vfunc_leading_zero32__4916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4916__count)));
                            vlSelf->__Vfunc_leading_zero32__4916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4916__count)));
                            vlSelf->__Vfunc_leading_zero32__4916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4916__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4922__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4922__part 
                            = vlSelf->__Vfunc_leading_zero32__4922__value;
                        vlSelf->__Vfunc_leading_zero32__4922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4922__count)));
                            vlSelf->__Vfunc_leading_zero32__4922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4922__count)));
                            vlSelf->__Vfunc_leading_zero32__4922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4922__count)));
                            vlSelf->__Vfunc_leading_zero32__4922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4922__count)));
                            vlSelf->__Vfunc_leading_zero32__4922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4922__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4928__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4928__part 
                            = vlSelf->__Vfunc_leading_zero32__4928__value;
                        vlSelf->__Vfunc_leading_zero32__4928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4928__count)));
                            vlSelf->__Vfunc_leading_zero32__4928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4928__count)));
                            vlSelf->__Vfunc_leading_zero32__4928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4928__count)));
                            vlSelf->__Vfunc_leading_zero32__4928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4928__count)));
                            vlSelf->__Vfunc_leading_zero32__4928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4928__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4934__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4934__part 
                            = vlSelf->__Vfunc_leading_zero32__4934__value;
                        vlSelf->__Vfunc_leading_zero32__4934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4934__count)));
                            vlSelf->__Vfunc_leading_zero32__4934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4934__count)));
                            vlSelf->__Vfunc_leading_zero32__4934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4934__count)));
                            vlSelf->__Vfunc_leading_zero32__4934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4934__count)));
                            vlSelf->__Vfunc_leading_zero32__4934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4934__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4940__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4940__part 
                            = vlSelf->__Vfunc_leading_zero32__4940__value;
                        vlSelf->__Vfunc_leading_zero32__4940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4940__count)));
                            vlSelf->__Vfunc_leading_zero32__4940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4940__count)));
                            vlSelf->__Vfunc_leading_zero32__4940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4940__count)));
                            vlSelf->__Vfunc_leading_zero32__4940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4940__count)));
                            vlSelf->__Vfunc_leading_zero32__4940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4940__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4946__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4946__part 
                            = vlSelf->__Vfunc_leading_zero32__4946__value;
                        vlSelf->__Vfunc_leading_zero32__4946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4946__count)));
                            vlSelf->__Vfunc_leading_zero32__4946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4946__count)));
                            vlSelf->__Vfunc_leading_zero32__4946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4946__count)));
                            vlSelf->__Vfunc_leading_zero32__4946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4946__count)));
                            vlSelf->__Vfunc_leading_zero32__4946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4946__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4952__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4952__part 
                            = vlSelf->__Vfunc_leading_zero32__4952__value;
                        vlSelf->__Vfunc_leading_zero32__4952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4952__count)));
                            vlSelf->__Vfunc_leading_zero32__4952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4952__count)));
                            vlSelf->__Vfunc_leading_zero32__4952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4952__count)));
                            vlSelf->__Vfunc_leading_zero32__4952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4952__count)));
                            vlSelf->__Vfunc_leading_zero32__4952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4952__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4958__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4958__part 
                            = vlSelf->__Vfunc_leading_zero32__4958__value;
                        vlSelf->__Vfunc_leading_zero32__4958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4958__count)));
                            vlSelf->__Vfunc_leading_zero32__4958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4958__count)));
                            vlSelf->__Vfunc_leading_zero32__4958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4958__count)));
                            vlSelf->__Vfunc_leading_zero32__4958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4958__count)));
                            vlSelf->__Vfunc_leading_zero32__4958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4958__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4964__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4964__part 
                            = vlSelf->__Vfunc_leading_zero32__4964__value;
                        vlSelf->__Vfunc_leading_zero32__4964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4964__count)));
                            vlSelf->__Vfunc_leading_zero32__4964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4964__count)));
                            vlSelf->__Vfunc_leading_zero32__4964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4964__count)));
                            vlSelf->__Vfunc_leading_zero32__4964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4964__count)));
                            vlSelf->__Vfunc_leading_zero32__4964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4964__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4970__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4970__part 
                            = vlSelf->__Vfunc_leading_zero32__4970__value;
                        vlSelf->__Vfunc_leading_zero32__4970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4970__count)));
                            vlSelf->__Vfunc_leading_zero32__4970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4970__count)));
                            vlSelf->__Vfunc_leading_zero32__4970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4970__count)));
                            vlSelf->__Vfunc_leading_zero32__4970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4970__count)));
                            vlSelf->__Vfunc_leading_zero32__4970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4970__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4976__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4976__part 
                            = vlSelf->__Vfunc_leading_zero32__4976__value;
                        vlSelf->__Vfunc_leading_zero32__4976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4976__count)));
                            vlSelf->__Vfunc_leading_zero32__4976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4976__count)));
                            vlSelf->__Vfunc_leading_zero32__4976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4976__count)));
                            vlSelf->__Vfunc_leading_zero32__4976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4976__count)));
                            vlSelf->__Vfunc_leading_zero32__4976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4976__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4982__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4982__part 
                            = vlSelf->__Vfunc_leading_zero32__4982__value;
                        vlSelf->__Vfunc_leading_zero32__4982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4982__count)));
                            vlSelf->__Vfunc_leading_zero32__4982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4982__count)));
                            vlSelf->__Vfunc_leading_zero32__4982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4982__count)));
                            vlSelf->__Vfunc_leading_zero32__4982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4982__count)));
                            vlSelf->__Vfunc_leading_zero32__4982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4982__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4988__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4988__part 
                            = vlSelf->__Vfunc_leading_zero32__4988__value;
                        vlSelf->__Vfunc_leading_zero32__4988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4988__count)));
                            vlSelf->__Vfunc_leading_zero32__4988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4988__count)));
                            vlSelf->__Vfunc_leading_zero32__4988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4988__count)));
                            vlSelf->__Vfunc_leading_zero32__4988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4988__count)));
                            vlSelf->__Vfunc_leading_zero32__4988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4988__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4994__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4994__part 
                            = vlSelf->__Vfunc_leading_zero32__4994__value;
                        vlSelf->__Vfunc_leading_zero32__4994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4994__count)));
                            vlSelf->__Vfunc_leading_zero32__4994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4994__count)));
                            vlSelf->__Vfunc_leading_zero32__4994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4994__count)));
                            vlSelf->__Vfunc_leading_zero32__4994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4994__count)));
                            vlSelf->__Vfunc_leading_zero32__4994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4994__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5000__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5000__part 
                            = vlSelf->__Vfunc_leading_zero32__5000__value;
                        vlSelf->__Vfunc_leading_zero32__5000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5000__count)));
                            vlSelf->__Vfunc_leading_zero32__5000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5000__count)));
                            vlSelf->__Vfunc_leading_zero32__5000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5000__count)));
                            vlSelf->__Vfunc_leading_zero32__5000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5000__count)));
                            vlSelf->__Vfunc_leading_zero32__5000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5000__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5006__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5006__part 
                            = vlSelf->__Vfunc_leading_zero32__5006__value;
                        vlSelf->__Vfunc_leading_zero32__5006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5006__count)));
                            vlSelf->__Vfunc_leading_zero32__5006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5006__count)));
                            vlSelf->__Vfunc_leading_zero32__5006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5006__count)));
                            vlSelf->__Vfunc_leading_zero32__5006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5006__count)));
                            vlSelf->__Vfunc_leading_zero32__5006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5006__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5012__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5012__part 
                            = vlSelf->__Vfunc_leading_zero32__5012__value;
                        vlSelf->__Vfunc_leading_zero32__5012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5012__count)));
                            vlSelf->__Vfunc_leading_zero32__5012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5012__count)));
                            vlSelf->__Vfunc_leading_zero32__5012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5012__count)));
                            vlSelf->__Vfunc_leading_zero32__5012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5012__count)));
                            vlSelf->__Vfunc_leading_zero32__5012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5012__Vfuncout)) 
                             - (IData)(5U))));
}
